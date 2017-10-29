// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/logging/type/http_request.proto

#ifndef PROTOBUF_google_2flogging_2ftype_2fhttp_5frequest_2eproto__INCLUDED
#define PROTOBUF_google_2flogging_2ftype_2fhttp_5frequest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include <google/protobuf/duration.pb.h>
// @@protoc_insertion_point(includes)

namespace protobuf_google_2flogging_2ftype_2fhttp_5frequest_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsHttpRequestImpl();
void InitDefaultsHttpRequest();
inline void InitDefaults() {
  InitDefaultsHttpRequest();
}
}  // namespace protobuf_google_2flogging_2ftype_2fhttp_5frequest_2eproto
namespace google {
namespace logging {
namespace type {
class HttpRequest;
class HttpRequestDefaultTypeInternal;
extern HttpRequestDefaultTypeInternal _HttpRequest_default_instance_;
}  // namespace type
}  // namespace logging
}  // namespace google
namespace google {
namespace logging {
namespace type {

// ===================================================================

class HttpRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.logging.type.HttpRequest) */ {
 public:
  HttpRequest();
  virtual ~HttpRequest();

  HttpRequest(const HttpRequest& from);

  inline HttpRequest& operator=(const HttpRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HttpRequest(HttpRequest&& from) noexcept
    : HttpRequest() {
    *this = ::std::move(from);
  }

  inline HttpRequest& operator=(HttpRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const HttpRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HttpRequest* internal_default_instance() {
    return reinterpret_cast<const HttpRequest*>(
               &_HttpRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(HttpRequest* other);
  friend void swap(HttpRequest& a, HttpRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HttpRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  HttpRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const HttpRequest& from);
  void MergeFrom(const HttpRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(HttpRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string request_method = 1;
  void clear_request_method();
  static const int kRequestMethodFieldNumber = 1;
  const ::std::string& request_method() const;
  void set_request_method(const ::std::string& value);
  #if LANG_CXX11
  void set_request_method(::std::string&& value);
  #endif
  void set_request_method(const char* value);
  void set_request_method(const char* value, size_t size);
  ::std::string* mutable_request_method();
  ::std::string* release_request_method();
  void set_allocated_request_method(::std::string* request_method);

  // string request_url = 2;
  void clear_request_url();
  static const int kRequestUrlFieldNumber = 2;
  const ::std::string& request_url() const;
  void set_request_url(const ::std::string& value);
  #if LANG_CXX11
  void set_request_url(::std::string&& value);
  #endif
  void set_request_url(const char* value);
  void set_request_url(const char* value, size_t size);
  ::std::string* mutable_request_url();
  ::std::string* release_request_url();
  void set_allocated_request_url(::std::string* request_url);

  // string user_agent = 6;
  void clear_user_agent();
  static const int kUserAgentFieldNumber = 6;
  const ::std::string& user_agent() const;
  void set_user_agent(const ::std::string& value);
  #if LANG_CXX11
  void set_user_agent(::std::string&& value);
  #endif
  void set_user_agent(const char* value);
  void set_user_agent(const char* value, size_t size);
  ::std::string* mutable_user_agent();
  ::std::string* release_user_agent();
  void set_allocated_user_agent(::std::string* user_agent);

  // string remote_ip = 7;
  void clear_remote_ip();
  static const int kRemoteIpFieldNumber = 7;
  const ::std::string& remote_ip() const;
  void set_remote_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_remote_ip(::std::string&& value);
  #endif
  void set_remote_ip(const char* value);
  void set_remote_ip(const char* value, size_t size);
  ::std::string* mutable_remote_ip();
  ::std::string* release_remote_ip();
  void set_allocated_remote_ip(::std::string* remote_ip);

  // string referer = 8;
  void clear_referer();
  static const int kRefererFieldNumber = 8;
  const ::std::string& referer() const;
  void set_referer(const ::std::string& value);
  #if LANG_CXX11
  void set_referer(::std::string&& value);
  #endif
  void set_referer(const char* value);
  void set_referer(const char* value, size_t size);
  ::std::string* mutable_referer();
  ::std::string* release_referer();
  void set_allocated_referer(::std::string* referer);

  // string server_ip = 13;
  void clear_server_ip();
  static const int kServerIpFieldNumber = 13;
  const ::std::string& server_ip() const;
  void set_server_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_server_ip(::std::string&& value);
  #endif
  void set_server_ip(const char* value);
  void set_server_ip(const char* value, size_t size);
  ::std::string* mutable_server_ip();
  ::std::string* release_server_ip();
  void set_allocated_server_ip(::std::string* server_ip);

  // .google.protobuf.Duration latency = 14;
  bool has_latency() const;
  void clear_latency();
  static const int kLatencyFieldNumber = 14;
  const ::google::protobuf::Duration& latency() const;
  ::google::protobuf::Duration* release_latency();
  ::google::protobuf::Duration* mutable_latency();
  void set_allocated_latency(::google::protobuf::Duration* latency);

  // int64 request_size = 3;
  void clear_request_size();
  static const int kRequestSizeFieldNumber = 3;
  ::google::protobuf::int64 request_size() const;
  void set_request_size(::google::protobuf::int64 value);

  // int64 response_size = 5;
  void clear_response_size();
  static const int kResponseSizeFieldNumber = 5;
  ::google::protobuf::int64 response_size() const;
  void set_response_size(::google::protobuf::int64 value);

  // int32 status = 4;
  void clear_status();
  static const int kStatusFieldNumber = 4;
  ::google::protobuf::int32 status() const;
  void set_status(::google::protobuf::int32 value);

  // bool cache_lookup = 11;
  void clear_cache_lookup();
  static const int kCacheLookupFieldNumber = 11;
  bool cache_lookup() const;
  void set_cache_lookup(bool value);

  // bool cache_hit = 9;
  void clear_cache_hit();
  static const int kCacheHitFieldNumber = 9;
  bool cache_hit() const;
  void set_cache_hit(bool value);

  // bool cache_validated_with_origin_server = 10;
  void clear_cache_validated_with_origin_server();
  static const int kCacheValidatedWithOriginServerFieldNumber = 10;
  bool cache_validated_with_origin_server() const;
  void set_cache_validated_with_origin_server(bool value);

  // int64 cache_fill_bytes = 12;
  void clear_cache_fill_bytes();
  static const int kCacheFillBytesFieldNumber = 12;
  ::google::protobuf::int64 cache_fill_bytes() const;
  void set_cache_fill_bytes(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:google.logging.type.HttpRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr request_method_;
  ::google::protobuf::internal::ArenaStringPtr request_url_;
  ::google::protobuf::internal::ArenaStringPtr user_agent_;
  ::google::protobuf::internal::ArenaStringPtr remote_ip_;
  ::google::protobuf::internal::ArenaStringPtr referer_;
  ::google::protobuf::internal::ArenaStringPtr server_ip_;
  ::google::protobuf::Duration* latency_;
  ::google::protobuf::int64 request_size_;
  ::google::protobuf::int64 response_size_;
  ::google::protobuf::int32 status_;
  bool cache_lookup_;
  bool cache_hit_;
  bool cache_validated_with_origin_server_;
  ::google::protobuf::int64 cache_fill_bytes_;
  mutable int _cached_size_;
  friend struct ::protobuf_google_2flogging_2ftype_2fhttp_5frequest_2eproto::TableStruct;
  friend void ::protobuf_google_2flogging_2ftype_2fhttp_5frequest_2eproto::InitDefaultsHttpRequestImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HttpRequest

// string request_method = 1;
inline void HttpRequest::clear_request_method() {
  request_method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HttpRequest::request_method() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.request_method)
  return request_method_.GetNoArena();
}
inline void HttpRequest::set_request_method(const ::std::string& value) {
  
  request_method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.request_method)
}
#if LANG_CXX11
inline void HttpRequest::set_request_method(::std::string&& value) {
  
  request_method_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.logging.type.HttpRequest.request_method)
}
#endif
inline void HttpRequest::set_request_method(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  request_method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.logging.type.HttpRequest.request_method)
}
inline void HttpRequest::set_request_method(const char* value, size_t size) {
  
  request_method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.logging.type.HttpRequest.request_method)
}
inline ::std::string* HttpRequest::mutable_request_method() {
  
  // @@protoc_insertion_point(field_mutable:google.logging.type.HttpRequest.request_method)
  return request_method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpRequest::release_request_method() {
  // @@protoc_insertion_point(field_release:google.logging.type.HttpRequest.request_method)
  
  return request_method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRequest::set_allocated_request_method(::std::string* request_method) {
  if (request_method != NULL) {
    
  } else {
    
  }
  request_method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request_method);
  // @@protoc_insertion_point(field_set_allocated:google.logging.type.HttpRequest.request_method)
}

// string request_url = 2;
inline void HttpRequest::clear_request_url() {
  request_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HttpRequest::request_url() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.request_url)
  return request_url_.GetNoArena();
}
inline void HttpRequest::set_request_url(const ::std::string& value) {
  
  request_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.request_url)
}
#if LANG_CXX11
inline void HttpRequest::set_request_url(::std::string&& value) {
  
  request_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.logging.type.HttpRequest.request_url)
}
#endif
inline void HttpRequest::set_request_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  request_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.logging.type.HttpRequest.request_url)
}
inline void HttpRequest::set_request_url(const char* value, size_t size) {
  
  request_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.logging.type.HttpRequest.request_url)
}
inline ::std::string* HttpRequest::mutable_request_url() {
  
  // @@protoc_insertion_point(field_mutable:google.logging.type.HttpRequest.request_url)
  return request_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpRequest::release_request_url() {
  // @@protoc_insertion_point(field_release:google.logging.type.HttpRequest.request_url)
  
  return request_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRequest::set_allocated_request_url(::std::string* request_url) {
  if (request_url != NULL) {
    
  } else {
    
  }
  request_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request_url);
  // @@protoc_insertion_point(field_set_allocated:google.logging.type.HttpRequest.request_url)
}

// int64 request_size = 3;
inline void HttpRequest::clear_request_size() {
  request_size_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 HttpRequest::request_size() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.request_size)
  return request_size_;
}
inline void HttpRequest::set_request_size(::google::protobuf::int64 value) {
  
  request_size_ = value;
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.request_size)
}

