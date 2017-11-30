// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/filter/http/fault.proto

#ifndef PROTOBUF_api_2ffilter_2fhttp_2ffault_2eproto__INCLUDED
#define PROTOBUF_api_2ffilter_2fhttp_2ffault_2eproto__INCLUDED

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
#include "api/rds.pb.h"
#include "api/filter/fault.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_api_2ffilter_2fhttp_2ffault_2eproto {
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
void InitDefaultsFaultAbortImpl();
void InitDefaultsFaultAbort();
void InitDefaultsHTTPFaultImpl();
void InitDefaultsHTTPFault();
inline void InitDefaults() {
  InitDefaultsFaultAbort();
  InitDefaultsHTTPFault();
}
}  // namespace protobuf_api_2ffilter_2fhttp_2ffault_2eproto
namespace envoy {
namespace api {
namespace v2 {
namespace filter {
namespace http {
class FaultAbort;
class FaultAbortDefaultTypeInternal;
extern FaultAbortDefaultTypeInternal _FaultAbort_default_instance_;
class HTTPFault;
class HTTPFaultDefaultTypeInternal;
extern HTTPFaultDefaultTypeInternal _HTTPFault_default_instance_;
}  // namespace http
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy
namespace envoy {
namespace api {
namespace v2 {
namespace filter {
namespace http {

// ===================================================================

class FaultAbort : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:envoy.api.v2.filter.http.FaultAbort) */ {
 public:
  FaultAbort();
  virtual ~FaultAbort();

  FaultAbort(const FaultAbort& from);

