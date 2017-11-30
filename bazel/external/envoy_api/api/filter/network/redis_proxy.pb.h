// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/filter/network/redis_proxy.proto

#ifndef PROTOBUF_api_2ffilter_2fnetwork_2fredis_5fproxy_2eproto__INCLUDED
#define PROTOBUF_api_2ffilter_2fnetwork_2fredis_5fproxy_2eproto__INCLUDED

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
#include <google/protobuf/duration.pb.h>
// @@protoc_insertion_point(includes)

namespace protobuf_api_2ffilter_2fnetwork_2fredis_5fproxy_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsRedisProxy_ConnPoolSettingsImpl();
void InitDefaultsRedisProxy_ConnPoolSettings();
void InitDefaultsRedisProxyImpl();
void InitDefaultsRedisProxy();
inline void InitDefaults() {
  InitDefaultsRedisProxy_ConnPoolSettings();
  InitDefaultsRedisProxy();
}
}  // namespace protobuf_api_2ffilter_2fnetwork_2fredis_5fproxy_2eproto
namespace envoy {
namespace api {
namespace v2 {
namespace filter {
namespace network {
class RedisProxy;
class RedisProxyDefaultTypeInternal;
extern RedisProxyDefaultTypeInternal _RedisProxy_default_instance_;
class RedisProxy_ConnPoolSettings;
class RedisProxy_ConnPoolSettingsDefaultTypeInternal;
extern RedisProxy_ConnPoolSettingsDefaultTypeInternal _RedisProxy_ConnPoolSettings_default_instance_;
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

class RedisProxy_ConnPoolSettings : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:envoy.api.v2.filter.network.RedisProxy.ConnPoolSettings) */ {
 public:
  RedisProxy_ConnPoolSettings();
  virtual ~RedisProxy_ConnPoolSettings();

  RedisProxy_ConnPoolSettings(const RedisProxy_ConnPoolSettings& from);

