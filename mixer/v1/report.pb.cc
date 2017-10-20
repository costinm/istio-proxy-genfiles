// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mixer/v1/report.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mixer/v1/report.pb.h"

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
// @@protoc_insertion_point(includes)

namespace istio {
namespace mixer {
namespace v1 {
class ReportRequestDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ReportRequest>
     _instance;
} _ReportRequest_default_instance_;
class ReportResponseDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ReportResponse>
     _instance;
} _ReportResponse_default_instance_;

namespace protobuf_mixer_2fv1_2freport_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportRequest, attributes_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportRequest, default_words_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportRequest, global_word_count_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(ReportRequest)},
  { 8, -1, sizeof(ReportResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ReportRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_ReportResponse_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "mixer/v1/report.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::gogoproto::protobuf_gogoproto_2fgogo_2eproto::InitDefaults();
  ::istio::mixer::v1::protobuf_mixer_2fv1_2fattributes_2eproto::InitDefaults();
  _ReportRequest_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ReportRequest_default_instance_);_ReportResponse_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ReportResponse_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\025mixer/v1/report.proto\022\016istio.mixer.v1\032"
      "\024gogoproto/gogo.proto\032\031mixer/v1/attribut"
      "es.proto\"\201\001\n\rReportRequest\022>\n\nattributes"
      "\030\001 \003(\0132$.istio.mixer.v1.CompressedAttrib"
      "utesB\004\310\336\037\000\022\025\n\rdefault_words\030\002 \003(\t\022\031\n\021glo"
      "bal_word_count\030\003 \001(\r\"\020\n\016ReportResponseB\014"
      "\310\341\036\000\250\342\036\000\360\341\036\000b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 260);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mixer/v1/report.proto", &protobuf_RegisterTypes);
  ::gogoproto::protobuf_gogoproto_2fgogo_2eproto::AddDescriptors();
  ::istio::mixer::v1::protobuf_mixer_2fv1_2fattributes_2eproto::AddDescriptors();
}
} // anonymous namespace

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

}  // namespace protobuf_mixer_2fv1_2freport_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReportRequest::kAttributesFieldNumber;
const int ReportRequest::kDefaultWordsFieldNumber;
const int ReportRequest::kGlobalWordCountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReportRequest::ReportRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_mixer_2fv1_2freport_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:istio.mixer.v1.ReportRequest)
}
ReportRequest::ReportRequest(const ReportRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      attributes_(from.attributes_),
      default_words_(from.default_words_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  global_word_count_ = from.global_word_count_;
  // @@protoc_insertion_point(copy_constructor:istio.mixer.v1.ReportRequest)
}

void ReportRequest::SharedCtor() {
  global_word_count_ = 0u;
  _cached_size_ = 0;
}

ReportRequest::~ReportRequest() {
  // @@protoc_insertion_point(destructor:istio.mixer.v1.ReportRequest)
  SharedDtor();
}

void ReportRequest::SharedDtor() {
}

void ReportRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ReportRequest::descriptor() {
  protobuf_mixer_2fv1_2freport_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mixer_2fv1_2freport_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ReportRequest& ReportRequest::default_instance() {
  protobuf_mixer_2fv1_2freport_2eproto::InitDefaults();
  return *internal_default_instance();
}

ReportRequest* ReportRequest::New(::google::protobuf::Arena* arena) const {
  ReportRequest* n = new ReportRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ReportRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:istio.mixer.v1.ReportRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  attributes_.Clear();
  default_words_.Clear();
  global_word_count_ = 0u;
  _internal_metadata_.Clear();
}

bool ReportRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:istio.mixer.v1.ReportRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .istio.mixer.v1.CompressedAttributes attributes = 1 [(.gogoproto.nullable) = false];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_attributes()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string default_words = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_default_words()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->default_words(this->default_words_size() - 1).data(),
            static_cast<int>(this->default_words(this->default_words_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.mixer.v1.ReportRequest.default_words"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 global_word_count = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &global_word_count_)));
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
  // @@protoc_insertion_point(parse_success:istio.mixer.v1.ReportRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:istio.mixer.v1.ReportRequest)
  return false;
#undef DO_
}

void ReportRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:istio.mixer.v1.ReportRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .istio.mixer.v1.CompressedAttributes attributes = 1 [(.gogoproto.nullable) = false];
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->attributes_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->attributes(static_cast<int>(i)), output);
  }

  // repeated string default_words = 2;
  for (int i = 0, n = this->default_words_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->default_words(i).data(), static_cast<int>(this->default_words(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "istio.mixer.v1.ReportRequest.default_words");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->default_words(i), output);
  }

  // uint32 global_word_count = 3;
  if (this->global_word_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->global_word_count(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:istio.mixer.v1.ReportRequest)
}

::google::protobuf::uint8* ReportRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:istio.mixer.v1.ReportRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .istio.mixer.v1.CompressedAttributes attributes = 1 [(.gogoproto.nullable) = false];
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->attributes_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->attributes(static_cast<int>(i)), deterministic, target);
  }

  // repeated string default_words = 2;
  for (int i = 0, n = this->default_words_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->default_words(i).data(), static_cast<int>(this->default_words(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "istio.mixer.v1.ReportRequest.default_words");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->default_words(i), target);
  }

  // uint32 global_word_count = 3;
  if (this->global_word_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->global_word_count(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:istio.mixer.v1.ReportRequest)
  return target;
}

