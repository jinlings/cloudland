#!/bin/bash

cd `dirname $0`
source ../cloudrc

[ $# -lt 2 ] && echo "$0 <router> <vni>" && exit -1

router=$1
[ "${router/router-/}" = "$router" ] && router=router-$1
vni=$2

routes=$(cat)
router_dir=/opt/cloudland/cache/router/$router
vrrp_conf=$router_dir/keepalived.conf
notify_sh=$router_dir/notify.sh
pid_file=$router_dir/keepalived.pid

iface=ns-$vni
sed -i "\#ip netns exec $router route add -net .* gw .* dev $iface#d" $notify_sh
i=0
rlen=$(jq length <<< $routes)
while [ $i -lt $rlen ]; do
    destination=$(jq -r .[$i].destination <<< $routes)
    nexthop=$(jq -r .[$i].nexthop <<< $routes)
    ip netns exec $router route add -net $destination gw $nexthop dev $iface
    sed -i "/\"MASTER\")/a ip netns exec $router route add -net $destination gw $nexthop dev $iface" $notify_sh
    let i=$i+1
done

[ -f "$pid_file" ] && ip netns exec $router kill -HUP $(cat $pid_file)