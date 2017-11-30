// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/filter/http/lua.proto

#include "api/filter/http/lua.pb.h"

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
class LuaDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Lua>
      _instance;
} _Lua_default_instance_;
}  // namespace http
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy
namespace protobuf_api_2ffilter_2fhttp_2flua_2eproto {
void InitDefaultsLuaImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::envoy::api::v2::filter::http::_Lua_default_instance_;
    new (ptr) ::envoy::api::v2::filter::http::Lua();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::envoy::api::v2::filter::http::Lua::InitAsDefaultInstance();
}

void InitDefaultsLua() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsLuaImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::envoy::api::v2::filter::http::Lua, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::envoy::api::v2::filter::http::Lua, inline_code_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::envoy::api::v2::filter::http::Lua)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::envoy::api::v2::filter::http::_Lua_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "api/filter/http/lua.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n\031api/filter/http/lua.proto\022\030envoy.api.v"
      "2.filter.http\"\032\n\003Lua\022\023\n\013inline_code\030\001 \001("
      "\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 89);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "api/filter/http/lua.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_api_2ffilter_2fhttp_2flua_2eproto
namespace envoy {
namespace api {
namespace v2 {
namespace filter {
namespace http {

// ===================================================================

void Lua::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Lua::kInlineCodeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Lua::Lua()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_api_2ffilter_2fhttp_2flua_2eproto::InitDefaultsLua();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:envoy.api.v2.filter.http.Lua)
}
Lua::Lua(const Lua& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  inline_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.inline_code().size() > 0) {
    inline_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.inline_code_);
  }
  // @@protoc_insertion_point(copy_constructor:envoy.api.v2.filter.http.Lua)
}

void Lua::SharedCtor() {
  inline_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Lua::~Lua() {
  // @@protoc_insertion_point(destructor:envoy.api.v2.filter.http.Lua)
  SharedDtor();
}

void Lua::SharedDtor() {
  inline_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Lua::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Lua::descriptor() {
  ::protobuf_api_2ffilter_2fhttp_2flua_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_api_2ffilter_2fhttp_2flua_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Lua& Lua::default_instance() {
  ::protobuf_api_2ffilter_2fhttp_2flua_2eproto::InitDefaultsLua();
  return *internal_default_instance();
}

Lua* Lua::New(::google::protobuf::Arena* arena) const {
  Lua* n = new Lua;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Lua::Clear() {
// @@protoc_insertion_point(message_clear_start:envoy.api.v2.filter.http.Lua)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  inline_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Lua::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:envoy.api.v2.filter.http.Lua)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string inline_code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_inline_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->inline_code().data(), static_cast<int>(this->inline_code().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "envoy.api.v2.filter.http.Lua.inline_code"));
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
  // @@protoc_insertion_point(parse_success:envoy.api.v2.filter.http.Lua)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:envoy.api.v2.filter.http.Lua)
  return false;
#undef DO_
}

void Lua::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:envoy.api.v2.filter.http.Lua)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string inline_code = 1;
  if (this->inline_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->inline_code().data(), static_cast<int>(this->inline_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "envoy.api.v2.filter.http.Lua.inline_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->inline_code(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:envoy.api.v2.filter.http.Lua)
}

::google::protobuf::uint8* Lua::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:envoy.api.v2.filter.http.Lua)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string inline_code = 1;
  if (this->inline_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->inline_code().data(), static_cast<int>(this->inline_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "envoy.api.v2.filter.http.Lua.inline_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->inline_code(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:envoy.api.v2.filter.http.Lua)
  return target;
}

size_t Lua::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:envoy.api.v2.filter.http.Lua)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string inline_code = 1;
  if (this->inline_code().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->inline_code());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Lua::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:envoy.api.v2.filter.http.Lua)
  GOOGLE_DCHECK_NE(&from, this);
  const Lua* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Lua>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:envoy.api.v2.filter.http.Lua)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:envoy.api.v2.filter.http.Lua)
    MergeFrom(*source);
  }
}

void Lua::MergeFrom(const Lua& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:envoy.api.v2.filter.http.Lua)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.inline_code().size() > 0) {

    inline_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.inline_code_);
  }
}

void Lua::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:envoy.api.v2.filter.http.Lua)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Lua::CopyFrom(const Lua& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:envoy.api.v2.filter.http.Lua)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Lua::IsInitialized() const {
  return true;
}

void Lua::Swap(Lua* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Lua::InternalSwap(Lua* other) {
  using std::swap;
  inline_code_.Swap(&other->inline_code_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Lua::GetMetadata() const {
  protobuf_api_2ffilter_2fhttp_2flua_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_api_2ffilter_2fhttp_2flua_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace http
}  // namespace filter
}  // namespace v2
}  // namespace api
}  // namespace envoy

// @@protoc_insertion_point(global_scope)
