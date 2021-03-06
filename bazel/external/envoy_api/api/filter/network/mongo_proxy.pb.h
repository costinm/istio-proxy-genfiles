// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/filter/network/mongo_proxy.proto

#ifndef PROTOBUF_api_2ffilter_2fnetwork_2fmongo_5fproxy_2eproto__INCLUDED
#define PROTOBUF_api_2ffilter_2fnetwork_2fmongo_5fproxy_2eproto__INCLUDED

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
#include "api/filter/fault.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_api_2ffilter_2fnetwork_2fmongo_5fproxy_2eproto {
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
void InitDefaultsMongoProxyImpl();
void InitDefaultsMongoProxy();
inline void InitDefaults() {
  InitDefaultsMongoProxy();
}
}  // namespace protobuf_api_2ffilter_2fnetwork_2fmongo_5fproxy_2eproto
namespace envoy {
namespace api {
namespace v2 {
namespace filter {
namespace network {
class MongoProxy;
class MongoProxyDefaultTypeInternal;
extern MongoProxyDefaultTypeInternal _MongoProxy_default_instance_;
}  // namespace network
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy
namespace envoy {
namespace api {
namespace v2 {
namespace filter {
namespace network {

// ===================================================================

class MongoProxy : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:envoy.api.v2.filter.network.MongoProxy) */ {
 public:
  MongoProxy();
  virtual ~MongoProxy();

  MongoProxy(const MongoProxy& from);

