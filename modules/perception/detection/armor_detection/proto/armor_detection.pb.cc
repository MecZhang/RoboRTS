// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: armor_detection.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "armor_detection.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* ArmorDetectionAlgorithms_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ArmorDetectionAlgorithms_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_armor_5fdetection_2eproto() {
  protobuf_AddDesc_armor_5fdetection_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "armor_detection.proto");
  GOOGLE_CHECK(file != NULL);
  ArmorDetectionAlgorithms_descriptor_ = file->message_type(0);
  static const int ArmorDetectionAlgorithms_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArmorDetectionAlgorithms, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArmorDetectionAlgorithms, selected_algorithm_),
  };
  ArmorDetectionAlgorithms_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ArmorDetectionAlgorithms_descriptor_,
      ArmorDetectionAlgorithms::default_instance_,
      ArmorDetectionAlgorithms_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArmorDetectionAlgorithms, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArmorDetectionAlgorithms, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ArmorDetectionAlgorithms));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_armor_5fdetection_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ArmorDetectionAlgorithms_descriptor_, &ArmorDetectionAlgorithms::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_armor_5fdetection_2eproto() {
  delete ArmorDetectionAlgorithms::default_instance_;
  delete ArmorDetectionAlgorithms_reflection_;
}

void protobuf_AddDesc_armor_5fdetection_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025armor_detection.proto\"D\n\030ArmorDetectio"
    "nAlgorithms\022\014\n\004name\030\001 \003(\t\022\032\n\022selected_al"
    "gorithm\030\002 \001(\t", 93);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "armor_detection.proto", &protobuf_RegisterTypes);
  ArmorDetectionAlgorithms::default_instance_ = new ArmorDetectionAlgorithms();
  ArmorDetectionAlgorithms::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_armor_5fdetection_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_armor_5fdetection_2eproto {
  StaticDescriptorInitializer_armor_5fdetection_2eproto() {
    protobuf_AddDesc_armor_5fdetection_2eproto();
  }
} static_descriptor_initializer_armor_5fdetection_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ArmorDetectionAlgorithms::kNameFieldNumber;
const int ArmorDetectionAlgorithms::kSelectedAlgorithmFieldNumber;
#endif  // !_MSC_VER

ArmorDetectionAlgorithms::ArmorDetectionAlgorithms()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ArmorDetectionAlgorithms)
}

void ArmorDetectionAlgorithms::InitAsDefaultInstance() {
}

ArmorDetectionAlgorithms::ArmorDetectionAlgorithms(const ArmorDetectionAlgorithms& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ArmorDetectionAlgorithms)
}

void ArmorDetectionAlgorithms::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  selected_algorithm_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArmorDetectionAlgorithms::~ArmorDetectionAlgorithms() {
  // @@protoc_insertion_point(destructor:ArmorDetectionAlgorithms)
  SharedDtor();
}

void ArmorDetectionAlgorithms::SharedDtor() {
  if (selected_algorithm_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete selected_algorithm_;
  }
  if (this != default_instance_) {
  }
}

void ArmorDetectionAlgorithms::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ArmorDetectionAlgorithms::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ArmorDetectionAlgorithms_descriptor_;
}

const ArmorDetectionAlgorithms& ArmorDetectionAlgorithms::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_armor_5fdetection_2eproto();
  return *default_instance_;
}

ArmorDetectionAlgorithms* ArmorDetectionAlgorithms::default_instance_ = NULL;

ArmorDetectionAlgorithms* ArmorDetectionAlgorithms::New() const {
  return new ArmorDetectionAlgorithms;
}

void ArmorDetectionAlgorithms::Clear() {
  if (has_selected_algorithm()) {
    if (selected_algorithm_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      selected_algorithm_->clear();
    }
  }
  name_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ArmorDetectionAlgorithms::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ArmorDetectionAlgorithms)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string name = 1;
      case 1: {
        if (tag == 10) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name(this->name_size() - 1).data(),
            this->name(this->name_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_name;
        if (input->ExpectTag(18)) goto parse_selected_algorithm;
        break;
      }

      // optional string selected_algorithm = 2;
      case 2: {
        if (tag == 18) {
         parse_selected_algorithm:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_selected_algorithm()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->selected_algorithm().data(), this->selected_algorithm().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "selected_algorithm");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ArmorDetectionAlgorithms)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ArmorDetectionAlgorithms)
  return false;
#undef DO_
}

void ArmorDetectionAlgorithms::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ArmorDetectionAlgorithms)
  // repeated string name = 1;
  for (int i = 0; i < this->name_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->name(i).data(), this->name(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "name");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(i), output);
  }

  // optional string selected_algorithm = 2;
  if (has_selected_algorithm()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->selected_algorithm().data(), this->selected_algorithm().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "selected_algorithm");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->selected_algorithm(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ArmorDetectionAlgorithms)
}

::google::protobuf::uint8* ArmorDetectionAlgorithms::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ArmorDetectionAlgorithms)
  // repeated string name = 1;
  for (int i = 0; i < this->name_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name(i).data(), this->name(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->name(i), target);
  }

  // optional string selected_algorithm = 2;
  if (has_selected_algorithm()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->selected_algorithm().data(), this->selected_algorithm().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "selected_algorithm");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->selected_algorithm(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ArmorDetectionAlgorithms)
  return target;
}

int ArmorDetectionAlgorithms::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // optional string selected_algorithm = 2;
    if (has_selected_algorithm()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->selected_algorithm());
    }

  }
  // repeated string name = 1;
  total_size += 1 * this->name_size();
  for (int i = 0; i < this->name_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->name(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArmorDetectionAlgorithms::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ArmorDetectionAlgorithms* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ArmorDetectionAlgorithms*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ArmorDetectionAlgorithms::MergeFrom(const ArmorDetectionAlgorithms& from) {
  GOOGLE_CHECK_NE(&from, this);
  name_.MergeFrom(from.name_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_selected_algorithm()) {
      set_selected_algorithm(from.selected_algorithm());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ArmorDetectionAlgorithms::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ArmorDetectionAlgorithms::CopyFrom(const ArmorDetectionAlgorithms& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArmorDetectionAlgorithms::IsInitialized() const {

  return true;
}

void ArmorDetectionAlgorithms::Swap(ArmorDetectionAlgorithms* other) {
  if (other != this) {
    name_.Swap(&other->name_);
    std::swap(selected_algorithm_, other->selected_algorithm_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ArmorDetectionAlgorithms::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ArmorDetectionAlgorithms_descriptor_;
  metadata.reflection = ArmorDetectionAlgorithms_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
