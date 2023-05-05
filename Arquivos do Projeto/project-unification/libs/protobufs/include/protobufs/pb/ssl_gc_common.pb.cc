// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_gc_common.proto

#include "ssl_gc_common.pb.h"

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
class RobotIdDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RobotId> _instance;
} _RobotId_default_instance_;
}  // namespace RoboCupSSL
static void InitDefaultsscc_info_RobotId_ssl_5fgc_5fcommon_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::RoboCupSSL::_RobotId_default_instance_;
    new (ptr) ::RoboCupSSL::RobotId();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RoboCupSSL::RobotId::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RobotId_ssl_5fgc_5fcommon_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_RobotId_ssl_5fgc_5fcommon_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ssl_5fgc_5fcommon_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ssl_5fgc_5fcommon_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ssl_5fgc_5fcommon_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ssl_5fgc_5fcommon_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::RobotId, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::RobotId, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::RobotId, id_),
  PROTOBUF_FIELD_OFFSET(::RoboCupSSL::RobotId, team_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::RoboCupSSL::RobotId)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::RoboCupSSL::_RobotId_default_instance_),
};

const char descriptor_table_protodef_ssl_5fgc_5fcommon_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023ssl_gc_common.proto\022\nRoboCupSSL\"5\n\007Rob"
  "otId\022\n\n\002id\030\001 \001(\r\022\036\n\004team\030\002 \001(\0162\020.RoboCup"
  "SSL.Team*)\n\004Team\022\013\n\007UNKNOWN\020\000\022\n\n\006YELLOW\020"
  "\001\022\010\n\004BLUE\020\002*1\n\010Division\022\017\n\013DIV_UNKNOWN\020\000"
  "\022\t\n\005DIV_A\020\001\022\t\n\005DIV_B\020\002B6Z4github.com/Rob"
  "oCup-SSL/ssl-vision-client/pkg/tracked"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ssl_5fgc_5fcommon_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ssl_5fgc_5fcommon_2eproto_sccs[1] = {
  &scc_info_RobotId_ssl_5fgc_5fcommon_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ssl_5fgc_5fcommon_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ssl_5fgc_5fcommon_2eproto = {
  false, false, descriptor_table_protodef_ssl_5fgc_5fcommon_2eproto, "ssl_gc_common.proto", 238,
  &descriptor_table_ssl_5fgc_5fcommon_2eproto_once, descriptor_table_ssl_5fgc_5fcommon_2eproto_sccs, descriptor_table_ssl_5fgc_5fcommon_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_ssl_5fgc_5fcommon_2eproto::offsets,
  file_level_metadata_ssl_5fgc_5fcommon_2eproto, 1, file_level_enum_descriptors_ssl_5fgc_5fcommon_2eproto, file_level_service_descriptors_ssl_5fgc_5fcommon_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ssl_5fgc_5fcommon_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ssl_5fgc_5fcommon_2eproto)), true);
namespace RoboCupSSL {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Team_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ssl_5fgc_5fcommon_2eproto);
  return file_level_enum_descriptors_ssl_5fgc_5fcommon_2eproto[0];
}
bool Team_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Division_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ssl_5fgc_5fcommon_2eproto);
  return file_level_enum_descriptors_ssl_5fgc_5fcommon_2eproto[1];
}
bool Division_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void RobotId::InitAsDefaultInstance() {
}
class RobotId::_Internal {
 public:
  using HasBits = decltype(std::declval<RobotId>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_team(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

RobotId::RobotId(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:RoboCupSSL.RobotId)
}
RobotId::RobotId(const RobotId& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&team_) -
    reinterpret_cast<char*>(&id_)) + sizeof(team_));
  // @@protoc_insertion_point(copy_constructor:RoboCupSSL.RobotId)
}

void RobotId::SharedCtor() {
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&team_) -
      reinterpret_cast<char*>(&id_)) + sizeof(team_));
}

RobotId::~RobotId() {
  // @@protoc_insertion_point(destructor:RoboCupSSL.RobotId)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RobotId::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void RobotId::ArenaDtor(void* object) {
  RobotId* _this = reinterpret_cast< RobotId* >(object);
  (void)_this;
}
void RobotId::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RobotId::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RobotId& RobotId::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RobotId_ssl_5fgc_5fcommon_2eproto.base);
  return *internal_default_instance();
}


void RobotId::Clear() {
// @@protoc_insertion_point(message_clear_start:RoboCupSSL.RobotId)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&team_) -
        reinterpret_cast<char*>(&id_)) + sizeof(team_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RobotId::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .RoboCupSSL.Team team = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::RoboCupSSL::Team_IsValid(val))) {
            _internal_set_team(static_cast<::RoboCupSSL::Team>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
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

::PROTOBUF_NAMESPACE_ID::uint8* RobotId::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RoboCupSSL.RobotId)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // optional .RoboCupSSL.Team team = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_team(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RoboCupSSL.RobotId)
  return target;
}

size_t RobotId::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RoboCupSSL.RobotId)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional uint32 id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_id());
    }

    // optional .RoboCupSSL.Team team = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_team());
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

void RobotId::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RoboCupSSL.RobotId)
  GOOGLE_DCHECK_NE(&from, this);
  const RobotId* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RobotId>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RoboCupSSL.RobotId)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RoboCupSSL.RobotId)
    MergeFrom(*source);
  }
}

void RobotId::MergeFrom(const RobotId& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RoboCupSSL.RobotId)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000002u) {
      team_ = from.team_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RobotId::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RoboCupSSL.RobotId)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RobotId::CopyFrom(const RobotId& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RoboCupSSL.RobotId)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotId::IsInitialized() const {
  return true;
}

void RobotId::InternalSwap(RobotId* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RobotId, team_)
      + sizeof(RobotId::team_)
      - PROTOBUF_FIELD_OFFSET(RobotId, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RobotId::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace RoboCupSSL
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::RoboCupSSL::RobotId* Arena::CreateMaybeMessage< ::RoboCupSSL::RobotId >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RoboCupSSL::RobotId >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
