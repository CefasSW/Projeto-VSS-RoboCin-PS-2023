// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_vision_wrapper.proto

#include "ssl_vision_wrapper.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_ssl_5fvision_5fdetection_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_SSL_DetectionFrame_ssl_5fvision_5fdetection_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_ssl_5fvision_5fgeometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_SSL_GeometryData_ssl_5fvision_5fgeometry_2eproto;
namespace RoboCupSSL {
class SSL_WrapperPacketDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SSL_WrapperPacket> _instance;
} _SSL_WrapperPacket_default_instance_;
}  // namespace RoboCupSSL
static void InitDefaultsscc_info_SSL_WrapperPacket_ssl_5fvision_5fwrapper_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::RoboCupSSL::_SSL_WrapperPacket_default_instance_;
    new (ptr) ::RoboCupSSL::SSL_WrapperPacket();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RoboCupSSL::SSL_WrapperPacket::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_SSL_WrapperPacket_ssl_5fvision_5fwrapper_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_SSL_WrapperPacket_ssl_5fvision_5fwrapper_2eproto}, {
      &scc_info_SSL_DetectionFrame_ssl_5fvision_5fdetection_2eproto.base,
      &scc_info_SSL_GeometryData_ssl_5fvision_5fgeometry_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ssl_5fvision_5fwrapper_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ssl_5fvision_5fwrapper_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ssl_5fvision_5fwrapper_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ssl_5fvision_5fwrapper_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::SSL_WrapperPacket, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::SSL_WrapperPacket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::SSL_WrapperPacket, detection_),
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::SSL_WrapperPacket, geometry_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::RoboCupSSL::SSL_WrapperPacket)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::RoboCupSSL::_SSL_WrapperPacket_default_instance_),
};

const char descriptor_table_protodef_ssl_5fvision_5fwrapper_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030ssl_vision_wrapper.proto\022\nRoboCupSSL\032\032"
  "ssl_vision_detection.proto\032\031ssl_vision_g"
  "eometry.proto\"v\n\021SSL_WrapperPacket\0221\n\tde"
  "tection\030\001 \001(\0132\036.RoboCupSSL.SSL_Detection"
  "Frame\022.\n\010geometry\030\002 \001(\0132\034.RoboCupSSL.SSL"
  "_GeometryDataB5Z3github.com/RoboCup-SSL/"
  "ssl-vision-client/pkg/vision"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ssl_5fvision_5fwrapper_2eproto_deps[2] = {
  &::descriptor_table_ssl_5fvision_5fdetection_2eproto,
  &::descriptor_table_ssl_5fvision_5fgeometry_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ssl_5fvision_5fwrapper_2eproto_sccs[1] = {
  &scc_info_SSL_WrapperPacket_ssl_5fvision_5fwrapper_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ssl_5fvision_5fwrapper_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ssl_5fvision_5fwrapper_2eproto = {
  false, false, descriptor_table_protodef_ssl_5fvision_5fwrapper_2eproto, "ssl_vision_wrapper.proto", 268,
  &descriptor_table_ssl_5fvision_5fwrapper_2eproto_once, descriptor_table_ssl_5fvision_5fwrapper_2eproto_sccs, descriptor_table_ssl_5fvision_5fwrapper_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_ssl_5fvision_5fwrapper_2eproto::offsets,
  file_level_metadata_ssl_5fvision_5fwrapper_2eproto, 1, file_level_enum_descriptors_ssl_5fvision_5fwrapper_2eproto, file_level_service_descriptors_ssl_5fvision_5fwrapper_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ssl_5fvision_5fwrapper_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ssl_5fvision_5fwrapper_2eproto)), true);