// int32 status = 4;
inline void HttpRequest::clear_status() {
  status_ = 0;
}
inline ::google::protobuf::int32 HttpRequest::status() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.status)
  return status_;
}
inline void HttpRequest::set_status(::google::protobuf::int32 value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.status)
}

// int64 response_size = 5;
inline void HttpRequest::clear_response_size() {
  response_size_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 HttpRequest::response_size() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.response_size)
  return response_size_;
}
inline void HttpRequest::set_response_size(::google::protobuf::int64 value) {
  
  response_size_ = value;
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.response_size)
}

// string user_agent = 6;
inline void HttpRequest::clear_user_agent() {
  user_agent_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HttpRequest::user_agent() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.user_agent)
  return user_agent_.GetNoArena();
}
inline void HttpRequest::set_user_agent(const ::std::string& value) {
  
  user_agent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.user_agent)
}
#if LANG_CXX11
inline void HttpRequest::set_user_agent(::std::string&& value) {
  
  user_agent_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.logging.type.HttpRequest.user_agent)
}
#endif
inline void HttpRequest::set_user_agent(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  user_agent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.logging.type.HttpRequest.user_agent)
}
inline void HttpRequest::set_user_agent(const char* value, size_t size) {
  
  user_agent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.logging.type.HttpRequest.user_agent)
}
inline ::std::string* HttpRequest::mutable_user_agent() {
  
  // @@protoc_insertion_point(field_mutable:google.logging.type.HttpRequest.user_agent)
  return user_agent_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpRequest::release_user_agent() {
  // @@protoc_insertion_point(field_release:google.logging.type.HttpRequest.user_agent)
  
  return user_agent_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRequest::set_allocated_user_agent(::std::string* user_agent) {
  if (user_agent != NULL) {
    
  } else {
    
  }
  user_agent_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_agent);
  // @@protoc_insertion_point(field_set_allocated:google.logging.type.HttpRequest.user_agent)
}

// string remote_ip = 7;
inline void HttpRequest::clear_remote_ip() {
  remote_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HttpRequest::remote_ip() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.remote_ip)
  return remote_ip_.GetNoArena();
}
inline void HttpRequest::set_remote_ip(const ::std::string& value) {
  
  remote_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.remote_ip)
}
#if LANG_CXX11
inline void HttpRequest::set_remote_ip(::std::string&& value) {
  
  remote_ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.logging.type.HttpRequest.remote_ip)
}
#endif
inline void HttpRequest::set_remote_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  remote_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.logging.type.HttpRequest.remote_ip)
}
inline void HttpRequest::set_remote_ip(const char* value, size_t size) {
  
  remote_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.logging.type.HttpRequest.remote_ip)
}
inline ::std::string* HttpRequest::mutable_remote_ip() {
  
  // @@protoc_insertion_point(field_mutable:google.logging.type.HttpRequest.remote_ip)
  return remote_ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpRequest::release_remote_ip() {
  // @@protoc_insertion_point(field_release:google.logging.type.HttpRequest.remote_ip)
  
  return remote_ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRequest::set_allocated_remote_ip(::std::string* remote_ip) {
  if (remote_ip != NULL) {
    
  } else {
    
  }
  remote_ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), remote_ip);
  // @@protoc_insertion_point(field_set_allocated:google.logging.type.HttpRequest.remote_ip)
}

