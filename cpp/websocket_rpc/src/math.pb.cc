// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: math.proto

#include "math.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR SumArg::SumArg(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.a_)*/0
  , /*decltype(_impl_.b_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SumArgDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SumArgDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SumArgDefaultTypeInternal() {}
  union {
    SumArg _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SumArgDefaultTypeInternal _SumArg_default_instance_;
PROTOBUF_CONSTEXPR SumResult::SumResult(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.sum_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SumResultDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SumResultDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SumResultDefaultTypeInternal() {}
  union {
    SumResult _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SumResultDefaultTypeInternal _SumResult_default_instance_;
static ::_pb::Metadata file_level_metadata_math_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_math_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_math_2eproto = nullptr;

const uint32_t TableStruct_math_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::SumArg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::SumArg, _impl_.a_),
  PROTOBUF_FIELD_OFFSET(::SumArg, _impl_.b_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::SumResult, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::SumResult, _impl_.sum_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::SumArg)},
  { 8, -1, -1, sizeof(::SumResult)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_SumArg_default_instance_._instance,
  &::_SumResult_default_instance_._instance,
};

const char descriptor_table_protodef_math_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nmath.proto\"\036\n\006SumArg\022\t\n\001a\030\001 \001(\005\022\t\n\001b\030\002"
  " \001(\005\"\030\n\tSumResult\022\013\n\003sum\030\001 \001(\0052\"\n\004Math\022\032"
  "\n\003Sum\022\007.SumArg\032\n.SumResultB\003\220\001\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_math_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_math_2eproto = {
    false, false, 119, descriptor_table_protodef_math_2eproto,
    "math.proto",
    &descriptor_table_math_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_math_2eproto::offsets,
    file_level_metadata_math_2eproto, file_level_enum_descriptors_math_2eproto,
    file_level_service_descriptors_math_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_math_2eproto_getter() {
  return &descriptor_table_math_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_math_2eproto(&descriptor_table_math_2eproto);

// ===================================================================

class SumArg::_Internal {
 public:
};

SumArg::SumArg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:SumArg)
}
SumArg::SumArg(const SumArg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SumArg* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.a_){}
    , decltype(_impl_.b_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.a_, &from._impl_.a_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.b_) -
    reinterpret_cast<char*>(&_impl_.a_)) + sizeof(_impl_.b_));
  // @@protoc_insertion_point(copy_constructor:SumArg)
}

inline void SumArg::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.a_){0}
    , decltype(_impl_.b_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SumArg::~SumArg() {
  // @@protoc_insertion_point(destructor:SumArg)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SumArg::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SumArg::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SumArg::Clear() {
// @@protoc_insertion_point(message_clear_start:SumArg)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.a_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.b_) -
      reinterpret_cast<char*>(&_impl_.a_)) + sizeof(_impl_.b_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SumArg::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 a = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.a_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.b_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SumArg::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SumArg)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 a = 1;
  if (this->_internal_a() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_a(), target);
  }

  // int32 b = 2;
  if (this->_internal_b() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_b(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SumArg)
  return target;
}

size_t SumArg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SumArg)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 a = 1;
  if (this->_internal_a() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_a());
  }

  // int32 b = 2;
  if (this->_internal_b() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_b());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SumArg::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SumArg::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SumArg::GetClassData() const { return &_class_data_; }


void SumArg::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SumArg*>(&to_msg);
  auto& from = static_cast<const SumArg&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:SumArg)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_a() != 0) {
    _this->_internal_set_a(from._internal_a());
  }
  if (from._internal_b() != 0) {
    _this->_internal_set_b(from._internal_b());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SumArg::CopyFrom(const SumArg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SumArg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SumArg::IsInitialized() const {
  return true;
}

void SumArg::InternalSwap(SumArg* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SumArg, _impl_.b_)
      + sizeof(SumArg::_impl_.b_)
      - PROTOBUF_FIELD_OFFSET(SumArg, _impl_.a_)>(
          reinterpret_cast<char*>(&_impl_.a_),
          reinterpret_cast<char*>(&other->_impl_.a_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SumArg::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_math_2eproto_getter, &descriptor_table_math_2eproto_once,
      file_level_metadata_math_2eproto[0]);
}

// ===================================================================

class SumResult::_Internal {
 public:
};

SumResult::SumResult(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:SumResult)
}
SumResult::SumResult(const SumResult& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SumResult* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.sum_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.sum_ = from._impl_.sum_;
  // @@protoc_insertion_point(copy_constructor:SumResult)
}

inline void SumResult::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.sum_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SumResult::~SumResult() {
  // @@protoc_insertion_point(destructor:SumResult)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SumResult::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SumResult::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SumResult::Clear() {
// @@protoc_insertion_point(message_clear_start:SumResult)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.sum_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SumResult::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 sum = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.sum_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SumResult::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SumResult)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 sum = 1;
  if (this->_internal_sum() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_sum(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SumResult)
  return target;
}

size_t SumResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SumResult)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 sum = 1;
  if (this->_internal_sum() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_sum());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SumResult::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SumResult::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SumResult::GetClassData() const { return &_class_data_; }


void SumResult::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SumResult*>(&to_msg);
  auto& from = static_cast<const SumResult&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:SumResult)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_sum() != 0) {
    _this->_internal_set_sum(from._internal_sum());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SumResult::CopyFrom(const SumResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SumResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SumResult::IsInitialized() const {
  return true;
}

void SumResult::InternalSwap(SumResult* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.sum_, other->_impl_.sum_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SumResult::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_math_2eproto_getter, &descriptor_table_math_2eproto_once,
      file_level_metadata_math_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::SumArg*
Arena::CreateMaybeMessage< ::SumArg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SumArg >(arena);
}
template<> PROTOBUF_NOINLINE ::SumResult*
Arena::CreateMaybeMessage< ::SumResult >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SumResult >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
