// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: userinput.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_userinput_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_userinput_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_userinput_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_userinput_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace ClientBuffers {
class Instruction;
class InstructionDefaultTypeInternal;
extern InstructionDefaultTypeInternal _Instruction_default_instance_;
class Keystroke;
class KeystrokeDefaultTypeInternal;
extern KeystrokeDefaultTypeInternal _Keystroke_default_instance_;
class ResizeMessage;
class ResizeMessageDefaultTypeInternal;
extern ResizeMessageDefaultTypeInternal _ResizeMessage_default_instance_;
class UserMessage;
class UserMessageDefaultTypeInternal;
extern UserMessageDefaultTypeInternal _UserMessage_default_instance_;
}  // namespace ClientBuffers
PROTOBUF_NAMESPACE_OPEN
template<> ::ClientBuffers::Instruction* Arena::CreateMaybeMessage<::ClientBuffers::Instruction>(Arena*);
template<> ::ClientBuffers::Keystroke* Arena::CreateMaybeMessage<::ClientBuffers::Keystroke>(Arena*);
template<> ::ClientBuffers::ResizeMessage* Arena::CreateMaybeMessage<::ClientBuffers::ResizeMessage>(Arena*);
template<> ::ClientBuffers::UserMessage* Arena::CreateMaybeMessage<::ClientBuffers::UserMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ClientBuffers {

// ===================================================================

class UserMessage final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:ClientBuffers.UserMessage) */ {
 public:
  UserMessage();
  virtual ~UserMessage();

  UserMessage(const UserMessage& from);
  UserMessage(UserMessage&& from) noexcept
    : UserMessage() {
    *this = ::std::move(from);
  }