  inline FaultAbort& operator=(const FaultAbort& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FaultAbort(FaultAbort&& from) noexcept
    : FaultAbort() {
    *this = ::std::move(from);
  }

  inline FaultAbort& operator=(FaultAbort&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FaultAbort& default_instance();

  enum ErrorTypeCase {
    kHttpStatus = 2,
    ERROR_TYPE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FaultAbort* internal_default_instance() {
    return reinterpret_cast<const FaultAbort*>(
               &_FaultAbort_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(FaultAbort* other);
  friend void swap(FaultAbort& a, FaultAbort& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FaultAbort* New() const PROTOBUF_FINAL { return New(NULL); }

  FaultAbort* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const FaultAbort& from);
  void MergeFrom(const FaultAbort& from);
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
  void InternalSwap(FaultAbort* other);
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

  // uint32 percent = 1;
  void clear_percent();
  static const int kPercentFieldNumber = 1;
  ::google::protobuf::uint32 percent() const;
  void set_percent(::google::protobuf::uint32 value);

  // uint32 http_status = 2;
  private:
  bool has_http_status() const;
  public:
  void clear_http_status();
  static const int kHttpStatusFieldNumber = 2;
  ::google::protobuf::uint32 http_status() const;
  void set_http_status(::google::protobuf::uint32 value);

  ErrorTypeCase error_type_case() const;
  // @@protoc_insertion_point(class_scope:envoy.api.v2.filter.http.FaultAbort)
 private:
  void set_has_http_status();

  inline bool has_error_type() const;
  void clear_error_type();
  inline void clear_has_error_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 percent_;
  union ErrorTypeUnion {
    ErrorTypeUnion() {}
    ::google::protobuf::uint32 http_status_;
  } error_type_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_api_2ffilter_2fhttp_2ffault_2eproto::TableStruct;
  friend void ::protobuf_api_2ffilter_2fhttp_2ffault_2eproto::InitDefaultsFaultAbortImpl();
};
// -------------------------------------------------------------------

class HTTPFault : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:envoy.api.v2.filter.http.HTTPFault) */ {
 public:
  HTTPFault();
  virtual ~HTTPFault();

  HTTPFault(const HTTPFault& from);

  inline HTTPFault& operator=(const HTTPFault& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HTTPFault(HTTPFault&& from) noexcept
    : HTTPFault() {
    *this = ::std::move(from);
  }

  inline HTTPFault& operator=(HTTPFault&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const HTTPFault& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HTTPFault* internal_default_instance() {
    return reinterpret_cast<const HTTPFault*>(
               &_HTTPFault_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(HTTPFault* other);
  friend void swap(HTTPFault& a, HTTPFault& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HTTPFault* New() const PROTOBUF_FINAL { return New(NULL); }

  HTTPFault* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const HTTPFault& from);
  void MergeFrom(const HTTPFault& from);
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
  void InternalSwap(HTTPFault* other);
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

  // repeated .envoy.api.v2.HeaderMatcher headers = 4;
  int headers_size() const;
  void clear_headers();
  static const int kHeadersFieldNumber = 4;
  const ::envoy::api::v2::HeaderMatcher& headers(int index) const;
  ::envoy::api::v2::HeaderMatcher* mutable_headers(int index);
  ::envoy::api::v2::HeaderMatcher* add_headers();
  ::google::protobuf::RepeatedPtrField< ::envoy::api::v2::HeaderMatcher >*
      mutable_headers();
  const ::google::protobuf::RepeatedPtrField< ::envoy::api::v2::HeaderMatcher >&
      headers() const;

  // repeated string downstream_nodes = 5;
  int downstream_nodes_size() const;
  void clear_downstream_nodes();
  static const int kDownstreamNodesFieldNumber = 5;
  const ::std::string& downstream_nodes(int index) const;
  ::std::string* mutable_downstream_nodes(int index);
  void set_downstream_nodes(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_downstream_nodes(int index, ::std::string&& value);
  #endif
  void set_downstream_nodes(int index, const char* value);
  void set_downstream_nodes(int index, const char* value, size_t size);
  ::std::string* add_downstream_nodes();
  void add_downstream_nodes(const ::std::string& value);
  #if LANG_CXX11
  void add_downstream_nodes(::std::string&& value);
  #endif
  void add_downstream_nodes(const char* value);
  void add_downstream_nodes(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& downstream_nodes() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_downstream_nodes();

  // string upstream_cluster = 3;
  void clear_upstream_cluster();
  static const int kUpstreamClusterFieldNumber = 3;
  const ::std::string& upstream_cluster() const;
  void set_upstream_cluster(const ::std::string& value);
  #if LANG_CXX11
  void set_upstream_cluster(::std::string&& value);
  #endif
  void set_upstream_cluster(const char* value);
  void set_upstream_cluster(const char* value, size_t size);
  ::std::string* mutable_upstream_cluster();
  ::std::string* release_upstream_cluster();
  void set_allocated_upstream_cluster(::std::string* upstream_cluster);

  // .envoy.api.v2.filter.FaultDelay delay = 1;
  bool has_delay() const;
  void clear_delay();
  static const int kDelayFieldNumber = 1;
  const ::envoy::api::v2::filter::FaultDelay& delay() const;
  ::envoy::api::v2::filter::FaultDelay* release_delay();
  ::envoy::api::v2::filter::FaultDelay* mutable_delay();
  void set_allocated_delay(::envoy::api::v2::filter::FaultDelay* delay);

  // .envoy.api.v2.filter.http.FaultAbort abort = 2;
  bool has_abort() const;
  void clear_abort();
  static const int kAbortFieldNumber = 2;
  const ::envoy::api::v2::filter::http::FaultAbort& abort() const;
  ::envoy::api::v2::filter::http::FaultAbort* release_abort();
  ::envoy::api::v2::filter::http::FaultAbort* mutable_abort();
  void set_allocated_abort(::envoy::api::v2::filter::http::FaultAbort* abort);

  // @@protoc_insertion_point(class_scope:envoy.api.v2.filter.http.HTTPFault)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::envoy::api::v2::HeaderMatcher > headers_;
  ::google::protobuf::RepeatedPtrField< ::std::string> downstream_nodes_;
  ::google::protobuf::internal::ArenaStringPtr upstream_cluster_;
  ::envoy::api::v2::filter::FaultDelay* delay_;
  ::envoy::api::v2::filter::http::FaultAbort* abort_;
  mutable int _cached_size_;
  friend struct ::protobuf_api_2ffilter_2fhttp_2ffault_2eproto::TableStruct;
  friend void ::protobuf_api_2ffilter_2fhttp_2ffault_2eproto::InitDefaultsHTTPFaultImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FaultAbort

// uint32 percent = 1;
inline void FaultAbort::clear_percent() {
  percent_ = 0u;
}
inline ::google::protobuf::uint32 FaultAbort::percent() const {
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.http.FaultAbort.percent)
  return percent_;
}
inline void FaultAbort::set_percent(::google::protobuf::uint32 value) {
  
  percent_ = value;
  // @@protoc_insertion_point(field_set:envoy.api.v2.filter.http.FaultAbort.percent)
}

// uint32 http_status = 2;
inline bool FaultAbort::has_http_status() const {
  return error_type_case() == kHttpStatus;
}
inline void FaultAbort::set_has_http_status() {
  _oneof_case_[0] = kHttpStatus;
}
inline void FaultAbort::clear_http_status() {
  if (has_http_status()) {
    error_type_.http_status_ = 0u;
    clear_has_error_type();
  }
}
inline ::google::protobuf::uint32 FaultAbort::http_status() const {
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.http.FaultAbort.http_status)
  if (has_http_status()) {
    return error_type_.http_status_;
  }
  return 0u;
}
inline void FaultAbort::set_http_status(::google::protobuf::uint32 value) {
  if (!has_http_status()) {
    clear_error_type();
    set_has_http_status();
  }
  error_type_.http_status_ = value;
  // @@protoc_insertion_point(field_set:envoy.api.v2.filter.http.FaultAbort.http_status)
}

inline bool FaultAbort::has_error_type() const {
  return error_type_case() != ERROR_TYPE_NOT_SET;
}
inline void FaultAbort::clear_has_error_type() {
  _oneof_case_[0] = ERROR_TYPE_NOT_SET;
}
inline FaultAbort::ErrorTypeCase FaultAbort::error_type_case() const {
  return FaultAbort::ErrorTypeCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// HTTPFault

// .envoy.api.v2.filter.FaultDelay delay = 1;
inline bool HTTPFault::has_delay() const {
  return this != internal_default_instance() && delay_ != NULL;
}
inline const ::envoy::api::v2::filter::FaultDelay& HTTPFault::delay() const {
  const ::envoy::api::v2::filter::FaultDelay* p = delay_;
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.http.HTTPFault.delay)
  return p != NULL ? *p : *reinterpret_cast<const ::envoy::api::v2::filter::FaultDelay*>(
      &::envoy::api::v2::filter::_FaultDelay_default_instance_);
}
inline ::envoy::api::v2::filter::FaultDelay* HTTPFault::release_delay() {
  // @@protoc_insertion_point(field_release:envoy.api.v2.filter.http.HTTPFault.delay)
  
  ::envoy::api::v2::filter::FaultDelay* temp = delay_;
  delay_ = NULL;
  return temp;
}
inline ::envoy::api::v2::filter::FaultDelay* HTTPFault::mutable_delay() {
  
  if (delay_ == NULL) {
    delay_ = new ::envoy::api::v2::filter::FaultDelay;
  }
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.http.HTTPFault.delay)
  return delay_;
}
inline void HTTPFault::set_allocated_delay(::envoy::api::v2::filter::FaultDelay* delay) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(delay_);
  }
  if (delay) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      delay = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, delay, submessage_arena);
    }
    
  } else {
    
  }
  delay_ = delay;
  // @@protoc_insertion_point(field_set_allocated:envoy.api.v2.filter.http.HTTPFault.delay)
}

// .envoy.api.v2.filter.http.FaultAbort abort = 2;
inline bool HTTPFault::has_abort() const {
  return this != internal_default_instance() && abort_ != NULL;
}
inline void HTTPFault::clear_abort() {
  if (GetArenaNoVirtual() == NULL && abort_ != NULL) {
    delete abort_;
  }
  abort_ = NULL;
}
inline const ::envoy::api::v2::filter::http::FaultAbort& HTTPFault::abort() const {
  const ::envoy::api::v2::filter::http::FaultAbort* p = abort_;
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.http.HTTPFault.abort)
  return p != NULL ? *p : *reinterpret_cast<const ::envoy::api::v2::filter::http::FaultAbort*>(
      &::envoy::api::v2::filter::http::_FaultAbort_default_instance_);
}
inline ::envoy::api::v2::filter::http::FaultAbort* HTTPFault::release_abort() {
  // @@protoc_insertion_point(field_release:envoy.api.v2.filter.http.HTTPFault.abort)
  
  ::envoy::api::v2::filter::http::FaultAbort* temp = abort_;
  abort_ = NULL;
  return temp;
}
inline ::envoy::api::v2::filter::http::FaultAbort* HTTPFault::mutable_abort() {
  
  if (abort_ == NULL) {
    abort_ = new ::envoy::api::v2::filter::http::FaultAbort;
  }
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.http.HTTPFault.abort)
  return abort_;
}
inline void HTTPFault::set_allocated_abort(::envoy::api::v2::filter::http::FaultAbort* abort) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete abort_;
  }
  if (abort) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      abort = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, abort, submessage_arena);
    }
    
  } else {
    
  }
  abort_ = abort;
  // @@protoc_insertion_point(field_set_allocated:envoy.api.v2.filter.http.HTTPFault.abort)
}

// string upstream_cluster = 3;
inline void HTTPFault::clear_upstream_cluster() {
  upstream_cluster_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HTTPFault::upstream_cluster() const {
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.http.HTTPFault.upstream_cluster)
  return upstream_cluster_.GetNoArena();
}
inline void HTTPFault::set_upstream_cluster(const ::std::string& value) {
  
  upstream_cluster_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:envoy.api.v2.filter.http.HTTPFault.upstream_cluster)
}
#if LANG_CXX11
inline void HTTPFault::set_upstream_cluster(::std::string&& value) {
  
  upstream_cluster_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:envoy.api.v2.filter.http.HTTPFault.upstream_cluster)
}
#endif
inline void HTTPFault::set_upstream_cluster(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  upstream_cluster_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:envoy.api.v2.filter.http.HTTPFault.upstream_cluster)
}
inline void HTTPFault::set_upstream_cluster(const char* value, size_t size) {
  
  upstream_cluster_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:envoy.api.v2.filter.http.HTTPFault.upstream_cluster)
}
inline ::std::string* HTTPFault::mutable_upstream_cluster() {
  
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.http.HTTPFault.upstream_cluster)
  return upstream_cluster_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HTTPFault::release_upstream_cluster() {
  // @@protoc_insertion_point(field_release:envoy.api.v2.filter.http.HTTPFault.upstream_cluster)
  
  return upstream_cluster_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HTTPFault::set_allocated_upstream_cluster(::std::string* upstream_cluster) {
  if (upstream_cluster != NULL) {
    
  } else {
    
  }
  upstream_cluster_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), upstream_cluster);
  // @@protoc_insertion_point(field_set_allocated:envoy.api.v2.filter.http.HTTPFault.upstream_cluster)
}

