// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: remotexec.proto

#include "remotexec.pb.h"
#include "remotexec.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace com {
namespace ibm {
namespace cloudland {
namespace scripts {

static const char* RemoteExec_method_names[] = {
  "/com.ibm.cloudland.scripts.RemoteExec/Execute",
  "/com.ibm.cloudland.scripts.RemoteExec/Transmit",
};

std::unique_ptr< RemoteExec::Stub> RemoteExec::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RemoteExec::Stub> stub(new RemoteExec::Stub(channel));
  return stub;
}

RemoteExec::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Execute_(RemoteExec_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Transmit_(RemoteExec_method_names[1], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  {}

::grpc::Status RemoteExec::Stub::Execute(::grpc::ClientContext* context, const ::com::ibm::cloudland::scripts::ExecuteRequest& request, ::com::ibm::cloudland::scripts::ExecuteReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Execute_, context, request, response);
}

void RemoteExec::Stub::experimental_async::Execute(::grpc::ClientContext* context, const ::com::ibm::cloudland::scripts::ExecuteRequest* request, ::com::ibm::cloudland::scripts::ExecuteReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Execute_, context, request, response, std::move(f));
}

void RemoteExec::Stub::experimental_async::Execute(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::com::ibm::cloudland::scripts::ExecuteReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Execute_, context, request, response, std::move(f));
}

void RemoteExec::Stub::experimental_async::Execute(::grpc::ClientContext* context, const ::com::ibm::cloudland::scripts::ExecuteRequest* request, ::com::ibm::cloudland::scripts::ExecuteReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Execute_, context, request, response, reactor);
}

void RemoteExec::Stub::experimental_async::Execute(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::com::ibm::cloudland::scripts::ExecuteReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Execute_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::com::ibm::cloudland::scripts::ExecuteReply>* RemoteExec::Stub::AsyncExecuteRaw(::grpc::ClientContext* context, const ::com::ibm::cloudland::scripts::ExecuteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::com::ibm::cloudland::scripts::ExecuteReply>::Create(channel_.get(), cq, rpcmethod_Execute_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::com::ibm::cloudland::scripts::ExecuteReply>* RemoteExec::Stub::PrepareAsyncExecuteRaw(::grpc::ClientContext* context, const ::com::ibm::cloudland::scripts::ExecuteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::com::ibm::cloudland::scripts::ExecuteReply>::Create(channel_.get(), cq, rpcmethod_Execute_, context, request, false);
}

::grpc::ClientWriter< ::com::ibm::cloudland::scripts::FileChunk>* RemoteExec::Stub::TransmitRaw(::grpc::ClientContext* context, ::com::ibm::cloudland::scripts::TransmitAck* response) {
  return ::grpc::internal::ClientWriterFactory< ::com::ibm::cloudland::scripts::FileChunk>::Create(channel_.get(), rpcmethod_Transmit_, context, response);
}

void RemoteExec::Stub::experimental_async::Transmit(::grpc::ClientContext* context, ::com::ibm::cloudland::scripts::TransmitAck* response, ::grpc::experimental::ClientWriteReactor< ::com::ibm::cloudland::scripts::FileChunk>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::com::ibm::cloudland::scripts::FileChunk>::Create(stub_->channel_.get(), stub_->rpcmethod_Transmit_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::com::ibm::cloudland::scripts::FileChunk>* RemoteExec::Stub::AsyncTransmitRaw(::grpc::ClientContext* context, ::com::ibm::cloudland::scripts::TransmitAck* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::com::ibm::cloudland::scripts::FileChunk>::Create(channel_.get(), cq, rpcmethod_Transmit_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::com::ibm::cloudland::scripts::FileChunk>* RemoteExec::Stub::PrepareAsyncTransmitRaw(::grpc::ClientContext* context, ::com::ibm::cloudland::scripts::TransmitAck* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::com::ibm::cloudland::scripts::FileChunk>::Create(channel_.get(), cq, rpcmethod_Transmit_, context, response, false, nullptr);
}

RemoteExec::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RemoteExec_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RemoteExec::Service, ::com::ibm::cloudland::scripts::ExecuteRequest, ::com::ibm::cloudland::scripts::ExecuteReply>(
          std::mem_fn(&RemoteExec::Service::Execute), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RemoteExec_method_names[1],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< RemoteExec::Service, ::com::ibm::cloudland::scripts::FileChunk, ::com::ibm::cloudland::scripts::TransmitAck>(
          std::mem_fn(&RemoteExec::Service::Transmit), this)));
}

RemoteExec::Service::~Service() {
}

::grpc::Status RemoteExec::Service::Execute(::grpc::ServerContext* context, const ::com::ibm::cloudland::scripts::ExecuteRequest* request, ::com::ibm::cloudland::scripts::ExecuteReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RemoteExec::Service::Transmit(::grpc::ServerContext* context, ::grpc::ServerReader< ::com::ibm::cloudland::scripts::FileChunk>* reader, ::com::ibm::cloudland::scripts::TransmitAck* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace com
}  // namespace ibm
}  // namespace cloudland
}  // namespace scripts

