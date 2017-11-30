// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/filter/http/router.proto

#include "api/filter/http/router.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace envoy {
namespace api {
namespace v2 {
namespace filter {
namespace http {
class RouterDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Router>
      _instance;
} _Router_default_instance_;
}  // namespace http
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy
namespace protobuf_api_2ffilter_2fhttp_2frouter_2eproto {
void InitDefaultsRouterImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaultsBoolValue();
  protobuf_api_2ffilter_2faccesslog_2faccesslog_2eproto::InitDefaultsAccessLog();
  {
    void* ptr = &::envoy::api::v2::filter::http::_Router_default_instance_;
    new (ptr) ::envoy::api::v2::filter::http::Router();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::envoy::api::v2::filter::http::Router::InitAsDefaultInstance();
}

void InitDefaultsRouter() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRouterImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::envoy::api::v2::filter::http::Router, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::envoy::api::v2::filter::http::Router, dynamic_stats_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::envoy::api::v2::filter::http::Router, start_child_span_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::envoy::api::v2::filter::http::Router, upstream_log_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::envoy::api::v2::filter::http::Router)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::envoy::api::v2::filter::http::_Router_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "api/filter/http/router.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\034api/filter/http/router.proto\022\030envoy.ap"
      "i.v2.filter.http\032$api/filter/accesslog/a"
      "ccesslog.proto\032\036google/protobuf/wrappers"
      ".proto\"\225\001\n\006Router\0221\n\rdynamic_stats\030\001 \001(\013"
      "2\032.google.protobuf.BoolValue\022\030\n\020start_ch"
      "ild_span\030\002 \001(\010\022>\n\014upstream_log\030\003 \003(\0132(.e"
      "nvoy.api.v2.filter.accesslog.AccessLogb\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 286);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "api/filter/http/router.proto", &protobuf_RegisterTypes);
  ::protobuf_api_2ffilter_2faccesslog_2faccesslog_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_api_2ffilter_2fhttp_2frouter_2eproto
namespace envoy {
namespace api {
namespace v2 {
namespace filter {
namespace http {

// ===================================================================

void Router::InitAsDefaultInstance() {
  ::envoy::api::v2::filter::http::_Router_default_instance_._instance.get_mutable()->dynamic_stats_ = const_cast< ::google::protobuf::BoolValue*>(
      ::google::protobuf::BoolValue::internal_default_instance());
}
void Router::clear_dynamic_stats() {
  if (GetArenaNoVirtual() == NULL && dynamic_stats_ != NULL) {
    delete dynamic_stats_;
  }
  dynamic_stats_ = NULL;
}
void Router::clear_upstream_log() {
  upstream_log_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Router::kDynamicStatsFieldNumber;
const int Router::kStartChildSpanFieldNumber;
const int Router::kUpstreamLogFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Router::Router()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_api_2ffilter_2fhttp_2frouter_2eproto::InitDefaultsRouter();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:envoy.api.v2.filter.http.Router)
}
Router::Router(const Router& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      upstream_log_(from.upstream_log_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_dynamic_stats()) {
    dynamic_stats_ = new ::google::protobuf::BoolValue(*from.dynamic_stats_);
  } else {
    dynamic_stats_ = NULL;
  }
  start_child_span_ = from.start_child_span_;
  // @@protoc_insertion_point(copy_constructor:envoy.api.v2.filter.http.Router)
}

void Router::SharedCtor() {
  ::memset(&dynamic_stats_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&start_child_span_) -
      reinterpret_cast<char*>(&dynamic_stats_)) + sizeof(start_child_span_));
  _cached_size_ = 0;
}

Router::~Router() {
  // @@protoc_insertion_point(destructor:envoy.api.v2.filter.http.Router)
  SharedDtor();
}

void Router::SharedDtor() {
  if (this != internal_default_instance()) delete dynamic_stats_;
}

void Router::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Router::descriptor() {
  ::protobuf_api_2ffilter_2fhttp_2frouter_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_api_2ffilter_2fhttp_2frouter_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Router& Router::default_instance() {
  ::protobuf_api_2ffilter_2fhttp_2frouter_2eproto::InitDefaultsRouter();
  return *internal_default_instance();
}

Router* Router::New(::google::protobuf::Arena* arena) const {
  Router* n = new Router;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Router::Clear() {
// @@protoc_insertion_point(message_clear_start:envoy.api.v2.filter.http.Router)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  upstream_log_.Clear();
  if (GetArenaNoVirtual() == NULL && dynamic_stats_ != NULL) {
    delete dynamic_stats_;
  }
  dynamic_stats_ = NULL;
  start_child_span_ = false;
  _internal_metadata_.Clear();
}

bool Router::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:envoy.api.v2.filter.http.Router)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.protobuf.BoolValue dynamic_stats = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_dynamic_stats()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool start_child_span = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &start_child_span_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .envoy.api.v2.filter.accesslog.AccessLog upstream_log = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_upstream_log()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:envoy.api.v2.filter.http.Router)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:envoy.api.v2.filter.http.Router)
  return false;
#undef DO_
}

void Router::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:envoy.api.v2.filter.http.Router)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.BoolValue dynamic_stats = 1;
  if (this->has_dynamic_stats()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->dynamic_stats_, output);
  }

  // bool start_child_span = 2;
  if (this->start_child_span() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->start_child_span(), output);
  }

  // repeated .envoy.api.v2.filter.accesslog.AccessLog upstream_log = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->upstream_log_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->upstream_log(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:envoy.api.v2.filter.http.Router)
}

