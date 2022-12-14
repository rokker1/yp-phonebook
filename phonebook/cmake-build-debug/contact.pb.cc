// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contact.proto

#include "contact.pb.h"

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

namespace phone_book_serialize {
PROTOBUF_CONSTEXPR Date::Date(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.year_)*/0u
  , /*decltype(_impl_.month_)*/0u
  , /*decltype(_impl_.day_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct DateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~DateDefaultTypeInternal() {}
  union {
    Date _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DateDefaultTypeInternal _Date_default_instance_;
PROTOBUF_CONSTEXPR Contact::Contact(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.phone_number_)*/{}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.birthday_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ContactDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ContactDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ContactDefaultTypeInternal() {}
  union {
    Contact _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ContactDefaultTypeInternal _Contact_default_instance_;
PROTOBUF_CONSTEXPR ContactList::ContactList(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.contact_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ContactListDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ContactListDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ContactListDefaultTypeInternal() {}
  union {
    ContactList _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ContactListDefaultTypeInternal _ContactList_default_instance_;
}  // namespace phone_book_serialize
static ::_pb::Metadata file_level_metadata_contact_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_contact_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_contact_2eproto = nullptr;

const uint32_t TableStruct_contact_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::phone_book_serialize::Date, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::phone_book_serialize::Date, _impl_.year_),
  PROTOBUF_FIELD_OFFSET(::phone_book_serialize::Date, _impl_.month_),
  PROTOBUF_FIELD_OFFSET(::phone_book_serialize::Date, _impl_.day_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::phone_book_serialize::Contact, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::phone_book_serialize::Contact, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::phone_book_serialize::Contact, _impl_.birthday_),
  PROTOBUF_FIELD_OFFSET(::phone_book_serialize::Contact, _impl_.phone_number_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::phone_book_serialize::ContactList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::phone_book_serialize::ContactList, _impl_.contact_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::phone_book_serialize::Date)},
  { 9, -1, -1, sizeof(::phone_book_serialize::Contact)},
  { 18, -1, -1, sizeof(::phone_book_serialize::ContactList)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::phone_book_serialize::_Date_default_instance_._instance,
  &::phone_book_serialize::_Contact_default_instance_._instance,
  &::phone_book_serialize::_ContactList_default_instance_._instance,
};

const char descriptor_table_protodef_contact_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rcontact.proto\022\024phone_book_serialize\"0\n"
  "\004Date\022\014\n\004year\030\001 \001(\r\022\r\n\005month\030\002 \001(\r\022\013\n\003da"
  "y\030\003 \001(\r\"[\n\007Contact\022\014\n\004name\030\001 \001(\t\022,\n\010birt"
  "hday\030\002 \001(\0132\032.phone_book_serialize.Date\022\024"
  "\n\014phone_number\030\003 \003(\t\"=\n\013ContactList\022.\n\007c"
  "ontact\030\001 \003(\0132\035.phone_book_serialize.Cont"
  "actb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_contact_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_contact_2eproto = {
    false, false, 251, descriptor_table_protodef_contact_2eproto,
    "contact.proto",
    &descriptor_table_contact_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_contact_2eproto::offsets,
    file_level_metadata_contact_2eproto, file_level_enum_descriptors_contact_2eproto,
    file_level_service_descriptors_contact_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_contact_2eproto_getter() {
  return &descriptor_table_contact_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_contact_2eproto(&descriptor_table_contact_2eproto);
namespace phone_book_serialize {

// ===================================================================

class Date::_Internal {
 public:
};

Date::Date(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:phone_book_serialize.Date)
}
Date::Date(const Date& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Date* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.year_){}
    , decltype(_impl_.month_){}
    , decltype(_impl_.day_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.year_, &from._impl_.year_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.day_) -
    reinterpret_cast<char*>(&_impl_.year_)) + sizeof(_impl_.day_));
  // @@protoc_insertion_point(copy_constructor:phone_book_serialize.Date)
}

