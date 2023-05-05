// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_simulation_custom_erforce_robot_spec.proto

#include "ssl_simulation_custom_erforce_robot_spec.pb.h"

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
namespace RoboCupSSL {
class RobotSpecErForceDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RobotSpecErForce> _instance;
} _RobotSpecErForce_default_instance_;
}  // namespace RoboCupSSL
static void InitDefaultsscc_info_RobotSpecErForce_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::RoboCupSSL::_RobotSpecErForce_default_instance_;
    new (ptr) ::RoboCupSSL::RobotSpecErForce();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RoboCupSSL::RobotSpecErForce::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RobotSpecErForce_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_RobotSpecErForce_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::RobotSpecErForce, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::RobotSpecErForce, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::RobotSpecErForce, shoot_radius_),
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::RobotSpecErForce, dribbler_width_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::RoboCupSSL::RobotSpecErForce)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::RoboCupSSL::_RobotSpecErForce_default_instance_),
};

const char descriptor_table_protodef_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.ssl_simulation_custom_erforce_robot_sp"
  "ec.proto\022\nRoboCupSSL\"F\n\020RobotSpecErForce"
  "\022\024\n\014shoot_radius\030\001 \001(\002\022\026\n\016dribbler_width"
  "\030\003 \001(\002J\004\010\002\020\003BBZ@github.com/RoboCup-SSL/s"
  "sl-simulation-controller/internal/simctl"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto_sccs[1] = {
  &scc_info_RobotSpecErForce_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto = {
  false, false, descriptor_table_protodef_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto, "ssl_simulation_custom_erforce_robot_spec.proto", 200,
  &descriptor_table_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto_once, descriptor_table_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto_sccs, descriptor_table_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto::offsets,
  file_level_metadata_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto, 1, file_level_enum_descriptors_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto, file_level_service_descriptors_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto)), true);
namespace RoboCupSSL {

// ===================================================================

void RobotSpecErForce::InitAsDefaultInstance() {
}
class RobotSpecErForce::_Internal {
 public:
  using HasBits = decltype(std::declval<RobotSpecErForce>()._has_bits_);
  static void set_has_shoot_radius(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_dribbler_width(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

RobotSpecErForce::RobotSpecErForce(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:RoboCupSSL.RobotSpecErForce)
}
RobotSpecErForce::RobotSpecErForce(const RobotSpecErForce& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&shoot_radius_, &from.shoot_radius_,
    static_cast<size_t>(reinterpret_cast<char*>(&dribbler_width_) -
    reinterpret_cast<char*>(&shoot_radius_)) + sizeof(dribbler_width_));
  // @@protoc_insertion_point(copy_constructor:RoboCupSSL.RobotSpecErForce)
}

void RobotSpecErForce::SharedCtor() {
  ::memset(&shoot_radius_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&dribbler_width_) -
      reinterpret_cast<char*>(&shoot_radius_)) + sizeof(dribbler_width_));
}

RobotSpecErForce::~RobotSpecErForce() {
  // @@protoc_insertion_point(destructor:RoboCupSSL.RobotSpecErForce)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RobotSpecErForce::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void RobotSpecErForce::ArenaDtor(void* object) {
  RobotSpecErForce* _this = reinterpret_cast< RobotSpecErForce* >(object);
  (void)_this;
}
void RobotSpecErForce::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RobotSpecErForce::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RobotSpecErForce& RobotSpecErForce::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RobotSpecErForce_ssl_5fsimulation_5fcustom_5ferforce_5frobot_5fspec_2eproto.base);
  return *internal_default_instance();
}


void RobotSpecErForce::Clear() {
// @@protoc_insertion_point(message_clear_start:RoboCupSSL.RobotSpecErForce)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&shoot_radius_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&dribbler_width_) -
        reinterpret_cast<char*>(&shoot_radius_)) + sizeof(dribbler_width_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RobotSpecErForce::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional float shoot_radius = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          _Internal::set_has_shoot_radius(&has_bits);
          shoot_radius_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float dribbler_width = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          _Internal::set_has_dribbler_width(&has_bits);
          dribbler_width_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
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

::PROTOBUF_NAMESPACE_ID::uint8* RobotSpecErForce::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RoboCupSSL.RobotSpecErForce)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional float shoot_radius = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_shoot_radius(), target);
  }

  // optional float dribbler_width = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_dribbler_width(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RoboCupSSL.RobotSpecErForce)
  return target;
}

size_t RobotSpecErForce::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RoboCupSSL.RobotSpecErForce)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional float shoot_radius = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 4;
    }

    // optional float dribbler_width = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 4;
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

void RobotSpecErForce::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RoboCupSSL.RobotSpecErForce)
  GOOGLE_DCHECK_NE(&from, this);
  const RobotSpecErForce* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RobotSpecErForce>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RoboCupSSL.RobotSpecErForce)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RoboCupSSL.RobotSpecErForce)
    MergeFrom(*source);
  }
}

void RobotSpecErForce::MergeFrom(const RobotSpecErForce& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RoboCupSSL.RobotSpecErForce)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      shoot_radius_ = from.shoot_radius_;
    }
    if (cached_has_bits & 0x00000002u) {
      dribbler_width_ = from.dribbler_width_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RobotSpecErForce::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RoboCupSSL.RobotSpecErForce)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RobotSpecErForce::CopyFrom(const RobotSpecErForce& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RoboCupSSL.RobotSpecErForce)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotSpecErForce::IsInitialized() const {
  return true;
}

void RobotSpecErForce::InternalSwap(RobotSpecErForce* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RobotSpecErForce, dribbler_width_)
      + sizeof(RobotSpecErForce::dribbler_width_)
      - PROTOBUF_FIELD_OFFSET(RobotSpecErForce, shoot_radius_)>(
          reinterpret_cast<char*>(&shoot_radius_),
          reinterpret_cast<char*>(&other->shoot_radius_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RobotSpecErForce::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace RoboCupSSL
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::RoboCupSSL::RobotSpecErForce* Arena::CreateMaybeMessage< ::RoboCupSSL::RobotSpecErForce >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RoboCupSSL::RobotSpecErForce >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