// repeated .envoy.api.v2.HeaderMatcher headers = 4;
inline int HTTPFault::headers_size() const {
  return headers_.size();
}
inline const ::envoy::api::v2::HeaderMatcher& HTTPFault::headers(int index) const {
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.http.HTTPFault.headers)
  return headers_.Get(index);
}
inline ::envoy::api::v2::HeaderMatcher* HTTPFault::mutable_headers(int index) {
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.http.HTTPFault.headers)
  return headers_.Mutable(index);
}
inline ::envoy::api::v2::HeaderMatcher* HTTPFault::add_headers() {
  // @@protoc_insertion_point(field_add:envoy.api.v2.filter.http.HTTPFault.headers)
  return headers_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::envoy::api::v2::HeaderMatcher >*
HTTPFault::mutable_headers() {
  // @@protoc_insertion_point(field_mutable_list:envoy.api.v2.filter.http.HTTPFault.headers)
  return &headers_;
}
inline const ::google::protobuf::RepeatedPtrField< ::envoy::api::v2::HeaderMatcher >&
HTTPFault::headers() const {
  // @@protoc_insertion_point(field_list:envoy.api.v2.filter.http.HTTPFault.headers)
  return headers_;
}

// repeated string downstream_nodes = 5;
inline int HTTPFault::downstream_nodes_size() const {
  return downstream_nodes_.size();
}
inline void HTTPFault::clear_downstream_nodes() {
  downstream_nodes_.Clear();
}
inline const ::std::string& HTTPFault::downstream_nodes(int index) const {
  // @@protoc_insertion_point(field_get:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
  return downstream_nodes_.Get(index);
}
inline ::std::string* HTTPFault::mutable_downstream_nodes(int index) {
  // @@protoc_insertion_point(field_mutable:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
  return downstream_nodes_.Mutable(index);
}
inline void HTTPFault::set_downstream_nodes(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
  downstream_nodes_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void HTTPFault::set_downstream_nodes(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
  downstream_nodes_.Mutable(index)->assign(std::move(value));
}
#endif
inline void HTTPFault::set_downstream_nodes(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  downstream_nodes_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
}
inline void HTTPFault::set_downstream_nodes(int index, const char* value, size_t size) {
  downstream_nodes_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
}
inline ::std::string* HTTPFault::add_downstream_nodes() {
  // @@protoc_insertion_point(field_add_mutable:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
  return downstream_nodes_.Add();
}
inline void HTTPFault::add_downstream_nodes(const ::std::string& value) {
  downstream_nodes_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
}
#if LANG_CXX11
inline void HTTPFault::add_downstream_nodes(::std::string&& value) {
  downstream_nodes_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
}
#endif
inline void HTTPFault::add_downstream_nodes(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  downstream_nodes_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
}
inline void HTTPFault::add_downstream_nodes(const char* value, size_t size) {
  downstream_nodes_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
HTTPFault::downstream_nodes() const {
  // @@protoc_insertion_point(field_list:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
  return downstream_nodes_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
HTTPFault::mutable_downstream_nodes() {
  // @@protoc_insertion_point(field_mutable_list:envoy.api.v2.filter.http.HTTPFault.downstream_nodes)
  return &downstream_nodes_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace http
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_api_2ffilter_2fhttp_2ffault_2eproto__INCLUDED