// string server_ip = 13;
inline void HttpRequest::clear_server_ip() {
  server_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HttpRequest::server_ip() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.server_ip)
  return server_ip_.GetNoArena();
}
inline void HttpRequest::set_server_ip(const ::std::string& value) {
  
  server_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.server_ip)
}
#if LANG_CXX11
inline void HttpRequest::set_server_ip(::std::string&& value) {
  
  server_ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.logging.type.HttpRequest.server_ip)
}
#endif
inline void HttpRequest::set_server_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  server_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.logging.type.HttpRequest.server_ip)
}
inline void HttpRequest::set_server_ip(const char* value, size_t size) {
  
  server_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.logging.type.HttpRequest.server_ip)
}
inline ::std::string* HttpRequest::mutable_server_ip() {
  
  // @@protoc_insertion_point(field_mutable:google.logging.type.HttpRequest.server_ip)
  return server_ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpRequest::release_server_ip() {
  // @@protoc_insertion_point(field_release:google.logging.type.HttpRequest.server_ip)
  
  return server_ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRequest::set_allocated_server_ip(::std::string* server_ip) {
  if (server_ip != NULL) {
    
  } else {
    
  }
  server_ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), server_ip);
  // @@protoc_insertion_point(field_set_allocated:google.logging.type.HttpRequest.server_ip)
}