inline void Date::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.year_){0u}
    , decltype(_impl_.month_){0u}
    , decltype(_impl_.day_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Date::~Date() {
  // @@protoc_insertion_point(destructor:phone_book_serialize.Date)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Date::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Date::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Date::Clear() {
// @@protoc_insertion_point(message_clear_start:phone_book_serialize.Date)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.year_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.day_) -
      reinterpret_cast<char*>(&_impl_.year_)) + sizeof(_impl_.day_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Date::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 year = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.year_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 month = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.month_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 day = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.day_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* Date::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:phone_book_serialize.Date)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 year = 1;
  if (this->_internal_year() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_year(), target);
  }

  // uint32 month = 2;
  if (this->_internal_month() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_month(), target);
  }

  // uint32 day = 3;
  if (this->_internal_day() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_day(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:phone_book_serialize.Date)
  return target;
}

size_t Date::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:phone_book_serialize.Date)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 year = 1;
  if (this->_internal_year() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_year());
  }

  // uint32 month = 2;
  if (this->_internal_month() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_month());
  }

  // uint32 day = 3;
  if (this->_internal_day() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_day());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Date::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Date::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Date::GetClassData() const { return &_class_data_; }


void Date::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Date*>(&to_msg);
  auto& from = static_cast<const Date&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:phone_book_serialize.Date)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_year() != 0) {
    _this->_internal_set_year(from._internal_year());
  }
  if (from._internal_month() != 0) {
    _this->_internal_set_month(from._internal_month());
  }
  if (from._internal_day() != 0) {
    _this->_internal_set_day(from._internal_day());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Date::CopyFrom(const Date& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:phone_book_serialize.Date)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Date::IsInitialized() const {
  return true;
}

void Date::InternalSwap(Date* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Date, _impl_.day_)
      + sizeof(Date::_impl_.day_)
      - PROTOBUF_FIELD_OFFSET(Date, _impl_.year_)>(
          reinterpret_cast<char*>(&_impl_.year_),
          reinterpret_cast<char*>(&other->_impl_.year_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Date::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_contact_2eproto_getter, &descriptor_table_contact_2eproto_once,
      file_level_metadata_contact_2eproto[0]);
}

// ===================================================================

class Contact::_Internal {
 public:
  static const ::phone_book_serialize::Date& birthday(const Contact* msg);
};

const ::phone_book_serialize::Date&
Contact::_Internal::birthday(const Contact* msg) {
  return *msg->_impl_.birthday_;
}
Contact::Contact(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:phone_book_serialize.Contact)
}
Contact::Contact(const Contact& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Contact* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.phone_number_){from._impl_.phone_number_}
    , decltype(_impl_.name_){}
    , decltype(_impl_.birthday_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_birthday()) {
    _this->_impl_.birthday_ = new ::phone_book_serialize::Date(*from._impl_.birthday_);
  }
  // @@protoc_insertion_point(copy_constructor:phone_book_serialize.Contact)
}

inline void Contact::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.phone_number_){arena}
    , decltype(_impl_.name_){}
    , decltype(_impl_.birthday_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Contact::~Contact() {
  // @@protoc_insertion_point(destructor:phone_book_serialize.Contact)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Contact::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.phone_number_.~RepeatedPtrField();
  _impl_.name_.Destroy();
  if (this != internal_default_instance()) delete _impl_.birthday_;
}

void Contact::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Contact::Clear() {
// @@protoc_insertion_point(message_clear_start:phone_book_serialize.Contact)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.phone_number_.Clear();
  _impl_.name_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.birthday_ != nullptr) {
    delete _impl_.birthday_;
  }
  _impl_.birthday_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Contact::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "phone_book_serialize.Contact.name"));
        } else
          goto handle_unusual;
        continue;
      // .phone_book_serialize.Date birthday = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_birthday(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string phone_number = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_phone_number();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "phone_book_serialize.Contact.phone_number"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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

uint8_t* Contact::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:phone_book_serialize.Contact)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "phone_book_serialize.Contact.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // .phone_book_serialize.Date birthday = 2;
  if (this->_internal_has_birthday()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::birthday(this),
        _Internal::birthday(this).GetCachedSize(), target, stream);
  }

  // repeated string phone_number = 3;
  for (int i = 0, n = this->_internal_phone_number_size(); i < n; i++) {
    const auto& s = this->_internal_phone_number(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "phone_book_serialize.Contact.phone_number");
    target = stream->WriteString(3, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:phone_book_serialize.Contact)
  return target;
}

