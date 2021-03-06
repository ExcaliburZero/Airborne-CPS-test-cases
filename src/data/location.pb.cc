// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: location.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "location.pb.h"

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

namespace xplane {

namespace {

const ::google::protobuf::Descriptor* Location_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Location_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_location_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_location_2eproto() {
  protobuf_AddDesc_location_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "location.proto");
  GOOGLE_CHECK(file != NULL);
  Location_descriptor_ = file->message_type(0);
  static const int Location_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, lat_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, lon_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, alt_),
  };
  Location_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Location_descriptor_,
      Location::internal_default_instance(),
      Location_offsets_,
      -1,
      -1,
      -1,
      sizeof(Location),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_location_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Location_descriptor_, Location::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_location_2eproto() {
  Location_default_instance_.Shutdown();
  delete Location_reflection_;
}

void protobuf_InitDefaults_location_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  Location_default_instance_.DefaultConstruct();
  Location_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_location_2eproto_once_);
void protobuf_InitDefaults_location_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_location_2eproto_once_,
                 &protobuf_InitDefaults_location_2eproto_impl);
}
void protobuf_AddDesc_location_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_location_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016location.proto\022\006xplane\"I\n\010Location\022\n\n\002"
    "id\030\001 \001(\t\022\n\n\002ip\030\002 \001(\t\022\013\n\003lat\030\003 \001(\001\022\013\n\003lon"
    "\030\004 \001(\001\022\013\n\003alt\030\005 \001(\001b\006proto3", 107);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "location.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_location_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_location_2eproto_once_);
void protobuf_AddDesc_location_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_location_2eproto_once_,
                 &protobuf_AddDesc_location_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_location_2eproto {
  StaticDescriptorInitializer_location_2eproto() {
    protobuf_AddDesc_location_2eproto();
  }
} static_descriptor_initializer_location_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Location::kIdFieldNumber;
const int Location::kIpFieldNumber;
const int Location::kLatFieldNumber;
const int Location::kLonFieldNumber;
const int Location::kAltFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Location::Location()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_location_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:xplane.Location)
}

void Location::InitAsDefaultInstance() {
}

Location::Location(const Location& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:xplane.Location)
}

void Location::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&lat_, 0, reinterpret_cast<char*>(&alt_) -
    reinterpret_cast<char*>(&lat_) + sizeof(alt_));
  _cached_size_ = 0;
}

Location::~Location() {
  // @@protoc_insertion_point(destructor:xplane.Location)
  SharedDtor();
}

void Location::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Location::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Location::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Location_descriptor_;
}

const Location& Location::default_instance() {
  protobuf_InitDefaults_location_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Location> Location_default_instance_;

Location* Location::New(::google::protobuf::Arena* arena) const {
  Location* n = new Location;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Location::Clear() {
// @@protoc_insertion_point(message_clear_start:xplane.Location)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Location, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Location*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(lat_, alt_);
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool Location::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:xplane.Location)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "xplane.Location.id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_ip;
        break;
      }

      // optional string ip = 2;
      case 2: {
        if (tag == 18) {
         parse_ip:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->ip().data(), this->ip().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "xplane.Location.ip"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_lat;
        break;
      }

      // optional double lat = 3;
      case 3: {
        if (tag == 25) {
         parse_lat:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &lat_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_lon;
        break;
      }

      // optional double lon = 4;
      case 4: {
        if (tag == 33) {
         parse_lon:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &lon_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_alt;
        break;
      }

      // optional double alt = 5;
      case 5: {
        if (tag == 41) {
         parse_alt:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &alt_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:xplane.Location)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:xplane.Location)
  return false;
#undef DO_
}

void Location::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:xplane.Location)
  // optional string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "xplane.Location.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // optional string ip = 2;
  if (this->ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "xplane.Location.ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->ip(), output);
  }

  // optional double lat = 3;
  if (this->lat() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->lat(), output);
  }

  // optional double lon = 4;
  if (this->lon() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->lon(), output);
  }

  // optional double alt = 5;
  if (this->alt() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->alt(), output);
  }

  // @@protoc_insertion_point(serialize_end:xplane.Location)
}