// string referer = 8;
inline void HttpRequest::clear_referer() {
  referer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HttpRequest::referer() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.referer)
  return referer_.GetNoArena();
}
inline void HttpRequest::set_referer(const ::std::string& value) {
  
  referer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.referer)
}
#if LANG_CXX11
inline void HttpRequest::set_referer(::std::string&& value) {
  
  referer_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.logging.type.HttpRequest.referer)
}
#endif
inline void HttpRequest::set_referer(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  referer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.logging.type.HttpRequest.referer)
}
inline void HttpRequest::set_referer(const char* value, size_t size) {
  
  referer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.logging.type.HttpRequest.referer)
}
inline ::std::string* HttpRequest::mutable_referer() {
  
  // @@protoc_insertion_point(field_mutable:google.logging.type.HttpRequest.referer)
  return referer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpRequest::release_referer() {
  // @@protoc_insertion_point(field_release:google.logging.type.HttpRequest.referer)
  
  return referer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRequest::set_allocated_referer(::std::string* referer) {
  if (referer != NULL) {
    
  } else {
    
  }
  referer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), referer);
  // @@protoc_insertion_point(field_set_allocated:google.logging.type.HttpRequest.referer)
}

// .google.protobuf.Duration latency = 14;
inline bool HttpRequest::has_latency() const {
  return this != internal_default_instance() && latency_ != NULL;
}
inline const ::google::protobuf::Duration& HttpRequest::latency() const {
  const ::google::protobuf::Duration* p = latency_;
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.latency)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Duration*>(
      &::google::protobuf::_Duration_default_instance_);
}
inline ::google::protobuf::Duration* HttpRequest::release_latency() {
  // @@protoc_insertion_point(field_release:google.logging.type.HttpRequest.latency)
  
  ::google::protobuf::Duration* temp = latency_;
  latency_ = NULL;
  return temp;
}
inline ::google::protobuf::Duration* HttpRequest::mutable_latency() {
  
  if (latency_ == NULL) {
    latency_ = new ::google::protobuf::Duration;
  }
  // @@protoc_insertion_point(field_mutable:google.logging.type.HttpRequest.latency)
  return latency_;
}
inline void HttpRequest::set_allocated_latency(::google::protobuf::Duration* latency) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(latency_);
  }
  if (latency) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(latency)->GetArena();
    if (message_arena != submessage_arena) {
      latency = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, latency, submessage_arena);
    }
    
  } else {
    
  }
  latency_ = latency;
  // @@protoc_insertion_point(field_set_allocated:google.logging.type.HttpRequest.latency)
}

