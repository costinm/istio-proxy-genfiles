// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/filter/http/buffer.proto

#include "api/filter/http/buffer.pb.h"

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
class BufferDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Buffer>
      _instance;
} _Buffer_default_instance_;
}  // namespace http
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy
namespace protobuf_api_2ffilter_2fhttp_2fbuffer_2eproto {
void InitDefaultsBufferImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaultsUInt32Value();
  protobuf_google_2fprotobuf_2fduration_2eproto::InitDefaultsDuration();
  {
    void* ptr = &::envoy::api::v2::filter::http::_Buffer_default_instance_;
    new (ptr) ::envoy::api::v2::filter::http::Buffer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::envoy::api::v2::filter::http::Buffer::InitAsDefaultInstance();
}

void InitDefaultsBuffer() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBufferImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::envoy::api::v2::filter::http::Buffer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::envoy::api::v2::filter::http::Buffer, max_request_bytes_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::envoy::api::v2::filter::http::Buffer, max_request_time_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::envoy::api::v2::filter::http::Buffer)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::envoy::api::v2::filter::http::_Buffer_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "api/filter/http/buffer.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n\034api/filter/http/buffer.proto\022\030envoy.ap"
      "i.v2.filter.http\032\036google/protobuf/durati"
      "on.proto\032\036google/protobuf/wrappers.proto"
      "\"v\n\006Buffer\0227\n\021max_request_bytes\030\001 \001(\0132\034."
      "google.protobuf.UInt32Value\0223\n\020max_reque"
      "st_time\030\002 \001(\0132\031.google.protobuf.Duration"
      "b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 248);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "api/filter/http/buffer.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2fduration_2eproto::AddDescriptors();
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
}  // namespace protobuf_api_2ffilter_2fhttp_2fbuffer_2eproto
namespace envoy {
namespace api {
namespace v2 {
namespace filter {
namespace http {

// ===================================================================

void Buffer::InitAsDefaultInstance() {
  ::envoy::api::v2::filter::http::_Buffer_default_instance_._instance.get_mutable()->max_request_bytes_ = const_cast< ::google::protobuf::UInt32Value*>(
      ::google::protobuf::UInt32Value::internal_default_instance());
  ::envoy::api::v2::filter::http::_Buffer_default_instance_._instance.get_mutable()->max_request_time_ = const_cast< ::google::protobuf::Duration*>(
      ::google::protobuf::Duration::internal_default_instance());
}
void Buffer::clear_max_request_bytes() {
  if (GetArenaNoVirtual() == NULL && max_request_bytes_ != NULL) {
    delete max_request_bytes_;
  }
  max_request_bytes_ = NULL;
}
void Buffer::clear_max_request_time() {
  if (GetArenaNoVirtual() == NULL && max_request_time_ != NULL) {
    delete max_request_time_;
  }
  max_request_time_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Buffer::kMaxRequestBytesFieldNumber;
const int Buffer::kMaxRequestTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Buffer::Buffer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_api_2ffilter_2fhttp_2fbuffer_2eproto::InitDefaultsBuffer();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:envoy.api.v2.filter.http.Buffer)
}
Buffer::Buffer(const Buffer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_max_request_bytes()) {
    max_request_bytes_ = new ::google::protobuf::UInt32Value(*from.max_request_bytes_);
  } else {
    max_request_bytes_ = NULL;
  }
  if (from.has_max_request_time()) {
    max_request_time_ = new ::google::protobuf::Duration(*from.max_request_time_);
  } else {
    max_request_time_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:envoy.api.v2.filter.http.Buffer)
}

void Buffer::SharedCtor() {
  ::memset(&max_request_bytes_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&max_request_time_) -
      reinterpret_cast<char*>(&max_request_bytes_)) + sizeof(max_request_time_));
  _cached_size_ = 0;
}

Buffer::~Buffer() {
  // @@protoc_insertion_point(destructor:envoy.api.v2.filter.http.Buffer)
  SharedDtor();
}

void Buffer::SharedDtor() {
  if (this != internal_default_instance()) delete max_request_bytes_;
  if (this != internal_default_instance()) delete max_request_time_;
}

void Buffer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Buffer::descriptor() {
  ::protobuf_api_2ffilter_2fhttp_2fbuffer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_api_2ffilter_2fhttp_2fbuffer_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Buffer& Buffer::default_instance() {
  ::protobuf_api_2ffilter_2fhttp_2fbuffer_2eproto::InitDefaultsBuffer();
  return *internal_default_instance();
}

Buffer* Buffer::New(::google::protobuf::Arena* arena) const {
  Buffer* n = new Buffer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Buffer::Clear() {
// @@protoc_insertion_point(message_clear_start:envoy.api.v2.filter.http.Buffer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && max_request_bytes_ != NULL) {
    delete max_request_bytes_;
  }
  max_request_bytes_ = NULL;
  if (GetArenaNoVirtual() == NULL && max_request_time_ != NULL) {
    delete max_request_time_;
  }
  max_request_time_ = NULL;
  _internal_metadata_.Clear();
}

bool Buffer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:envoy.api.v2.filter.http.Buffer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.protobuf.UInt32Value max_request_bytes = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_max_request_bytes()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Duration max_request_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_max_request_time()));
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
  // @@protoc_insertion_point(parse_success:envoy.api.v2.filter.http.Buffer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:envoy.api.v2.filter.http.Buffer)
  return false;
