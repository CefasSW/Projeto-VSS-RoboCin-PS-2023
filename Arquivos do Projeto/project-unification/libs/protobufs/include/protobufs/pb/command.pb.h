// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: command.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_command_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_command_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_command_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_command_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_command_2eproto;
namespace fira_message {
namespace sim_to_ref {
class Command;
class CommandDefaultTypeInternal;
extern CommandDefaultTypeInternal _Command_default_instance_;
class Commands;
class CommandsDefaultTypeInternal;
extern CommandsDefaultTypeInternal _Commands_default_instance_;
}  // namespace sim_to_ref
}  // namespace fira_message
PROTOBUF_NAMESPACE_OPEN
template<> ::fira_message::sim_to_ref::Command* Arena::CreateMaybeMessage<::fira_message::sim_to_ref::Command>(Arena*);
template<> ::fira_message::sim_to_ref::Commands* Arena::CreateMaybeMessage<::fira_message::sim_to_ref::Commands>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace fira_message {
namespace sim_to_ref {

// ===================================================================

class Command PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fira_message.sim_to_ref.Command) */ {
 public:
  inline Command() : Command(nullptr) {};
  virtual ~Command();

  Command(const Command& from);
  Command(Command&& from) noexcept
    : Command() {
    *this = ::std::move(from);
  }

  inline Command& operator=(const Command& from) {
    CopyFrom(from);
    return *this;
  }
  inline Command& operator=(Command&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Command& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Command* internal_default_instance() {
    return reinterpret_cast<const Command*>(
               &_Command_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Command& a, Command& b) {
    a.Swap(&b);
  }
  inline void Swap(Command* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Command* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Command* New() const final {
    return CreateMaybeMessage<Command>(nullptr);
  }

  Command* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Command>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Command& from);
  void MergeFrom(const Command& from);
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
  void InternalSwap(Command* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fira_message.sim_to_ref.Command";
  }
  protected:
  explicit Command(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_command_2eproto);
    return ::descriptor_table_command_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kYellowteamFieldNumber = 2,
    kWheelLeftFieldNumber = 6,
    kWheelRightFieldNumber = 7,
  };
  // uint32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // bool yellowteam = 2;
  void clear_yellowteam();
  bool yellowteam() const;
  void set_yellowteam(bool value);
  private:
  bool _internal_yellowteam() const;
  void _internal_set_yellowteam(bool value);
  public:

  // double wheel_left = 6;
  void clear_wheel_left();
  double wheel_left() const;
  void set_wheel_left(double value);
  private:
  double _internal_wheel_left() const;
  void _internal_set_wheel_left(double value);
  public:

  // double wheel_right = 7;
  void clear_wheel_right();
  double wheel_right() const;
  void set_wheel_right(double value);
  private:
  double _internal_wheel_right() const;
  void _internal_set_wheel_right(double value);
  public:

  // @@protoc_insertion_point(class_scope:fira_message.sim_to_ref.Command)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  bool yellowteam_;
  double wheel_left_;
  double wheel_right_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_command_2eproto;
};
// -------------------------------------------------------------------

class Commands PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fira_message.sim_to_ref.Commands) */ {
 public:
  inline Commands() : Commands(nullptr) {};
  virtual ~Commands();

  Commands(const Commands& from);
  Commands(Commands&& from) noexcept
    : Commands() {
    *this = ::std::move(from);
  }

  inline Commands& operator=(const Commands& from) {
    CopyFrom(from);
    return *this;
  }
  inline Commands& operator=(Commands&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Commands& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Commands* internal_default_instance() {
    return reinterpret_cast<const Commands*>(
               &_Commands_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Commands& a, Commands& b) {
    a.Swap(&b);
  }
  inline void Swap(Commands* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Commands* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Commands* New() const final {
    return CreateMaybeMessage<Commands>(nullptr);
  }

  Commands* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Commands>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Commands& from);
  void MergeFrom(const Commands& from);
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
  void InternalSwap(Commands* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fira_message.sim_to_ref.Commands";
  }
  protected:
  explicit Commands(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_command_2eproto);
    return ::descriptor_table_command_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRobotCommandsFieldNumber = 1,
  };
  // repeated .fira_message.sim_to_ref.Command robot_commands = 1;
  int robot_commands_size() const;
  private:
  int _internal_robot_commands_size() const;
  public:
  void clear_robot_commands();
  ::fira_message::sim_to_ref::Command* mutable_robot_commands(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::fira_message::sim_to_ref::Command >*
      mutable_robot_commands();
  private:
  const ::fira_message::sim_to_ref::Command& _internal_robot_commands(int index) const;
  ::fira_message::sim_to_ref::Command* _internal_add_robot_commands();
  public:
  const ::fira_message::sim_to_ref::Command& robot_commands(int index) const;
  ::fira_message::sim_to_ref::Command* add_robot_commands();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::fira_message::sim_to_ref::Command >&
      robot_commands() const;

  // @@protoc_insertion_point(class_scope:fira_message.sim_to_ref.Commands)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::fira_message::sim_to_ref::Command > robot_commands_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_command_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Command

// uint32 id = 1;
inline void Command::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Command::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Command::id() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Command.id)
  return _internal_id();
}
inline void Command::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void Command::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:fira_message.sim_to_ref.Command.id)
}