size_t ReportRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:istio.mixer.v1.ReportRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .istio.mixer.v1.CompressedAttributes attributes = 1 [(.gogoproto.nullable) = false];
  {
    unsigned int count = static_cast<unsigned int>(this->attributes_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->attributes(static_cast<int>(i)));
    }
  }

  // repeated string default_words = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->default_words_size());
  for (int i = 0, n = this->default_words_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->default_words(i));
  }

  // uint32 global_word_count = 3;
  if (this->global_word_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->global_word_count());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ReportRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:istio.mixer.v1.ReportRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const ReportRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ReportRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:istio.mixer.v1.ReportRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:istio.mixer.v1.ReportRequest)
    MergeFrom(*source);
  }
}

void ReportRequest::MergeFrom(const ReportRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:istio.mixer.v1.ReportRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  attributes_.MergeFrom(from.attributes_);
  default_words_.MergeFrom(from.default_words_);
  if (from.global_word_count() != 0) {
    set_global_word_count(from.global_word_count());
  }
}

void ReportRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:istio.mixer.v1.ReportRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReportRequest::CopyFrom(const ReportRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:istio.mixer.v1.ReportRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReportRequest::IsInitialized() const {
  return true;
}

void ReportRequest::Swap(ReportRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReportRequest::InternalSwap(ReportRequest* other) {
  using std::swap;
  attributes_.InternalSwap(&other->attributes_);
  default_words_.InternalSwap(&other->default_words_);
  swap(global_word_count_, other->global_word_count_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ReportRequest::GetMetadata() const {
  protobuf_mixer_2fv1_2freport_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mixer_2fv1_2freport_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ReportRequest

// repeated .istio.mixer.v1.CompressedAttributes attributes = 1 [(.gogoproto.nullable) = false];
int ReportRequest::attributes_size() const {
  return attributes_.size();
}
void ReportRequest::clear_attributes() {
  attributes_.Clear();
}
const ::istio::mixer::v1::CompressedAttributes& ReportRequest::attributes(int index) const {
  // @@protoc_insertion_point(field_get:istio.mixer.v1.ReportRequest.attributes)
  return attributes_.Get(index);
}
::istio::mixer::v1::CompressedAttributes* ReportRequest::mutable_attributes(int index) {
  // @@protoc_insertion_point(field_mutable:istio.mixer.v1.ReportRequest.attributes)
  return attributes_.Mutable(index);
}
::istio::mixer::v1::CompressedAttributes* ReportRequest::add_attributes() {
  // @@protoc_insertion_point(field_add:istio.mixer.v1.ReportRequest.attributes)
  return attributes_.Add();
}
::google::protobuf::RepeatedPtrField< ::istio::mixer::v1::CompressedAttributes >*
ReportRequest::mutable_attributes() {
  // @@protoc_insertion_point(field_mutable_list:istio.mixer.v1.ReportRequest.attributes)
  return &attributes_;
}
const ::google::protobuf::RepeatedPtrField< ::istio::mixer::v1::CompressedAttributes >&
ReportRequest::attributes() const {
  // @@protoc_insertion_point(field_list:istio.mixer.v1.ReportRequest.attributes)
  return attributes_;
}

// repeated string default_words = 2;
int ReportRequest::default_words_size() const {
  return default_words_.size();
}
void ReportRequest::clear_default_words() {
  default_words_.Clear();
}
const ::std::string& ReportRequest::default_words(int index) const {
  // @@protoc_insertion_point(field_get:istio.mixer.v1.ReportRequest.default_words)
  return default_words_.Get(index);
}
::std::string* ReportRequest::mutable_default_words(int index) {
  // @@protoc_insertion_point(field_mutable:istio.mixer.v1.ReportRequest.default_words)
  return default_words_.Mutable(index);
}
void ReportRequest::set_default_words(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:istio.mixer.v1.ReportRequest.default_words)
  default_words_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void ReportRequest::set_default_words(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:istio.mixer.v1.ReportRequest.default_words)
  default_words_.Mutable(index)->assign(std::move(value));
}
#endif
void ReportRequest::set_default_words(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  default_words_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:istio.mixer.v1.ReportRequest.default_words)
}
void ReportRequest::set_default_words(int index, const char* value, size_t size) {
  default_words_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:istio.mixer.v1.ReportRequest.default_words)
}
::std::string* ReportRequest::add_default_words() {
  // @@protoc_insertion_point(field_add_mutable:istio.mixer.v1.ReportRequest.default_words)
  return default_words_.Add();
}
void ReportRequest::add_default_words(const ::std::string& value) {
  default_words_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:istio.mixer.v1.ReportRequest.default_words)
}
#if LANG_CXX11
void ReportRequest::add_default_words(::std::string&& value) {
  default_words_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:istio.mixer.v1.ReportRequest.default_words)
}
#endif
void ReportRequest::add_default_words(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  default_words_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:istio.mixer.v1.ReportRequest.default_words)
}
void ReportRequest::add_default_words(const char* value, size_t size) {
  default_words_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:istio.mixer.v1.ReportRequest.default_words)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
