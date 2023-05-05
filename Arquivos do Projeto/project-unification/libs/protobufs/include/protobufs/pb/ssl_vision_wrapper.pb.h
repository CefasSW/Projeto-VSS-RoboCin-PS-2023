// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_vision_wrapper.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ssl_5fvision_5fwrapper_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ssl_5fvision_5fwrapper_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ssl_vision_detection.pb.h"
#include "ssl_vision_geometry.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ssl_5fvision_5fwrapper_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ssl_5fvision_5fwrapper_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ssl_5fvision_5fwrapper_2eproto;
namespace RoboCupSSL {
class SSL_WrapperPacket;
class SSL_WrapperPacketDefaultTypeInternal;
extern SSL_WrapperPacketDefaultTypeInternal _SSL_WrapperPacket_default_instance_;
}  // namespace RoboCupSSL
PROTOBUF_NAMESPACE_OPEN
template<> ::RoboCupSSL::SSL_WrapperPacket* Arena::CreateMaybeMessage<::RoboCupSSL::SSL_WrapperPacket>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace RoboCupSSL {

// ===================================================================

class SSL_WrapperPacket PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RoboCupSSL.SSL_WrapperPacket) */ {
 public:
  inline SSL_WrapperPacket() : SSL_WrapperPacket(nullptr) {};
  virtual ~SSL_WrapperPacket();

  SSL_WrapperPacket(const SSL_WrapperPacket& from);
  SSL_WrapperPacket(SSL_WrapperPacket&& from) noexcept
    : SSL_WrapperPacket() {
    *this = ::std::move(from);
  }

  inline SSL_WrapperPacket& operator=(const SSL_WrapperPacket& from) {
    CopyFrom(from);
    return *this;
  }
  inline SSL_WrapperPacket& operator=(SSL_WrapperPacket&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SSL_WrapperPacket& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SSL_WrapperPacket* internal_default_instance() {
    return reinterpret_cast<const SSL_WrapperPacket*>(
               &_SSL_WrapperPacket_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SSL_WrapperPacket& a, SSL_WrapperPacket& b) {
    a.Swap(&b);
  }
  inline void Swap(SSL_WrapperPacket* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SSL_WrapperPacket* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SSL_WrapperPacket* New() const final {
    return CreateMaybeMessage<SSL_WrapperPacket>(nullptr);
  }

  SSL_WrapperPacket* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SSL_WrapperPacket>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SSL_WrapperPacket& from);
  void MergeFrom(const SSL_WrapperPacket& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SSL_WrapperPacket* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "RoboCupSSL.SSL_WrapperPacket";
  }
  protected:
  explicit SSL_WrapperPacket(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ssl_5fvision_5fwrapper_2eproto);
    return ::descriptor_table_ssl_5fvision_5fwrapper_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDetectionFieldNumber = 1,
    kGeometryFieldNumber = 2,
  };
  // optional .RoboCupSSL.SSL_DetectionFrame detection = 1;
  bool has_detection() const;
  private:
  bool _internal_has_detection() const;
  public:
  void clear_detection();
  const ::RoboCupSSL::SSL_DetectionFrame& detection() const;
  ::RoboCupSSL::SSL_DetectionFrame* release_detection();
  ::RoboCupSSL::SSL_DetectionFrame* mutable_detection();
  void set_allocated_detection(::RoboCupSSL::SSL_DetectionFrame* detection);
  private:
  const ::RoboCupSSL::SSL_DetectionFrame& _internal_detection() const;
  ::RoboCupSSL::SSL_DetectionFrame* _internal_mutable_detection();
  public:
  void unsafe_arena_set_allocated_detection(
      ::RoboCupSSL::SSL_DetectionFrame* detection);
  ::RoboCupSSL::SSL_DetectionFrame* unsafe_arena_release_detection();

  // optional .RoboCupSSL.SSL_GeometryData geometry = 2;
  bool has_geometry() const;
  private:
  bool _internal_has_geometry() const;
  public:
  void clear_geometry();
  const ::RoboCupSSL::SSL_GeometryData& geometry() const;
  ::RoboCupSSL::SSL_GeometryData* release_geometry();
  ::RoboCupSSL::SSL_GeometryData* mutable_geometry();
  void set_allocated_geometry(::RoboCupSSL::SSL_GeometryData* geometry);
  private:
  const ::RoboCupSSL::SSL_GeometryData& _internal_geometry() const;
  ::RoboCupSSL::SSL_GeometryData* _internal_mutable_geometry();
  public:
  void unsafe_arena_set_allocated_geometry(
      ::RoboCupSSL::SSL_GeometryData* geometry);
  ::RoboCupSSL::SSL_GeometryData* unsafe_arena_release_geometry();

  // @@protoc_insertion_point(class_scope:RoboCupSSL.SSL_WrapperPacket)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::RoboCupSSL::SSL_DetectionFrame* detection_;
  ::RoboCupSSL::SSL_GeometryData* geometry_;
  friend struct ::TableStruct_ssl_5fvision_5fwrapper_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SSL_WrapperPacket

// optional .RoboCupSSL.SSL_DetectionFrame detection = 1;
inline bool SSL_WrapperPacket::_internal_has_detection() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || detection_ != nullptr);
  return value;
}
inline bool SSL_WrapperPacket::has_detection() const {
  return _internal_has_detection();
}
inline const ::RoboCupSSL::SSL_DetectionFrame& SSL_WrapperPacket::_internal_detection() const {
  const ::RoboCupSSL::SSL_DetectionFrame* p = detection_;
  return p != nullptr ? *p : *reinterpret_cast<const ::RoboCupSSL::SSL_DetectionFrame*>(
      &::RoboCupSSL::_SSL_DetectionFrame_default_instance_);
}
inline const ::RoboCupSSL::SSL_DetectionFrame& SSL_WrapperPacket::detection() const {
  // @@protoc_insertion_point(field_get:RoboCupSSL.SSL_WrapperPacket.detection)
  return _internal_detection();
}
inline void SSL_WrapperPacket::unsafe_arena_set_allocated_detection(
    ::RoboCupSSL::SSL_DetectionFrame* detection) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(detection_);
  }
  detection_ = detection;
  if (detection) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:RoboCupSSL.SSL_WrapperPacket.detection)
}
inline ::RoboCupSSL::SSL_DetectionFrame* SSL_WrapperPacket::release_detection() {
  auto temp = unsafe_arena_release_detection();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::RoboCupSSL::SSL_DetectionFrame* SSL_WrapperPacket::unsafe_arena_release_detection() {
  // @@protoc_insertion_point(field_release:RoboCupSSL.SSL_WrapperPacket.detection)
  _has_bits_[0] &= ~0x00000001u;
  ::RoboCupSSL::SSL_DetectionFrame* temp = detection_;
  detection_ = nullptr;
  return temp;
}
inline ::RoboCupSSL::SSL_DetectionFrame* SSL_WrapperPacket::_internal_mutable_detection() {
  _has_bits_[0] |= 0x00000001u;
  if (detection_ == nullptr) {
    auto* p = CreateMaybeMessage<::RoboCupSSL::SSL_DetectionFrame>(GetArena());
    detection_ = p;
  }
  return detection_;
}
inline ::RoboCupSSL::SSL_DetectionFrame* SSL_WrapperPacket::mutable_detection() {
  // @@protoc_insertion_point(field_mutable:RoboCupSSL.SSL_WrapperPacket.detection)
  return _internal_mutable_detection();
}
inline void SSL_WrapperPacket::set_allocated_detection(::RoboCupSSL::SSL_DetectionFrame* detection) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(detection_);
  }
  if (detection) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(detection)->GetArena();
    if (message_arena != submessage_arena) {
      detection = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, detection, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  detection_ = detection;
  // @@protoc_insertion_point(field_set_allocated:RoboCupSSL.SSL_WrapperPacket.detection)
}