  inline UserMessage& operator=(const UserMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserMessage& operator=(UserMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const UserMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UserMessage* internal_default_instance() {
    return reinterpret_cast<const UserMessage*>(
               &_UserMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(UserMessage* other);
  friend void swap(UserMessage& a, UserMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UserMessage* New() const final {
    return CreateMaybeMessage<UserMessage>(nullptr);
  }

  UserMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UserMessage>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const UserMessage& from);
  void MergeFrom(const UserMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(UserMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ClientBuffers.UserMessage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ClientBuffers.Instruction instruction = 1;
  int instruction_size() const;
  void clear_instruction();
  static const int kInstructionFieldNumber = 1;
  ::ClientBuffers::Instruction* mutable_instruction(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ClientBuffers::Instruction >*
      mutable_instruction();
  const ::ClientBuffers::Instruction& instruction(int index) const;
  ::ClientBuffers::Instruction* add_instruction();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ClientBuffers::Instruction >&
      instruction() const;

  // @@protoc_insertion_point(class_scope:ClientBuffers.UserMessage)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ClientBuffers::Instruction > instruction_;
  friend struct ::TableStruct_userinput_2eproto;
};
// -------------------------------------------------------------------

class Instruction final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:ClientBuffers.Instruction) */ {
 public:
  Instruction();
  virtual ~Instruction();

  Instruction(const Instruction& from);
  Instruction(Instruction&& from) noexcept
    : Instruction() {
    *this = ::std::move(from);
  }

  inline Instruction& operator=(const Instruction& from) {
    CopyFrom(from);
    return *this;
  }
  inline Instruction& operator=(Instruction&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Instruction& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Instruction* internal_default_instance() {
    return reinterpret_cast<const Instruction*>(
               &_Instruction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Instruction* other);
  friend void swap(Instruction& a, Instruction& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Instruction* New() const final {
    return CreateMaybeMessage<Instruction>(nullptr);
  }

  Instruction* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Instruction>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const Instruction& from);
  void MergeFrom(const Instruction& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Instruction* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ClientBuffers.Instruction";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(Instruction)
  // @@protoc_insertion_point(class_scope:ClientBuffers.Instruction)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::ExtensionSet _extensions_;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_userinput_2eproto;
};
// -------------------------------------------------------------------

class Keystroke final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:ClientBuffers.Keystroke) */ {
 public:
  Keystroke();
  virtual ~Keystroke();

  Keystroke(const Keystroke& from);
  Keystroke(Keystroke&& from) noexcept
    : Keystroke() {
    *this = ::std::move(from);
  }

  inline Keystroke& operator=(const Keystroke& from) {
    CopyFrom(from);
    return *this;
  }
  inline Keystroke& operator=(Keystroke&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Keystroke& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Keystroke* internal_default_instance() {
    return reinterpret_cast<const Keystroke*>(
               &_Keystroke_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Keystroke* other);
  friend void swap(Keystroke& a, Keystroke& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Keystroke* New() const final {
    return CreateMaybeMessage<Keystroke>(nullptr);
  }

  Keystroke* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Keystroke>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const Keystroke& from);
  void MergeFrom(const Keystroke& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Keystroke* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ClientBuffers.Keystroke";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes keys = 4;
  bool has_keys() const;
  void clear_keys();
  static const int kKeysFieldNumber = 4;
  const std::string& keys() const;
  void set_keys(const std::string& value);
  void set_keys(std::string&& value);
  void set_keys(const char* value);
  void set_keys(const void* value, size_t size);
  std::string* mutable_keys();
  std::string* release_keys();
  void set_allocated_keys(std::string* keys);

  // @@protoc_insertion_point(class_scope:ClientBuffers.Keystroke)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr keys_;
  friend struct ::TableStruct_userinput_2eproto;
};
// -------------------------------------------------------------------

class ResizeMessage final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:ClientBuffers.ResizeMessage) */ {
 public:
  ResizeMessage();
  virtual ~ResizeMessage();

  ResizeMessage(const ResizeMessage& from);
  ResizeMessage(ResizeMessage&& from) noexcept
    : ResizeMessage() {
    *this = ::std::move(from);
  }

  inline ResizeMessage& operator=(const ResizeMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline ResizeMessage& operator=(ResizeMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ResizeMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResizeMessage* internal_default_instance() {
    return reinterpret_cast<const ResizeMessage*>(
               &_ResizeMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(ResizeMessage* other);
  friend void swap(ResizeMessage& a, ResizeMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ResizeMessage* New() const final {
    return CreateMaybeMessage<ResizeMessage>(nullptr);
  }

  ResizeMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ResizeMessage>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const ResizeMessage& from);
  void MergeFrom(const ResizeMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ResizeMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ClientBuffers.ResizeMessage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 width = 5;
  bool has_width() const;
  void clear_width();
  static const int kWidthFieldNumber = 5;
  ::PROTOBUF_NAMESPACE_ID::int32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 height = 6;
  bool has_height() const;
  void clear_height();
  static const int kHeightFieldNumber = 6;
  ::PROTOBUF_NAMESPACE_ID::int32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:ClientBuffers.ResizeMessage)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 width_;
  ::PROTOBUF_NAMESPACE_ID::int32 height_;
  friend struct ::TableStruct_userinput_2eproto;
};
// ===================================================================

static const int kKeystrokeFieldNumber = 2;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::ClientBuffers::Instruction,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::ClientBuffers::Keystroke >, 11, false >
  keystroke;
static const int kResizeFieldNumber = 3;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::ClientBuffers::Instruction,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::ClientBuffers::ResizeMessage >, 11, false >
  resize;

// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UserMessage

// repeated .ClientBuffers.Instruction instruction = 1;
inline int UserMessage::instruction_size() const {
  return instruction_.size();
}
inline void UserMessage::clear_instruction() {
  instruction_.Clear();
}
inline ::ClientBuffers::Instruction* UserMessage::mutable_instruction(int index) {
  // @@protoc_insertion_point(field_mutable:ClientBuffers.UserMessage.instruction)
  return instruction_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ClientBuffers::Instruction >*
UserMessage::mutable_instruction() {
  // @@protoc_insertion_point(field_mutable_list:ClientBuffers.UserMessage.instruction)
  return &instruction_;
}
inline const ::ClientBuffers::Instruction& UserMessage::instruction(int index) const {
  // @@protoc_insertion_point(field_get:ClientBuffers.UserMessage.instruction)
  return instruction_.Get(index);
}
inline ::ClientBuffers::Instruction* UserMessage::add_instruction() {
  // @@protoc_insertion_point(field_add:ClientBuffers.UserMessage.instruction)
  return instruction_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ClientBuffers::Instruction >&
UserMessage::instruction() const {
  // @@protoc_insertion_point(field_list:ClientBuffers.UserMessage.instruction)
  return instruction_;
}

// -------------------------------------------------------------------

// Instruction

// -------------------------------------------------------------------

// Keystroke

// optional bytes keys = 4;
inline bool Keystroke::has_keys() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Keystroke::clear_keys() {
  keys_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Keystroke::keys() const {
  // @@protoc_insertion_point(field_get:ClientBuffers.Keystroke.keys)
  return keys_.GetNoArena();
}
inline void Keystroke::set_keys(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  keys_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClientBuffers.Keystroke.keys)
}
inline void Keystroke::set_keys(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  keys_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientBuffers.Keystroke.keys)
}
inline void Keystroke::set_keys(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  keys_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientBuffers.Keystroke.keys)
}
inline void Keystroke::set_keys(const void* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  keys_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientBuffers.Keystroke.keys)
}
inline std::string* Keystroke::mutable_keys() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ClientBuffers.Keystroke.keys)
  return keys_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Keystroke::release_keys() {
  // @@protoc_insertion_point(field_release:ClientBuffers.Keystroke.keys)
  if (!has_keys()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return keys_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Keystroke::set_allocated_keys(std::string* keys) {
  if (keys != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  keys_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), keys);
  // @@protoc_insertion_point(field_set_allocated:ClientBuffers.Keystroke.keys)
}

// -------------------------------------------------------------------

// ResizeMessage

// optional int32 width = 5;
inline bool ResizeMessage::has_width() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ResizeMessage::clear_width() {
  width_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ResizeMessage::width() const {
  // @@protoc_insertion_point(field_get:ClientBuffers.ResizeMessage.width)
  return width_;
}
inline void ResizeMessage::set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  width_ = value;
  // @@protoc_insertion_point(field_set:ClientBuffers.ResizeMessage.width)
}

// optional int32 height = 6;
inline bool ResizeMessage::has_height() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ResizeMessage::clear_height() {
  height_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ResizeMessage::height() const {
  // @@protoc_insertion_point(field_get:ClientBuffers.ResizeMessage.height)
  return height_;
}
inline void ResizeMessage::set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  height_ = value;
  // @@protoc_insertion_point(field_set:ClientBuffers.ResizeMessage.height)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ClientBuffers

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_userinput_2eproto