size_t Contact::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:phone_book_serialize.Contact)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string phone_number = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.phone_number_.size());
  for (int i = 0, n = _impl_.phone_number_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.phone_number_.Get(i));
  }

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .phone_book_serialize.Date birthday = 2;
  if (this->_internal_has_birthday()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.birthday_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Contact::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Contact::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Contact::GetClassData() const { return &_class_data_; }


void Contact::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Contact*>(&to_msg);
  auto& from = static_cast<const Contact&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:phone_book_serialize.Contact)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.phone_number_.MergeFrom(from._impl_.phone_number_);
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_has_birthday()) {
    _this->_internal_mutable_birthday()->::phone_book_serialize::Date::MergeFrom(
        from._internal_birthday());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Contact::CopyFrom(const Contact& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:phone_book_serialize.Contact)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Contact::IsInitialized() const {
  return true;
}

void Contact::InternalSwap(Contact* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.phone_number_.InternalSwap(&other->_impl_.phone_number_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  swap(_impl_.birthday_, other->_impl_.birthday_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Contact::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_contact_2eproto_getter, &descriptor_table_contact_2eproto_once,
      file_level_metadata_contact_2eproto[1]);
}

// ===================================================================

class ContactList::_Internal {
 public:
};

ContactList::ContactList(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:phone_book_serialize.ContactList)
}
ContactList::ContactList(const ContactList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ContactList* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.contact_){from._impl_.contact_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:phone_book_serialize.ContactList)
}

inline void ContactList::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.contact_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ContactList::~ContactList() {
  // @@protoc_insertion_point(destructor:phone_book_serialize.ContactList)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ContactList::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.contact_.~RepeatedPtrField();
}

void ContactList::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ContactList::Clear() {
// @@protoc_insertion_point(message_clear_start:phone_book_serialize.ContactList)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.contact_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ContactList::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .phone_book_serialize.Contact contact = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_contact(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

uint8_t* ContactList::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:phone_book_serialize.ContactList)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .phone_book_serialize.Contact contact = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_contact_size()); i < n; i++) {
    const auto& repfield = this->_internal_contact(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:phone_book_serialize.ContactList)
  return target;
}

size_t ContactList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:phone_book_serialize.ContactList)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .phone_book_serialize.Contact contact = 1;
  total_size += 1UL * this->_internal_contact_size();
  for (const auto& msg : this->_impl_.contact_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ContactList::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ContactList::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ContactList::GetClassData() const { return &_class_data_; }


void ContactList::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ContactList*>(&to_msg);
  auto& from = static_cast<const ContactList&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:phone_book_serialize.ContactList)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.contact_.MergeFrom(from._impl_.contact_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ContactList::CopyFrom(const ContactList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:phone_book_serialize.ContactList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ContactList::IsInitialized() const {
  return true;
}

void ContactList::InternalSwap(ContactList* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.contact_.InternalSwap(&other->_impl_.contact_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ContactList::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_contact_2eproto_getter, &descriptor_table_contact_2eproto_once,
      file_level_metadata_contact_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace phone_book_serialize
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::phone_book_serialize::Date*
Arena::CreateMaybeMessage< ::phone_book_serialize::Date >(Arena* arena) {
  return Arena::CreateMessageInternal< ::phone_book_serialize::Date >(arena);
}
template<> PROTOBUF_NOINLINE ::phone_book_serialize::Contact*
Arena::CreateMaybeMessage< ::phone_book_serialize::Contact >(Arena* arena) {
  return Arena::CreateMessageInternal< ::phone_book_serialize::Contact >(arena);
}
template<> PROTOBUF_NOINLINE ::phone_book_serialize::ContactList*
Arena::CreateMaybeMessage< ::phone_book_serialize::ContactList >(Arena* arena) {
  return Arena::CreateMessageInternal< ::phone_book_serialize::ContactList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