  inline RedisProxy_ConnPoolSettings& operator=(const RedisProxy_ConnPoolSettings& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RedisProxy_ConnPoolSettings(RedisProxy_ConnPoolSettings&& from) noexcept
    : RedisProxy_ConnPoolSettings() {
    *this = ::std::move(from);
  }

  inline RedisProxy_ConnPoolSettings& operator=(RedisProxy_ConnPoolSettings&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const RedisProxy_ConnPoolSettings& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RedisProxy_ConnPoolSettings* internal_default_instance() {
    return reinterpret_cast<const RedisProxy_ConnPoolSettings*>(
               &_RedisProxy_ConnPoolSettings_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(RedisProxy_ConnPoolSettings* other);
  friend void swap(RedisProxy_ConnPoolSettings& a, RedisProxy_ConnPoolSettings& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RedisProxy_ConnPoolSettings* New() const PROTOBUF_FINAL { return New(NULL); }

  RedisProxy_ConnPoolSettings* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RedisProxy_ConnPoolSettings& from);
  void MergeFrom(const RedisProxy_ConnPoolSettings& from);
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
  void InternalSwap(RedisProxy_ConnPoolSettings* other);
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

  // .google.protobuf.Duration op_timeout = 1;
  bool has_op_timeout() const;
  void clear_op_timeout();
  static const int kOpTimeoutFieldNumber = 1;
  const ::google::protobuf::Duration& op_timeout() const;
  ::google::protobuf::Duration* release_op_timeout();
  ::google::protobuf::Duration* mutable_op_timeout();
  void set_allocated_op_timeout(::google::protobuf::Duration* op_timeout);

  // @@protoc_insertion_point(class_scope:envoy.api.v2.filter.network.RedisProxy.ConnPoolSettings)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::Duration* op_timeout_;
  mutable int _cached_size_;
  friend struct ::protobuf_api_2ffilter_2fnetwork_2fredis_5fproxy_2eproto::TableStruct;
  friend void ::protobuf_api_2ffilter_2fnetwork_2fredis_5fproxy_2eproto::InitDefaultsRedisProxy_ConnPoolSettingsImpl();
};
// -------------------------------------------------------------------

class RedisProxy : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:envoy.api.v2.filter.network.RedisProxy) */ {
 public:
  RedisProxy();
  virtual ~RedisProxy();

  RedisProxy(const RedisProxy& from);

  inline RedisProxy& operator=(const RedisProxy& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RedisProxy(RedisProxy&& from) noexcept
    : RedisProxy() {
    *this = ::std::move(from);
  }

  inline RedisProxy& operator=(RedisProxy&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const RedisProxy& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RedisProxy* internal_default_instance() {
    return reinterpret_cast<const RedisProxy*>(
               &_RedisProxy_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(RedisProxy* other);
  friend void swap(RedisProxy& a, RedisProxy& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RedisProxy* New() const PROTOBUF_FINAL { return New(NULL); }

  RedisProxy* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RedisProxy& from);
  void MergeFrom(const RedisProxy& from);
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
  void InternalSwap(RedisProxy* other);
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

  typedef RedisProxy_ConnPoolSettings ConnPoolSettings;

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

  // string cluster = 2;
  void clear_cluster();
  static const int kClusterFieldNumber = 2;
  const ::std::string& cluster() const;
  void set_cluster(const ::std::string& value);
  #if LANG_CXX11
  void set_cluster(::std::string&& value);
  #endif
  void set_cluster(const char* value);
  void set_cluster(const char* value, size_t size);
  ::std::string* mutable_cluster();
  ::std::string* release_cluster();
  void set_allocated_cluster(::std::string* cluster);

  // .envoy.api.v2.filter.network.RedisProxy.ConnPoolSettings settings = 3;
  bool has_settings() const;
  void clear_settings();
  static const int kSettingsFieldNumber = 3;
  const ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings& settings() const;
  ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings* release_settings();
  ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings* mutable_settings();
  void set_allocated_settings(::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings* settings);

  // @@protoc_insertion_point(class_scope:envoy.api.v2.filter.network.RedisProxy)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr stat_prefix_;
  ::google::protobuf::internal::ArenaStringPtr cluster_;
  ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings* settings_;
  mutable int _cached_size_;
  friend struct ::protobuf_api_2ffilter_2fnetwork_2fredis_5fproxy_2eproto::TableStruct;
  friend void ::protobuf_api_2ffilter_2fnetwork_2fredis_5fproxy_2eproto::InitDefaultsRedisProxyImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RedisProxy_ConnPoolSettings

// .google.protobuf.Duration op_timeout = 1;
inline bool RedisProxy_ConnPoolSettings::has_op_timeout() const {
  return this != internal_default_instance() && op_timeout_ != NULL;
}
inline const ::google::protobuf::Duration& RedisProxy_ConnPoolSettings::op_timeout() const {
  const ::google::protobuf::Duration* p = op_timeout_;
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.network.RedisProxy.ConnPoolSettings.op_timeout)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Duration*>(
      &::google::protobuf::_Duration_default_instance_);
}
inline ::google::protobuf::Duration* RedisProxy_ConnPoolSettings::release_op_timeout() {
  // @@protoc_insertion_point(field_release:envoy.api.v2.filter.network.RedisProxy.ConnPoolSettings.op_timeout)
  
  ::google::protobuf::Duration* temp = op_timeout_;
  op_timeout_ = NULL;
  return temp;
}
inline ::google::protobuf::Duration* RedisProxy_ConnPoolSettings::mutable_op_timeout() {
  
  if (op_timeout_ == NULL) {
    op_timeout_ = new ::google::protobuf::Duration;
  }
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.network.RedisProxy.ConnPoolSettings.op_timeout)
  return op_timeout_;
}
inline void RedisProxy_ConnPoolSettings::set_allocated_op_timeout(::google::protobuf::Duration* op_timeout) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(op_timeout_);
  }
  if (op_timeout) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(op_timeout)->GetArena();
    if (message_arena != submessage_arena) {
      op_timeout = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, op_timeout, submessage_arena);
    }
    
  } else {
    
  }
  op_timeout_ = op_timeout;
  // @@protoc_insertion_point(field_set_allocated:envoy.api.v2.filter.network.RedisProxy.ConnPoolSettings.op_timeout)
}

// -------------------------------------------------------------------

// RedisProxy

// string stat_prefix = 1;
inline void RedisProxy::clear_stat_prefix() {
  stat_prefix_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RedisProxy::stat_prefix() const {
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.network.RedisProxy.stat_prefix)
  return stat_prefix_.GetNoArena();
}
inline void RedisProxy::set_stat_prefix(const ::std::string& value) {
  
  stat_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:envoy.api.v2.filter.network.RedisProxy.stat_prefix)
}
#if LANG_CXX11
inline void RedisProxy::set_stat_prefix(::std::string&& value) {
  
  stat_prefix_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:envoy.api.v2.filter.network.RedisProxy.stat_prefix)
}
#endif
inline void RedisProxy::set_stat_prefix(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  stat_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:envoy.api.v2.filter.network.RedisProxy.stat_prefix)
}
inline void RedisProxy::set_stat_prefix(const char* value, size_t size) {
  
  stat_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:envoy.api.v2.filter.network.RedisProxy.stat_prefix)
}
inline ::std::string* RedisProxy::mutable_stat_prefix() {
  
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.network.RedisProxy.stat_prefix)
  return stat_prefix_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RedisProxy::release_stat_prefix() {
  // @@protoc_insertion_point(field_release:envoy.api.v2.filter.network.RedisProxy.stat_prefix)
  
  return stat_prefix_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RedisProxy::set_allocated_stat_prefix(::std::string* stat_prefix) {
  if (stat_prefix != NULL) {
    
  } else {
    
  }
  stat_prefix_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), stat_prefix);
  // @@protoc_insertion_point(field_set_allocated:envoy.api.v2.filter.network.RedisProxy.stat_prefix)
}

// string cluster = 2;
inline void RedisProxy::clear_cluster() {
  cluster_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RedisProxy::cluster() const {
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.network.RedisProxy.cluster)
  return cluster_.GetNoArena();
}
inline void RedisProxy::set_cluster(const ::std::string& value) {
  
  cluster_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:envoy.api.v2.filter.network.RedisProxy.cluster)
}
#if LANG_CXX11
inline void RedisProxy::set_cluster(::std::string&& value) {
  
  cluster_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:envoy.api.v2.filter.network.RedisProxy.cluster)
}
#endif
inline void RedisProxy::set_cluster(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  cluster_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:envoy.api.v2.filter.network.RedisProxy.cluster)
}
inline void RedisProxy::set_cluster(const char* value, size_t size) {
  
  cluster_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:envoy.api.v2.filter.network.RedisProxy.cluster)
}
inline ::std::string* RedisProxy::mutable_cluster() {
  
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.network.RedisProxy.cluster)
  return cluster_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RedisProxy::release_cluster() {
  // @@protoc_insertion_point(field_release:envoy.api.v2.filter.network.RedisProxy.cluster)
  
  return cluster_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RedisProxy::set_allocated_cluster(::std::string* cluster) {
  if (cluster != NULL) {
    
  } else {
    
  }
  cluster_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cluster);
  // @@protoc_insertion_point(field_set_allocated:envoy.api.v2.filter.network.RedisProxy.cluster)
}

