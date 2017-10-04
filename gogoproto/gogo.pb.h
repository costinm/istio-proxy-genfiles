// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gogoproto/gogo.proto

#ifndef PROTOBUF_gogoproto_2fgogo_2eproto__INCLUDED
#define PROTOBUF_gogoproto_2fgogo_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
namespace gogoproto {
}  // namespace gogoproto

namespace gogoproto {

namespace protobuf_gogoproto_2fgogo_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_gogoproto_2fgogo_2eproto

// ===================================================================


// ===================================================================

static const int kGoprotoEnumPrefixFieldNumber = 62001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_prefix;
static const int kGoprotoEnumStringerFieldNumber = 62021;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_stringer;
static const int kEnumStringerFieldNumber = 62022;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  enum_stringer;
static const int kEnumCustomnameFieldNumber = 62023;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enum_customname;
static const int kEnumdeclFieldNumber = 62024;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  enumdecl;
static const int kEnumvalueCustomnameFieldNumber = 66001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enumvalue_customname;
static const int kGoprotoGettersAllFieldNumber = 63001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_getters_all;
static const int kGoprotoEnumPrefixAllFieldNumber = 63002;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_prefix_all;
static const int kGoprotoStringerAllFieldNumber = 63003;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_stringer_all;
static const int kVerboseEqualAllFieldNumber = 63004;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  verbose_equal_all;
static const int kFaceAllFieldNumber = 63005;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  face_all;
static const int kGostringAllFieldNumber = 63006;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  gostring_all;
static const int kPopulateAllFieldNumber = 63007;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  populate_all;
static const int kStringerAllFieldNumber = 63008;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stringer_all;
static const int kOnlyoneAllFieldNumber = 63009;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  onlyone_all;
static const int kEqualAllFieldNumber = 63013;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  equal_all;
static const int kDescriptionAllFieldNumber = 63014;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  description_all;
static const int kTestgenAllFieldNumber = 63015;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  testgen_all;
static const int kBenchgenAllFieldNumber = 63016;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  benchgen_all;
static const int kMarshalerAllFieldNumber = 63017;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  marshaler_all;
static const int kUnmarshalerAllFieldNumber = 63018;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unmarshaler_all;
static const int kStableMarshalerAllFieldNumber = 63019;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stable_marshaler_all;
static const int kSizerAllFieldNumber = 63020;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  sizer_all;
static const int kGoprotoEnumStringerAllFieldNumber = 63021;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_stringer_all;
static const int kEnumStringerAllFieldNumber = 63022;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  enum_stringer_all;
static const int kUnsafeMarshalerAllFieldNumber = 63023;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_marshaler_all;
static const int kUnsafeUnmarshalerAllFieldNumber = 63024;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_unmarshaler_all;
static const int kGoprotoExtensionsMapAllFieldNumber = 63025;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_extensions_map_all;
static const int kGoprotoUnrecognizedAllFieldNumber = 63026;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unrecognized_all;
static const int kGogoprotoImportFieldNumber = 63027;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  gogoproto_import;
static const int kProtosizerAllFieldNumber = 63028;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  protosizer_all;
static const int kCompareAllFieldNumber = 63029;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  compare_all;
static const int kTypedeclAllFieldNumber = 63030;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  typedecl_all;
static const int kEnumdeclAllFieldNumber = 63031;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  enumdecl_all;
static const int kGoprotoRegistrationFieldNumber = 63032;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_registration;
static const int kGoprotoGettersFieldNumber = 64001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_getters;
static const int kGoprotoStringerFieldNumber = 64003;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_stringer;
static const int kVerboseEqualFieldNumber = 64004;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  verbose_equal;
static const int kFaceFieldNumber = 64005;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  face;
static const int kGostringFieldNumber = 64006;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  gostring;
static const int kPopulateFieldNumber = 64007;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  populate;
static const int kStringerFieldNumber = 67008;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stringer;
static const int kOnlyoneFieldNumber = 64009;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  onlyone;
static const int kEqualFieldNumber = 64013;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  equal;
static const int kDescriptionFieldNumber = 64014;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  description;
static const int kTestgenFieldNumber = 64015;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  testgen;
static const int kBenchgenFieldNumber = 64016;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  benchgen;
static const int kMarshalerFieldNumber = 64017;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  marshaler;
static const int kUnmarshalerFieldNumber = 64018;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unmarshaler;
static const int kStableMarshalerFieldNumber = 64019;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stable_marshaler;
static const int kSizerFieldNumber = 64020;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  sizer;
static const int kUnsafeMarshalerFieldNumber = 64023;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_marshaler;
static const int kUnsafeUnmarshalerFieldNumber = 64024;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_unmarshaler;
static const int kGoprotoExtensionsMapFieldNumber = 64025;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_extensions_map;
static const int kGoprotoUnrecognizedFieldNumber = 64026;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unrecognized;
static const int kProtosizerFieldNumber = 64028;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  protosizer;
static const int kCompareFieldNumber = 64029;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  compare;
static const int kTypedeclFieldNumber = 64030;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  typedecl;
static const int kNullableFieldNumber = 65001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  nullable;
static const int kEmbedFieldNumber = 65002;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  embed;
static const int kCustomtypeFieldNumber = 65003;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  customtype;
static const int kCustomnameFieldNumber = 65004;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  customname;
static const int kJsontagFieldNumber = 65005;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  jsontag;
static const int kMoretagsFieldNumber = 65006;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  moretags;
static const int kCasttypeFieldNumber = 65007;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  casttype;
static const int kCastkeyFieldNumber = 65008;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  castkey;
static const int kCastvalueFieldNumber = 65009;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  castvalue;
static const int kStdtimeFieldNumber = 65010;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stdtime;
static const int kStddurationFieldNumber = 65011;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stdduration;

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace gogoproto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_gogoproto_2fgogo_2eproto__INCLUDED