ReportRequest::default_words() const {
  // @@protoc_insertion_point(field_list:istio.mixer.v1.ReportRequest.default_words)
  return default_words_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
ReportRequest::mutable_default_words() {
  // @@protoc_insertion_point(field_mutable_list:istio.mixer.v1.ReportRequest.default_words)
  return &default_words_;
}

// uint32 global_word_count = 3;
void ReportRequest::clear_global_word_count() {
  global_word_count_ = 0u;
}
::google::protobuf::uint32 ReportRequest::global_word_count() const {
  // @@protoc_insertion_point(field_get:istio.mixer.v1.ReportRequest.global_word_count)
  return global_word_count_;
}
void ReportRequest::set_global_word_count(::google::protobuf::uint32 value) {
  
  global_word_count_ = value;
  // @@protoc_insertion_point(field_set:istio.mixer.v1.ReportRequest.global_word_count)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReportResponse::ReportResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_mixer_2fv1_2freport_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:istio.mixer.v1.ReportResponse)
}
ReportResponse::ReportResponse(const ReportResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:istio.mixer.v1.ReportResponse)
}

void ReportResponse::SharedCtor() {
  _cached_size_ = 0;
}

ReportResponse::~ReportResponse() {
  // @@protoc_insertion_point(destructor:istio.mixer.v1.ReportResponse)
  SharedDtor();
}

void ReportResponse::SharedDtor() {
}

void ReportResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ReportResponse::descriptor() {
  protobuf_mixer_2fv1_2freport_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mixer_2fv1_2freport_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ReportResponse& ReportResponse::default_instance() {
  protobuf_mixer_2fv1_2freport_2eproto::InitDefaults();
  return *internal_default_instance();
}

ReportResponse* ReportResponse::New(::google::protobuf::Arena* arena) const {
  ReportResponse* n = new ReportResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ReportResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:istio.mixer.v1.ReportResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool ReportResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:istio.mixer.v1.ReportResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:istio.mixer.v1.ReportResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:istio.mixer.v1.ReportResponse)
  return false;
#undef DO_
}

void ReportResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:istio.mixer.v1.ReportResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:istio.mixer.v1.ReportResponse)
}

::google::protobuf::uint8* ReportResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:istio.mixer.v1.ReportResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:istio.mixer.v1.ReportResponse)
  return target;
}

size_t ReportResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:istio.mixer.v1.ReportResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ReportResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:istio.mixer.v1.ReportResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const ReportResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ReportResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:istio.mixer.v1.ReportResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:istio.mixer.v1.ReportResponse)
    MergeFrom(*source);
  }
}

void ReportResponse::MergeFrom(const ReportResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:istio.mixer.v1.ReportResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void ReportResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:istio.mixer.v1.ReportResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReportResponse::CopyFrom(const ReportResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:istio.mixer.v1.ReportResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReportResponse::IsInitialized() const {
  return true;
}

void ReportResponse::Swap(ReportResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReportResponse::InternalSwap(ReportResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ReportResponse::GetMetadata() const {
  protobuf_mixer_2fv1_2freport_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mixer_2fv1_2freport_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ReportResponse

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace mixer
}  // namespace istio

// @@protoc_insertion_point(global_scope)