::google::protobuf::uint8* Router::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:envoy.api.v2.filter.http.Router)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.BoolValue dynamic_stats = 1;
  if (this->has_dynamic_stats()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, *this->dynamic_stats_, deterministic, target);
  }

  // bool start_child_span = 2;
  if (this->start_child_span() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->start_child_span(), target);
  }

  // repeated .envoy.api.v2.filter.accesslog.AccessLog upstream_log = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->upstream_log_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->upstream_log(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:envoy.api.v2.filter.http.Router)
  return target;
}

size_t Router::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:envoy.api.v2.filter.http.Router)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .envoy.api.v2.filter.accesslog.AccessLog upstream_log = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->upstream_log_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->upstream_log(static_cast<int>(i)));
    }
  }

  // .google.protobuf.BoolValue dynamic_stats = 1;
  if (this->has_dynamic_stats()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->dynamic_stats_);
  }

  // bool start_child_span = 2;
  if (this->start_child_span() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Router::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:envoy.api.v2.filter.http.Router)
  GOOGLE_DCHECK_NE(&from, this);
  const Router* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Router>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:envoy.api.v2.filter.http.Router)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:envoy.api.v2.filter.http.Router)
    MergeFrom(*source);
  }
}

void Router::MergeFrom(const Router& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:envoy.api.v2.filter.http.Router)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  upstream_log_.MergeFrom(from.upstream_log_);
  if (from.has_dynamic_stats()) {
    mutable_dynamic_stats()->::google::protobuf::BoolValue::MergeFrom(from.dynamic_stats());
  }
  if (from.start_child_span() != 0) {
    set_start_child_span(from.start_child_span());
  }
}

void Router::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:envoy.api.v2.filter.http.Router)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Router::CopyFrom(const Router& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:envoy.api.v2.filter.http.Router)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Router::IsInitialized() const {
  return true;
}

void Router::Swap(Router* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Router::InternalSwap(Router* other) {
  using std::swap;
  upstream_log_.InternalSwap(&other->upstream_log_);
  swap(dynamic_stats_, other->dynamic_stats_);
  swap(start_child_span_, other->start_child_span_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Router::GetMetadata() const {
  protobuf_api_2ffilter_2fhttp_2frouter_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_api_2ffilter_2fhttp_2frouter_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace http
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy

// @@protoc_insertion_point(global_scope)