#undef DO_
}

void Buffer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:envoy.api.v2.filter.http.Buffer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.UInt32Value max_request_bytes = 1;
  if (this->has_max_request_bytes()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->max_request_bytes_, output);
  }

  // .google.protobuf.Duration max_request_time = 2;
  if (this->has_max_request_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->max_request_time_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:envoy.api.v2.filter.http.Buffer)
}

::google::protobuf::uint8* Buffer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:envoy.api.v2.filter.http.Buffer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.UInt32Value max_request_bytes = 1;
  if (this->has_max_request_bytes()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, *this->max_request_bytes_, deterministic, target);
  }

  // .google.protobuf.Duration max_request_time = 2;
  if (this->has_max_request_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, *this->max_request_time_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:envoy.api.v2.filter.http.Buffer)
  return target;
}

size_t Buffer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:envoy.api.v2.filter.http.Buffer)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .google.protobuf.UInt32Value max_request_bytes = 1;
  if (this->has_max_request_bytes()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->max_request_bytes_);
  }

  // .google.protobuf.Duration max_request_time = 2;
  if (this->has_max_request_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->max_request_time_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Buffer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:envoy.api.v2.filter.http.Buffer)
  GOOGLE_DCHECK_NE(&from, this);
  const Buffer* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Buffer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:envoy.api.v2.filter.http.Buffer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:envoy.api.v2.filter.http.Buffer)
    MergeFrom(*source);
  }
}

void Buffer::MergeFrom(const Buffer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:envoy.api.v2.filter.http.Buffer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_max_request_bytes()) {
    mutable_max_request_bytes()->::google::protobuf::UInt32Value::MergeFrom(from.max_request_bytes());
  }
  if (from.has_max_request_time()) {
    mutable_max_request_time()->::google::protobuf::Duration::MergeFrom(from.max_request_time());
  }
}

void Buffer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:envoy.api.v2.filter.http.Buffer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Buffer::CopyFrom(const Buffer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:envoy.api.v2.filter.http.Buffer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Buffer::IsInitialized() const {
  return true;
}

void Buffer::Swap(Buffer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Buffer::InternalSwap(Buffer* other) {
  using std::swap;
  swap(max_request_bytes_, other->max_request_bytes_);
  swap(max_request_time_, other->max_request_time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Buffer::GetMetadata() const {
  protobuf_api_2ffilter_2fhttp_2fbuffer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_api_2ffilter_2fhttp_2fbuffer_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace http
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy

// @@protoc_insertion_point(global_scope)
