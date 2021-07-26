// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PERSISTEDUSERWRITERECORD_FIREBASE_DATABASE_INTERNAL_PERSISTENCE_H_
#define FLATBUFFERS_GENERATED_PERSISTEDUSERWRITERECORD_FIREBASE_DATABASE_INTERNAL_PERSISTENCE_H_

#include "flatbuffers/flatbuffers.h"
#include "flatbuffers/flexbuffers.h"

#include "persisted_compound_write_generated.h"

namespace firebase {
namespace database {
namespace internal {
namespace persistence {

struct PersistedUserWriteRecord;
struct PersistedUserWriteRecordBuilder;
struct PersistedUserWriteRecordT;

struct PersistedUserWriteRecordT : public flatbuffers::NativeTable {
  typedef PersistedUserWriteRecord TableType;
  int64_t write_id;
  std::string path;
  std::vector<uint8_t> overwrite;
  flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedCompoundWriteT> merge;
  bool visible;
  bool is_overwrite;
  PersistedUserWriteRecordT()
      : write_id(0),
        visible(false),
        is_overwrite(false) {
  }
};

struct PersistedUserWriteRecord FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PersistedUserWriteRecordT NativeTableType;
  typedef PersistedUserWriteRecordBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_WRITE_ID = 4,
    VT_PATH = 6,
    VT_OVERWRITE = 8,
    VT_MERGE = 10,
    VT_VISIBLE = 12,
    VT_IS_OVERWRITE = 14
  };
  int64_t write_id() const {
    return GetField<int64_t>(VT_WRITE_ID, 0);
  }
  const flatbuffers::String *path() const {
    return GetPointer<const flatbuffers::String *>(VT_PATH);
  }
  const flatbuffers::Vector<uint8_t> *overwrite() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_OVERWRITE);
  }
  flexbuffers::Reference overwrite_flexbuffer_root() const {
    return flexbuffers::GetRoot(overwrite()->Data(), overwrite()->size());
  }
  const firebase::database::internal::persistence::PersistedCompoundWrite *merge() const {
    return GetPointer<const firebase::database::internal::persistence::PersistedCompoundWrite *>(VT_MERGE);
  }
  bool visible() const {
    return GetField<uint8_t>(VT_VISIBLE, 0) != 0;
  }
  bool is_overwrite() const {
    return GetField<uint8_t>(VT_IS_OVERWRITE, 0) != 0;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int64_t>(verifier, VT_WRITE_ID) &&
           VerifyOffset(verifier, VT_PATH) &&
           verifier.VerifyString(path()) &&
           VerifyOffset(verifier, VT_OVERWRITE) &&
           verifier.VerifyVector(overwrite()) &&
           VerifyOffset(verifier, VT_MERGE) &&
           verifier.VerifyTable(merge()) &&
           VerifyField<uint8_t>(verifier, VT_VISIBLE) &&
           VerifyField<uint8_t>(verifier, VT_IS_OVERWRITE) &&
           verifier.EndTable();
  }
  PersistedUserWriteRecordT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(PersistedUserWriteRecordT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<PersistedUserWriteRecord> Pack(flatbuffers::FlatBufferBuilder &_fbb, const PersistedUserWriteRecordT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct PersistedUserWriteRecordBuilder {
  typedef PersistedUserWriteRecord Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_write_id(int64_t write_id) {
    fbb_.AddElement<int64_t>(PersistedUserWriteRecord::VT_WRITE_ID, write_id, 0);
  }
  void add_path(flatbuffers::Offset<flatbuffers::String> path) {
    fbb_.AddOffset(PersistedUserWriteRecord::VT_PATH, path);
  }
  void add_overwrite(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> overwrite) {
    fbb_.AddOffset(PersistedUserWriteRecord::VT_OVERWRITE, overwrite);
  }
  void add_merge(flatbuffers::Offset<firebase::database::internal::persistence::PersistedCompoundWrite> merge) {
    fbb_.AddOffset(PersistedUserWriteRecord::VT_MERGE, merge);
  }
  void add_visible(bool visible) {
    fbb_.AddElement<uint8_t>(PersistedUserWriteRecord::VT_VISIBLE, static_cast<uint8_t>(visible), 0);
  }
  void add_is_overwrite(bool is_overwrite) {
    fbb_.AddElement<uint8_t>(PersistedUserWriteRecord::VT_IS_OVERWRITE, static_cast<uint8_t>(is_overwrite), 0);
  }
  explicit PersistedUserWriteRecordBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PersistedUserWriteRecord> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PersistedUserWriteRecord>(end);
    return o;
  }
};

inline flatbuffers::Offset<PersistedUserWriteRecord> CreatePersistedUserWriteRecord(
    flatbuffers::FlatBufferBuilder &_fbb,
    int64_t write_id = 0,
    flatbuffers::Offset<flatbuffers::String> path = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> overwrite = 0,
    flatbuffers::Offset<firebase::database::internal::persistence::PersistedCompoundWrite> merge = 0,
    bool visible = false,
    bool is_overwrite = false) {
  PersistedUserWriteRecordBuilder builder_(_fbb);
  builder_.add_write_id(write_id);
  builder_.add_merge(merge);
  builder_.add_overwrite(overwrite);
  builder_.add_path(path);
  builder_.add_is_overwrite(is_overwrite);
  builder_.add_visible(visible);
  return builder_.Finish();
}

inline flatbuffers::Offset<PersistedUserWriteRecord> CreatePersistedUserWriteRecordDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int64_t write_id = 0,
    const char *path = nullptr,
    const std::vector<uint8_t> *overwrite = nullptr,
    flatbuffers::Offset<firebase::database::internal::persistence::PersistedCompoundWrite> merge = 0,
    bool visible = false,
    bool is_overwrite = false) {
  auto path__ = path ? _fbb.CreateString(path) : 0;
  auto overwrite__ = overwrite ? _fbb.CreateVector<uint8_t>(*overwrite) : 0;
  return firebase::database::internal::persistence::CreatePersistedUserWriteRecord(
      _fbb,
      write_id,
      path__,
      overwrite__,
      merge,
      visible,
      is_overwrite);
}

flatbuffers::Offset<PersistedUserWriteRecord> CreatePersistedUserWriteRecord(flatbuffers::FlatBufferBuilder &_fbb, const PersistedUserWriteRecordT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline PersistedUserWriteRecordT *PersistedUserWriteRecord::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedUserWriteRecordT> _o = flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedUserWriteRecordT>(new PersistedUserWriteRecordT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void PersistedUserWriteRecord::UnPackTo(PersistedUserWriteRecordT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = write_id(); _o->write_id = _e; }
  { auto _e = path(); if (_e) _o->path = _e->str(); }
  { auto _e = overwrite(); if (_e) { _o->overwrite.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->overwrite[_i] = _e->Get(_i); } } }
  { auto _e = merge(); if (_e) _o->merge = flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedCompoundWriteT>(_e->UnPack(_resolver)); }
  { auto _e = visible(); _o->visible = _e; }
  { auto _e = is_overwrite(); _o->is_overwrite = _e; }
}

inline flatbuffers::Offset<PersistedUserWriteRecord> PersistedUserWriteRecord::Pack(flatbuffers::FlatBufferBuilder &_fbb, const PersistedUserWriteRecordT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreatePersistedUserWriteRecord(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<PersistedUserWriteRecord> CreatePersistedUserWriteRecord(flatbuffers::FlatBufferBuilder &_fbb, const PersistedUserWriteRecordT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PersistedUserWriteRecordT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _write_id = _o->write_id;
  auto _path = _o->path.empty() ? 0 : _fbb.CreateString(_o->path);
  auto _overwrite = _o->overwrite.size() ? _fbb.CreateVector(_o->overwrite) : 0;
  auto _merge = _o->merge ? CreatePersistedCompoundWrite(_fbb, _o->merge.get(), _rehasher) : 0;
  auto _visible = _o->visible;
  auto _is_overwrite = _o->is_overwrite;
  return firebase::database::internal::persistence::CreatePersistedUserWriteRecord(
      _fbb,
      _write_id,
      _path,
      _overwrite,
      _merge,
      _visible,
      _is_overwrite);
}

inline const firebase::database::internal::persistence::PersistedUserWriteRecord *GetPersistedUserWriteRecord(const void *buf) {
  return flatbuffers::GetRoot<firebase::database::internal::persistence::PersistedUserWriteRecord>(buf);
}

inline const firebase::database::internal::persistence::PersistedUserWriteRecord *GetSizePrefixedPersistedUserWriteRecord(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<firebase::database::internal::persistence::PersistedUserWriteRecord>(buf);
}

inline const char *PersistedUserWriteRecordIdentifier() {
  return "USRW";
}

inline bool PersistedUserWriteRecordBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, PersistedUserWriteRecordIdentifier());
}

inline bool VerifyPersistedUserWriteRecordBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<firebase::database::internal::persistence::PersistedUserWriteRecord>(PersistedUserWriteRecordIdentifier());
}