// .envoy.api.v2.filter.network.RedisProxy.ConnPoolSettings settings = 3;
inline bool RedisProxy::has_settings() const {
  return this != internal_default_instance() && settings_ != NULL;
}
inline void RedisProxy::clear_settings() {
  if (GetArenaNoVirtual() == NULL && settings_ != NULL) {
    delete settings_;
  }
  settings_ = NULL;
}
inline const ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings& RedisProxy::settings() const {
  const ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings* p = settings_;
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.network.RedisProxy.settings)
  return p != NULL ? *p : *reinterpret_cast<const ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings*>(
      &::envoy::api::v2::filter::network::_RedisProxy_ConnPoolSettings_default_instance_);
}
inline ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings* RedisProxy::release_settings() {
  // @@protoc_insertion_point(field_release:envoy.api.v2.filter.network.RedisProxy.settings)
  
  ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings* temp = settings_;
  settings_ = NULL;
  return temp;
}
inline ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings* RedisProxy::mutable_settings() {
  
  if (settings_ == NULL) {
    settings_ = new ::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings;
  }
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.network.RedisProxy.settings)
  return settings_;
}
inline void RedisProxy::set_allocated_settings(::envoy::api::v2::filter::network::RedisProxy_ConnPoolSettings* settings) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete settings_;
  }
  if (settings) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      settings = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, settings, submessage_arena);
    }
    
  } else {
    
  }
  settings_ = settings;
  // @@protoc_insertion_point(field_set_allocated:envoy.api.v2.filter.network.RedisProxy.settings)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace network
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_api_2ffilter_2fnetwork_2fredis_5fproxy_2eproto__INCLUDED