// bool cache_lookup = 11;
inline void HttpRequest::clear_cache_lookup() {
  cache_lookup_ = false;
}
inline bool HttpRequest::cache_lookup() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.cache_lookup)
  return cache_lookup_;
}
inline void HttpRequest::set_cache_lookup(bool value) {
  
  cache_lookup_ = value;
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.cache_lookup)
}

// bool cache_hit = 9;
inline void HttpRequest::clear_cache_hit() {
  cache_hit_ = false;
}
inline bool HttpRequest::cache_hit() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.cache_hit)
  return cache_hit_;
}
inline void HttpRequest::set_cache_hit(bool value) {
  
  cache_hit_ = value;
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.cache_hit)
}

// bool cache_validated_with_origin_server = 10;
inline void HttpRequest::clear_cache_validated_with_origin_server() {
  cache_validated_with_origin_server_ = false;
}
inline bool HttpRequest::cache_validated_with_origin_server() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.cache_validated_with_origin_server)
  return cache_validated_with_origin_server_;
}
inline void HttpRequest::set_cache_validated_with_origin_server(bool value) {
  
  cache_validated_with_origin_server_ = value;
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.cache_validated_with_origin_server)
}

// int64 cache_fill_bytes = 12;
inline void HttpRequest::clear_cache_fill_bytes() {
  cache_fill_bytes_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 HttpRequest::cache_fill_bytes() const {
  // @@protoc_insertion_point(field_get:google.logging.type.HttpRequest.cache_fill_bytes)
  return cache_fill_bytes_;
}
inline void HttpRequest::set_cache_fill_bytes(::google::protobuf::int64 value) {
  
  cache_fill_bytes_ = value;
  // @@protoc_insertion_point(field_set:google.logging.type.HttpRequest.cache_fill_bytes)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace logging
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2flogging_2ftype_2fhttp_5frequest_2eproto__INCLUDED