// bool yellowteam = 2;
inline void Command::clear_yellowteam() {
  yellowteam_ = false;
}
inline bool Command::_internal_yellowteam() const {
  return yellowteam_;
}
inline bool Command::yellowteam() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Command.yellowteam)
  return _internal_yellowteam();
}
inline void Command::_internal_set_yellowteam(bool value) {
  
  yellowteam_ = value;
}
inline void Command::set_yellowteam(bool value) {
  _internal_set_yellowteam(value);
  // @@protoc_insertion_point(field_set:fira_message.sim_to_ref.Command.yellowteam)
}

// double wheel_left = 6;
inline void Command::clear_wheel_left() {
  wheel_left_ = 0;
}
inline double Command::_internal_wheel_left() const {
  return wheel_left_;
}
inline double Command::wheel_left() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Command.wheel_left)
  return _internal_wheel_left();
}
inline void Command::_internal_set_wheel_left(double value) {
  
  wheel_left_ = value;
}
inline void Command::set_wheel_left(double value) {
  _internal_set_wheel_left(value);
  // @@protoc_insertion_point(field_set:fira_message.sim_to_ref.Command.wheel_left)
}

// double wheel_right = 7;
inline void Command::clear_wheel_right() {
  wheel_right_ = 0;
}
inline double Command::_internal_wheel_right() const {
  return wheel_right_;
}
inline double Command::wheel_right() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Command.wheel_right)
  return _internal_wheel_right();
}
inline void Command::_internal_set_wheel_right(double value) {
  
  wheel_right_ = value;
}
inline void Command::set_wheel_right(double value) {
  _internal_set_wheel_right(value);
  // @@protoc_insertion_point(field_set:fira_message.sim_to_ref.Command.wheel_right)
}

// -------------------------------------------------------------------

// Commands

// repeated .fira_message.sim_to_ref.Command robot_commands = 1;
inline int Commands::_internal_robot_commands_size() const {
  return robot_commands_.size();
}
inline int Commands::robot_commands_size() const {
  return _internal_robot_commands_size();
}
inline void Commands::clear_robot_commands() {
  robot_commands_.Clear();
}
inline ::fira_message::sim_to_ref::Command* Commands::mutable_robot_commands(int index) {
  // @@protoc_insertion_point(field_mutable:fira_message.sim_to_ref.Commands.robot_commands)
  return robot_commands_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::fira_message::sim_to_ref::Command >*
Commands::mutable_robot_commands() {
  // @@protoc_insertion_point(field_mutable_list:fira_message.sim_to_ref.Commands.robot_commands)
  return &robot_commands_;
}
inline const ::fira_message::sim_to_ref::Command& Commands::_internal_robot_commands(int index) const {
  return robot_commands_.Get(index);
}
inline const ::fira_message::sim_to_ref::Command& Commands::robot_commands(int index) const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Commands.robot_commands)
  return _internal_robot_commands(index);
}
inline ::fira_message::sim_to_ref::Command* Commands::_internal_add_robot_commands() {
  return robot_commands_.Add();
}
inline ::fira_message::sim_to_ref::Command* Commands::add_robot_commands() {
  // @@protoc_insertion_point(field_add:fira_message.sim_to_ref.Commands.robot_commands)
  return _internal_add_robot_commands();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::fira_message::sim_to_ref::Command >&
Commands::robot_commands() const {
  // @@protoc_insertion_point(field_list:fira_message.sim_to_ref.Commands.robot_commands)
  return robot_commands_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sim_to_ref
}  // namespace fira_message

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_command_2eproto