  inline MongoProxy& operator=(const MongoProxy& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MongoProxy(MongoProxy&& from) noexcept
    : MongoProxy() {
    *this = ::std::move(from);
  }

  inline MongoProxy& operator=(MongoProxy&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MongoProxy& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MongoProxy* internal_default_instance() {
    return reinterpret_cast<const MongoProxy*>(
               &_MongoProxy_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MongoProxy* other);
  friend void swap(MongoProxy& a, MongoProxy& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MongoProxy* New() const PROTOBUF_FINAL { return New(NULL); }

  MongoProxy* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MongoProxy& from);
  void MergeFrom(const MongoProxy& from);
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
  void InternalSwap(MongoProxy* other);
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

  // string stat_prefix = 1;
  void clear_stat_prefix();
  static const int kStatPrefixFieldNumber = 1;
  const ::std::string& stat_prefix() const;
  void set_stat_prefix(const ::std::string& value);
  #if LANG_CXX11
  void set_stat_prefix(::std::string&& value);
  #endif
  void set_stat_prefix(const char* value);
  void set_stat_prefix(const char* value, size_t size);
  ::std::string* mutable_stat_prefix();
  ::std::string* release_stat_prefix();
  void set_allocated_stat_prefix(::std::string* stat_prefix);

  // string access_log = 2;
  void clear_access_log();
  static const int kAccessLogFieldNumber = 2;
  const ::std::string& access_log() const;
  void set_access_log(const ::std::string& value);
  #if LANG_CXX11
  void set_access_log(::std::string&& value);
  #endif
  void set_access_log(const char* value);
  void set_access_log(const char* value, size_t size);
  ::std::string* mutable_access_log();
  ::std::string* release_access_log();
  void set_allocated_access_log(::std::string* access_log);

  // .envoy.api.v2.filter.FaultDelay delay = 3;
  bool has_delay() const;
  void clear_delay();
  static const int kDelayFieldNumber = 3;
  const ::envoy::api::v2::filter::FaultDelay& delay() const;
  ::envoy::api::v2::filter::FaultDelay* mutable_delay();
  ::envoy::api::v2::filter::FaultDelay* release_delay();
  void set_allocated_delay(::envoy::api::v2::filter::FaultDelay* delay);

  // @@protoc_insertion_point(class_scope:envoy.api.v2.filter.network.MongoProxy)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr stat_prefix_;
  ::google::protobuf::internal::ArenaStringPtr access_log_;
  ::envoy::api::v2::filter::FaultDelay* delay_;
  mutable int _cached_size_;
  friend struct ::protobuf_api_2ffilter_2fnetwork_2fmongo_5fproxy_2eproto::TableStruct;
  friend void ::protobuf_api_2ffilter_2fnetwork_2fmongo_5fproxy_2eproto::InitDefaultsMongoProxyImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MongoProxy

// string stat_prefix = 1;
inline void MongoProxy::clear_stat_prefix() {
  stat_prefix_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MongoProxy::stat_prefix() const {
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.network.MongoProxy.stat_prefix)
  return stat_prefix_.GetNoArena();
}
inline void MongoProxy::set_stat_prefix(const ::std::string& value) {
  
  stat_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:envoy.api.v2.filter.network.MongoProxy.stat_prefix)
}
#if LANG_CXX11
inline void MongoProxy::set_stat_prefix(::std::string&& value) {
  
  stat_prefix_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:envoy.api.v2.filter.network.MongoProxy.stat_prefix)
}
#endif
inline void MongoProxy::set_stat_prefix(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  stat_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:envoy.api.v2.filter.network.MongoProxy.stat_prefix)
}
inline void MongoProxy::set_stat_prefix(const char* value, size_t size) {
  
  stat_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:envoy.api.v2.filter.network.MongoProxy.stat_prefix)
}
inline ::std::string* MongoProxy::mutable_stat_prefix() {
  
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.network.MongoProxy.stat_prefix)
  return stat_prefix_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MongoProxy::release_stat_prefix() {
  // @@protoc_insertion_point(field_release:envoy.api.v2.filter.network.MongoProxy.stat_prefix)
  
  return stat_prefix_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MongoProxy::set_allocated_stat_prefix(::std::string* stat_prefix) {
  if (stat_prefix != NULL) {
    
  } else {
    
  }
  stat_prefix_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), stat_prefix);
  // @@protoc_insertion_point(field_set_allocated:envoy.api.v2.filter.network.MongoProxy.stat_prefix)
}

// string access_log = 2;
inline void MongoProxy::clear_access_log() {
  access_log_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MongoProxy::access_log() const {
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.network.MongoProxy.access_log)
  return access_log_.GetNoArena();
}
inline void MongoProxy::set_access_log(const ::std::string& value) {
  
  access_log_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:envoy.api.v2.filter.network.MongoProxy.access_log)
}
#if LANG_CXX11
inline void MongoProxy::set_access_log(::std::string&& value) {
  
  access_log_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:envoy.api.v2.filter.network.MongoProxy.access_log)
}
#endif
inline void MongoProxy::set_access_log(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  access_log_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:envoy.api.v2.filter.network.MongoProxy.access_log)
}
inline void MongoProxy::set_access_log(const char* value, size_t size) {
  
  access_log_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:envoy.api.v2.filter.network.MongoProxy.access_log)
}
inline ::std::string* MongoProxy::mutable_access_log() {
  
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.network.MongoProxy.access_log)
  return access_log_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MongoProxy::release_access_log() {
  // @@protoc_insertion_point(field_release:envoy.api.v2.filter.network.MongoProxy.access_log)
  
  return access_log_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MongoProxy::set_allocated_access_log(::std::string* access_log) {
  if (access_log != NULL) {
    
  } else {
    
  }
  access_log_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), access_log);
  // @@protoc_insertion_point(field_set_allocated:envoy.api.v2.filter.network.MongoProxy.access_log)
}

// .envoy.api.v2.filter.FaultDelay delay = 3;
inline bool MongoProxy::has_delay() const {
  return this != internal_default_instance() && delay_ != NULL;
}
inline void MongoProxy::clear_delay() {
  if (GetArenaNoVirtual() == NULL && delay_ != NULL) delete delay_;
  delay_ = NULL;
}
inline const ::envoy::api::v2::filter::FaultDelay& MongoProxy::delay() const {
  const ::envoy::api::v2::filter::FaultDelay* p = delay_;
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.network.MongoProxy.delay)
  return p != NULL ? *p : *reinterpret_cast<const ::envoy::api::v2::filter::FaultDelay*>(
      &::envoy::api::v2::filter::_FaultDelay_default_instance_);
}
inline ::envoy::api::v2::filter::FaultDelay* MongoProxy::mutable_delay() {
  
  if (delay_ == NULL) {
    delay_ = new ::envoy::api::v2::filter::FaultDelay;
  }
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.network.MongoProxy.delay)
  return delay_;
}
inline ::envoy::api::v2::filter::FaultDelay* MongoProxy::release_delay() {
  // @@protoc_insertion_point(field_release:envoy.api.v2.filter.network.MongoProxy.delay)
  
  ::envoy::api::v2::filter::FaultDelay* temp = delay_;
  delay_ = NULL;
  return temp;
}
inline void MongoProxy::set_allocated_delay(::envoy::api::v2::filter::FaultDelay* delay) {
  delete delay_;
  delay_ = delay;
  if (delay) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:envoy.api.v2.filter.network.MongoProxy.delay)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace network
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_api_2ffilter_2fnetwork_2fmongo_5fproxy_2eproto__INCLUDED