inline bool VerifySizePrefixedPersistedUserWriteRecordBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<firebase::database::internal::persistence::PersistedUserWriteRecord>(PersistedUserWriteRecordIdentifier());
}

inline const char *PersistedUserWriteRecordExtension() {
  return "rtdb";
}

inline void FinishPersistedUserWriteRecordBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<firebase::database::internal::persistence::PersistedUserWriteRecord> root) {
  fbb.Finish(root, PersistedUserWriteRecordIdentifier());
}

inline void FinishSizePrefixedPersistedUserWriteRecordBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<firebase::database::internal::persistence::PersistedUserWriteRecord> root) {
  fbb.FinishSizePrefixed(root, PersistedUserWriteRecordIdentifier());
}

inline flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedUserWriteRecordT> UnPackPersistedUserWriteRecord(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedUserWriteRecordT>(GetPersistedUserWriteRecord(buf)->UnPack(res));
}

inline flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedUserWriteRecordT> UnPackSizePrefixedPersistedUserWriteRecord(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedUserWriteRecordT>(GetSizePrefixedPersistedUserWriteRecord(buf)->UnPack(res));
}

}  // namespace persistence
}  // namespace internal
}  // namespace database
}  // namespace firebase

#endif  // FLATBUFFERS_GENERATED_PERSISTEDUSERWRITERECORD_FIREBASE_DATABASE_INTERNAL_PERSISTENCE_H_