namespace RoboCupSSL {

// ===================================================================

void SSL_WrapperPacket::InitAsDefaultInstance() {
  ::RoboCupSSL::_SSL_WrapperPacket_default_instance_._instance.get_mutable()->detection_ = const_cast< ::RoboCupSSL::SSL_DetectionFrame*>(
      ::RoboCupSSL::SSL_DetectionFrame::internal_default_instance());
  ::RoboCupSSL::_SSL_WrapperPacket_default_instance_._instance.get_mutable()->geometry_ = const_cast< ::RoboCupSSL::SSL_GeometryData*>(
      ::RoboCupSSL::SSL_GeometryData::internal_default_instance());
}
class SSL_WrapperPacket::_Internal {
 public:
  using HasBits = decltype(std::declval<SSL_WrapperPacket>()._has_bits_);
  static const ::RoboCupSSL::SSL_DetectionFrame& detection(const SSL_WrapperPacket* msg);
  static void set_has_detection(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::RoboCupSSL::SSL_GeometryData& geometry(const SSL_WrapperPacket* msg);
  static void set_has_geometry(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::RoboCupSSL::SSL_DetectionFrame&
SSL_WrapperPacket::_Internal::detection(const SSL_WrapperPacket* msg) {
  return *msg->detection_;
}
const ::RoboCupSSL::SSL_GeometryData&
SSL_WrapperPacket::_Internal::geometry(const SSL_WrapperPacket* msg) {
  return *msg->geometry_;
}
void SSL_WrapperPacket::clear_detection() {
  if (detection_ != nullptr) detection_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void SSL_WrapperPacket::clear_geometry() {
  if (geometry_ != nullptr) geometry_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
SSL_WrapperPacket::SSL_WrapperPacket(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:RoboCupSSL.SSL_WrapperPacket)
}
SSL_WrapperPacket::SSL_WrapperPacket(const SSL_WrapperPacket& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_detection()) {
    detection_ = new ::RoboCupSSL::SSL_DetectionFrame(*from.detection_);
  } else {
    detection_ = nullptr;
  }
  if (from._internal_has_geometry()) {
    geometry_ = new ::RoboCupSSL::SSL_GeometryData(*from.geometry_);
  } else {
    geometry_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:RoboCupSSL.SSL_WrapperPacket)
}

void SSL_WrapperPacket::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SSL_WrapperPacket_ssl_5fvision_5fwrapper_2eproto.base);
  ::memset(&detection_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&geometry_) -
      reinterpret_cast<char*>(&detection_)) + sizeof(geometry_));
}

SSL_WrapperPacket::~SSL_WrapperPacket() {
  // @@protoc_insertion_point(destructor:RoboCupSSL.SSL_WrapperPacket)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SSL_WrapperPacket::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete detection_;
  if (this != internal_default_instance()) delete geometry_;
}

void SSL_WrapperPacket::ArenaDtor(void* object) {
  SSL_WrapperPacket* _this = reinterpret_cast< SSL_WrapperPacket* >(object);
  (void)_this;
}
void SSL_WrapperPacket::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SSL_WrapperPacket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SSL_WrapperPacket& SSL_WrapperPacket::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SSL_WrapperPacket_ssl_5fvision_5fwrapper_2eproto.base);
  return *internal_default_instance();
}


void SSL_WrapperPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:RoboCupSSL.SSL_WrapperPacket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(detection_ != nullptr);
      detection_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(geometry_ != nullptr);
      geometry_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SSL_WrapperPacket::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .RoboCupSSL.SSL_DetectionFrame detection = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_detection(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .RoboCupSSL.SSL_GeometryData geometry = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_geometry(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SSL_WrapperPacket::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RoboCupSSL.SSL_WrapperPacket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .RoboCupSSL.SSL_DetectionFrame detection = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::detection(this), target, stream);
  }

  // optional .RoboCupSSL.SSL_GeometryData geometry = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::geometry(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RoboCupSSL.SSL_WrapperPacket)
  return target;
}

size_t SSL_WrapperPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RoboCupSSL.SSL_WrapperPacket)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .RoboCupSSL.SSL_DetectionFrame detection = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *detection_);
    }

    // optional .RoboCupSSL.SSL_GeometryData geometry = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *geometry_);
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SSL_WrapperPacket::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RoboCupSSL.SSL_WrapperPacket)
  GOOGLE_DCHECK_NE(&from, this);
  const SSL_WrapperPacket* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SSL_WrapperPacket>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RoboCupSSL.SSL_WrapperPacket)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RoboCupSSL.SSL_WrapperPacket)
    MergeFrom(*source);
  }
}

void SSL_WrapperPacket::MergeFrom(const SSL_WrapperPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RoboCupSSL.SSL_WrapperPacket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_detection()->::RoboCupSSL::SSL_DetectionFrame::MergeFrom(from._internal_detection());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_geometry()->::RoboCupSSL::SSL_GeometryData::MergeFrom(from._internal_geometry());
    }
  }
}

void SSL_WrapperPacket::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RoboCupSSL.SSL_WrapperPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SSL_WrapperPacket::CopyFrom(const SSL_WrapperPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RoboCupSSL.SSL_WrapperPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SSL_WrapperPacket::IsInitialized() const {
  if (_internal_has_detection()) {
    if (!detection_->IsInitialized()) return false;
  }
  if (_internal_has_geometry()) {
    if (!geometry_->IsInitialized()) return false;
  }
  return true;
}

void SSL_WrapperPacket::InternalSwap(SSL_WrapperPacket* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SSL_WrapperPacket, geometry_)
      + sizeof(SSL_WrapperPacket::geometry_)
      - PROTOBUF_FIELD_OFFSET(SSL_WrapperPacket, detection_)>(
          reinterpret_cast<char*>(&detection_),
          reinterpret_cast<char*>(&other->detection_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SSL_WrapperPacket::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace RoboCupSSL
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::RoboCupSSL::SSL_WrapperPacket* Arena::CreateMaybeMessage< ::RoboCupSSL::SSL_WrapperPacket >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RoboCupSSL::SSL_WrapperPacket >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
