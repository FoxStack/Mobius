//
// Created by raf on 7/19/21.
//

#include "Vector.h"
#include <stdexcept>

/**
 * @brief Basic Vector<T> constructor.
 * @tparam T
 */
template <typename T>
Vector<T>::Vector():_size(0),_capacity(0),_values(0) {}

//Yeah I inline my functions. Performance go brrrr.
/**
 * @brief Vector constructor with size
 * @tparam T
 * @param size
 */
template <typename T>
inline Vector<T>::Vector(int size):_size(size),_capacity(size),_values(new T[size]) {
  for(std::size_t i=0; i<_size; i++){_values[i] = T();}
}

/**
 * @brief Copy constructor Vector<T>
 * @tparam T
 * @param v
 */
template <typename T>
inline Vector<T>::Vector(const Vector &v):_size(v._size),_capacity(v._capacity),_values(new T[v._size]) {
  for(std::size_t i=0; i<v._size; i++){_values[i] = v._values[i];}
}

//I hate this one
/**
 * @brief Copy assignment Vector<T>
 * @tparam T
 * @param v
 * @return
 */
template <typename T>
inline Vector<T>& Vector<T>::operator=(const Vector<T> &v){
  if(this == &v) return *this;
  if(v._size <= _capacity){
    for(std::size_t i=0; i<v._size; i++){
      _values[i] =  v._values[i];
      _size = v._size;
      return *this;
    }
  }
  T *p = new T[v._size];
  //... ++ the fucking plus plus killed me for days...
  for(std::size_t i=0; i<v._size; ++i){
    p[i] = v._values[i];
  }
  //Delete
  delete[] _values;
  _size=v._size;
  _capacity=v._capacity;
  _values=p;
  return *this;
}

/**
 * @brief Destructor for Vector<T>
 * @tparam T
 */
template <typename T>
Vector<T>::~Vector() {
  delete[] _values;
}

/**
 * @brief Reserves space vector to contain at least n elements.
 * @tparam T
 * @param n
 */
template <typename T>
inline void Vector<T>::reserve(size_t n) {
  if(n<_capacity) return;
  T *p = new T[n];
  for(std::size_t i=0; i<_size; ++i){
    p[i] = _values[i];
  }
  delete[] _values;
  _values = p;
  _capacity = n;
}

/**
 * @brief Resize vector<T>
 * @tparam T
 * @param size
 * @param val
 */
template <typename T>
inline void Vector<T>::resize(int size, T val) {
  reserve(size);
  for(std::size_t i=_size; i< size; ++i){
    _values[i] = T();
    _size = size;
  }
}

/**
 * @brief Is empty vector
 * @tparam T
 * @return
 */
template <typename T>
inline bool Vector<T>::empty() const {
  return (_size == 0);
}

/**
 * @brief Returns vector capacity
 * @tparam T
 * @return
 */
template <typename T>
inline std::size_t Vector<T>::capacity() const {
  return _capacity;
}

/**
 * @brief Pushes type to vector
 * @tparam T
 * @param val
 */
template <typename T>
inline void Vector<T>::push_back(const T &val) {
  if(_capacity == 0){reserve(8);}
  if(_size == _capacity){reserve(2 * _capacity);}
  _values[_size] = val;
  ++_size;
}

/**
 * @breif Pops last item in the vector
 * @tparam T
 */
template <typename T>
inline void Vector<T>::pop_back() {
  if(_size == 0) throw std::invalid_argument("Vector is empty. Nothing to pop.");
  delete _values[_size-1];
  --_size;
}

/**
 * @brief Get Vector<T> value at index
 * @tparam T
 * @param i
 * @return
 */
template <typename T>
inline T &Vector<T>::at(int i) {
  if(i<0||_size<=i){throw std::out_of_range ("Range Error");}
  return _values[i];
}

/**
 * @brief Get Vector<T> value at index
 * @tparam T
 * @param i
 * @return
 */
template <typename T>
inline const T &Vector<T>::at(int i) const{
  if(i<0||_size<=i){throw std::out_of_range ("Range Error");}
  return _values[i];
}

/**
 * @brief Vector operator access
 * @tparam T
 * @param i
 * @return
 */
template <typename T>
inline T &Vector<T>::operator[](int i) {
  return _values[i];
}

/**
 * @brief Vector operator access
 * @tparam T
 * @param i
 * @return
 */
template <typename T>
inline const T &Vector<T>::operator[](int i) const{
  return _values[i];
}

/**
 * @brief C++ | Returns a direct pointer to the memory array used internally by the vector to store its owned elements. https://www.cplusplus.com/reference/vector/vector/data/
 * @tparam T
 * @return
 */
template <typename T>
inline const T* Vector<T>::data() {
  return _values;
}