// optional .RoboCupSSL.SSL_GeometryData geometry = 2;
inline bool SSL_WrapperPacket::_internal_has_geometry() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || geometry_ != nullptr);
  return value;
}
inline bool SSL_WrapperPacket::has_geometry() const {
  return _internal_has_geometry();
}
inline const ::RoboCupSSL::SSL_GeometryData& SSL_WrapperPacket::_internal_geometry() const {
  const ::RoboCupSSL::SSL_GeometryData* p = geometry_;
  return p != nullptr ? *p : *reinterpret_cast<const ::RoboCupSSL::SSL_GeometryData*>(
      &::RoboCupSSL::_SSL_GeometryData_default_instance_);
}
inline const ::RoboCupSSL::SSL_GeometryData& SSL_WrapperPacket::geometry() const {
  // @@protoc_insertion_point(field_get:RoboCupSSL.SSL_WrapperPacket.geometry)
  return _internal_geometry();
}
inline void SSL_WrapperPacket::unsafe_arena_set_allocated_geometry(
    ::RoboCupSSL::SSL_GeometryData* geometry) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(geometry_);
  }
  geometry_ = geometry;
  if (geometry) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:RoboCupSSL.SSL_WrapperPacket.geometry)
}
inline ::RoboCupSSL::SSL_GeometryData* SSL_WrapperPacket::release_geometry() {
  auto temp = unsafe_arena_release_geometry();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::RoboCupSSL::SSL_GeometryData* SSL_WrapperPacket::unsafe_arena_release_geometry() {
  // @@protoc_insertion_point(field_release:RoboCupSSL.SSL_WrapperPacket.geometry)
  _has_bits_[0] &= ~0x00000002u;
  ::RoboCupSSL::SSL_GeometryData* temp = geometry_;
  geometry_ = nullptr;
  return temp;
}
inline ::RoboCupSSL::SSL_GeometryData* SSL_WrapperPacket::_internal_mutable_geometry() {
  _has_bits_[0] |= 0x00000002u;
  if (geometry_ == nullptr) {
    auto* p = CreateMaybeMessage<::RoboCupSSL::SSL_GeometryData>(GetArena());
    geometry_ = p;
  }
  return geometry_;
}
inline ::RoboCupSSL::SSL_GeometryData* SSL_WrapperPacket::mutable_geometry() {
  // @@protoc_insertion_point(field_mutable:RoboCupSSL.SSL_WrapperPacket.geometry)
  return _internal_mutable_geometry();
}
inline void SSL_WrapperPacket::set_allocated_geometry(::RoboCupSSL::SSL_GeometryData* geometry) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(geometry_);
  }
  if (geometry) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(geometry)->GetArena();
    if (message_arena != submessage_arena) {
      geometry = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, geometry, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  geometry_ = geometry;
  // @@protoc_insertion_point(field_set_allocated:RoboCupSSL.SSL_WrapperPacket.geometry)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace RoboCupSSL

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ssl_5fvision_5fwrapper_2eproto
