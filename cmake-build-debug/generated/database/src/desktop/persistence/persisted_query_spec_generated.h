// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PERSISTEDQUERYSPEC_FIREBASE_DATABASE_INTERNAL_PERSISTENCE_H_
#define FLATBUFFERS_GENERATED_PERSISTEDQUERYSPEC_FIREBASE_DATABASE_INTERNAL_PERSISTENCE_H_

#include "flatbuffers/flatbuffers.h"
#include "flatbuffers/flexbuffers.h"

#include "persisted_query_params_generated.h"

namespace firebase {
namespace database {
namespace internal {
namespace persistence {

struct PersistedQuerySpec;
struct PersistedQuerySpecBuilder;
struct PersistedQuerySpecT;

struct PersistedQuerySpecT : public flatbuffers::NativeTable {
  typedef PersistedQuerySpec TableType;
  std::string path;
  flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedQueryParamsT> params;
  PersistedQuerySpecT() {
  }
};

struct PersistedQuerySpec FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PersistedQuerySpecT NativeTableType;
  typedef PersistedQuerySpecBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PATH = 4,
    VT_PARAMS = 6
  };
  const flatbuffers::String *path() const {
    return GetPointer<const flatbuffers::String *>(VT_PATH);
  }
  const firebase::database::internal::persistence::PersistedQueryParams *params() const {
    return GetPointer<const firebase::database::internal::persistence::PersistedQueryParams *>(VT_PARAMS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_PATH) &&
           verifier.VerifyString(path()) &&
           VerifyOffset(verifier, VT_PARAMS) &&
           verifier.VerifyTable(params()) &&
           verifier.EndTable();
  }
  PersistedQuerySpecT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(PersistedQuerySpecT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<PersistedQuerySpec> Pack(flatbuffers::FlatBufferBuilder &_fbb, const PersistedQuerySpecT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct PersistedQuerySpecBuilder {
  typedef PersistedQuerySpec Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_path(flatbuffers::Offset<flatbuffers::String> path) {
    fbb_.AddOffset(PersistedQuerySpec::VT_PATH, path);
  }
  void add_params(flatbuffers::Offset<firebase::database::internal::persistence::PersistedQueryParams> params) {
    fbb_.AddOffset(PersistedQuerySpec::VT_PARAMS, params);
  }
  explicit PersistedQuerySpecBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PersistedQuerySpec> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PersistedQuerySpec>(end);
    return o;
  }
};

inline flatbuffers::Offset<PersistedQuerySpec> CreatePersistedQuerySpec(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> path = 0,
    flatbuffers::Offset<firebase::database::internal::persistence::PersistedQueryParams> params = 0) {
  PersistedQuerySpecBuilder builder_(_fbb);
  builder_.add_params(params);
  builder_.add_path(path);
  return builder_.Finish();
}

inline flatbuffers::Offset<PersistedQuerySpec> CreatePersistedQuerySpecDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *path = nullptr,
    flatbuffers::Offset<firebase::database::internal::persistence::PersistedQueryParams> params = 0) {
  auto path__ = path ? _fbb.CreateString(path) : 0;
  return firebase::database::internal::persistence::CreatePersistedQuerySpec(
      _fbb,
      path__,
      params);
}

flatbuffers::Offset<PersistedQuerySpec> CreatePersistedQuerySpec(flatbuffers::FlatBufferBuilder &_fbb, const PersistedQuerySpecT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline PersistedQuerySpecT *PersistedQuerySpec::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedQuerySpecT> _o = flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedQuerySpecT>(new PersistedQuerySpecT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void PersistedQuerySpec::UnPackTo(PersistedQuerySpecT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = path(); if (_e) _o->path = _e->str(); }
  { auto _e = params(); if (_e) _o->params = flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedQueryParamsT>(_e->UnPack(_resolver)); }
}

inline flatbuffers::Offset<PersistedQuerySpec> PersistedQuerySpec::Pack(flatbuffers::FlatBufferBuilder &_fbb, const PersistedQuerySpecT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreatePersistedQuerySpec(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<PersistedQuerySpec> CreatePersistedQuerySpec(flatbuffers::FlatBufferBuilder &_fbb, const PersistedQuerySpecT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PersistedQuerySpecT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _path = _o->path.empty() ? 0 : _fbb.CreateString(_o->path);
  auto _params = _o->params ? CreatePersistedQueryParams(_fbb, _o->params.get(), _rehasher) : 0;
  return firebase::database::internal::persistence::CreatePersistedQuerySpec(
      _fbb,
      _path,
      _params);
}

inline const firebase::database::internal::persistence::PersistedQuerySpec *GetPersistedQuerySpec(const void *buf) {
  return flatbuffers::GetRoot<firebase::database::internal::persistence::PersistedQuerySpec>(buf);
}

inline const firebase::database::internal::persistence::PersistedQuerySpec *GetSizePrefixedPersistedQuerySpec(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<firebase::database::internal::persistence::PersistedQuerySpec>(buf);
}

inline bool VerifyPersistedQuerySpecBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<firebase::database::internal::persistence::PersistedQuerySpec>(nullptr);
}

inline bool VerifySizePrefixedPersistedQuerySpecBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<firebase::database::internal::persistence::PersistedQuerySpec>(nullptr);
}

inline void FinishPersistedQuerySpecBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<firebase::database::internal::persistence::PersistedQuerySpec> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedPersistedQuerySpecBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<firebase::database::internal::persistence::PersistedQuerySpec> root) {
  fbb.FinishSizePrefixed(root);
}

inline flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedQuerySpecT> UnPackPersistedQuerySpec(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedQuerySpecT>(GetPersistedQuerySpec(buf)->UnPack(res));
}

inline flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedQuerySpecT> UnPackSizePrefixedPersistedQuerySpec(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return flatbuffers::unique_ptr<firebase::database::internal::persistence::PersistedQuerySpecT>(GetSizePrefixedPersistedQuerySpec(buf)->UnPack(res));
}

}  // namespace persistence
}  // namespace internal
}  // namespace database
}  // namespace firebase

#endif  // FLATBUFFERS_GENERATED_PERSISTEDQUERYSPEC_FIREBASE_DATABASE_INTERNAL_PERSISTENCE_H_