::google::protobuf::uint8* Location::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:xplane.Location)
  // optional string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "xplane.Location.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // optional string ip = 2;
  if (this->ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "xplane.Location.ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->ip(), target);
  }

  // optional double lat = 3;
  if (this->lat() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->lat(), target);
  }

  // optional double lon = 4;
  if (this->lon() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->lon(), target);
  }

  // optional double alt = 5;
  if (this->alt() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->alt(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:xplane.Location)
  return target;
}

size_t Location::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xplane.Location)
  size_t total_size = 0;

  // optional string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // optional string ip = 2;
  if (this->ip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ip());
  }

  // optional double lat = 3;
  if (this->lat() != 0) {
    total_size += 1 + 8;
  }

  // optional double lon = 4;
  if (this->lon() != 0) {
    total_size += 1 + 8;
  }

  // optional double alt = 5;
  if (this->alt() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Location::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xplane.Location)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Location* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Location>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xplane.Location)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xplane.Location)
    UnsafeMergeFrom(*source);
  }
}

void Location::MergeFrom(const Location& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xplane.Location)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Location::UnsafeMergeFrom(const Location& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.ip().size() > 0) {

    ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_);
  }
  if (from.lat() != 0) {
    set_lat(from.lat());
  }
  if (from.lon() != 0) {
    set_lon(from.lon());
  }
  if (from.alt() != 0) {
    set_alt(from.alt());
  }
}

void Location::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xplane.Location)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Location::CopyFrom(const Location& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xplane.Location)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Location::IsInitialized() const {

  return true;
}

void Location::Swap(Location* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Location::InternalSwap(Location* other) {
  id_.Swap(&other->id_);
  ip_.Swap(&other->ip_);
  std::swap(lat_, other->lat_);
  std::swap(lon_, other->lon_);
  std::swap(alt_, other->alt_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Location::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Location_descriptor_;
  metadata.reflection = Location_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Location

// optional string id = 1;
void Location::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Location::id() const {
  // @@protoc_insertion_point(field_get:xplane.Location.id)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Location::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:xplane.Location.id)
}
void Location::set_id(const char* value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:xplane.Location.id)
}
void Location::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:xplane.Location.id)
}
::std::string* Location::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:xplane.Location.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Location::release_id() {
  // @@protoc_insertion_point(field_release:xplane.Location.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Location::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:xplane.Location.id)
}

// optional string ip = 2;
void Location::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Location::ip() const {
  // @@protoc_insertion_point(field_get:xplane.Location.ip)
  return ip_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Location::set_ip(const ::std::string& value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:xplane.Location.ip)
}
void Location::set_ip(const char* value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:xplane.Location.ip)
}
void Location::set_ip(const char* value, size_t size) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:xplane.Location.ip)
}
::std::string* Location::mutable_ip() {
  
  // @@protoc_insertion_point(field_mutable:xplane.Location.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Location::release_ip() {
  // @@protoc_insertion_point(field_release:xplane.Location.ip)
  
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Location::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    
  } else {
    
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:xplane.Location.ip)
}

// optional double lat = 3;
void Location::clear_lat() {
  lat_ = 0;
}
double Location::lat() const {
  // @@protoc_insertion_point(field_get:xplane.Location.lat)
  return lat_;
}
void Location::set_lat(double value) {
  
  lat_ = value;
  // @@protoc_insertion_point(field_set:xplane.Location.lat)
}

// optional double lon = 4;
void Location::clear_lon() {
  lon_ = 0;
}
double Location::lon() const {
  // @@protoc_insertion_point(field_get:xplane.Location.lon)
  return lon_;
}
void Location::set_lon(double value) {
  
  lon_ = value;
  // @@protoc_insertion_point(field_set:xplane.Location.lon)
}

// optional double alt = 5;
void Location::clear_alt() {
  alt_ = 0;
}
double Location::alt() const {
  // @@protoc_insertion_point(field_get:xplane.Location.alt)
  return alt_;
}
void Location::set_alt(double value) {
  
  alt_ = value;
  // @@protoc_insertion_point(field_set:xplane.Location.alt)
}

inline const Location* Location::internal_default_instance() {
  return &Location_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace xplane

// @@protoc_insertion_point(global_scope)
