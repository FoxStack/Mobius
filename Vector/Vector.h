#pragma once
#include "Iterator/iterator.h"
#include "Iterator/reverse.h"
#include <cstddef>
#include <iterator>

/*
 * [Vector Class] By Raf.
 * This is as close as I can get to the STL Vector.
 * @todo Add exceptions & safeguards to prevent stupidity
 * For reference this was a good paper on fast dynamic arrays.
 * https://drops.dagstuhl.de/opus/volltexte/2017/7830/pdf/LIPIcs-ESA-2017-16.pdf
 * Extra:
 * https://medium.com/@vgasparyan1995/how-to-write-an-stl-compatible-container-fc5b994462c6
 * https://www.reddit.com/r/cpp/comments/9nz3xl/example_of_stl_compatible_custom_containers/
 * This is funny, EA (Electronic Arts) of all people made a good library called EASTL. It's readable but
 * like why EA. Of all the companies in the world, the one who litterally hates it's community wrote something nice.
 */

template <typename T> class Vector {
private:
  // Had to rename, because of size functions
  std::size_t _size;
  std::size_t _capacity;
  T *_values;
  // I need a break I keep seeing blue spots. Fix commit when finished.
public:
  /**
   * [Constructors]
   */
  // Default
  Vector();
  // By size
  explicit Vector(int size);
  // Copy
  Vector(const Vector &v);
  // Copy Assignment
  Vector<T> &operator=(const Vector<T> &v);
  // Destruction
  ~Vector();

  /**
   * [Mutations]
   */
  // https://www.cplusplus.com/reference/vector/vector/
  // void push_back (const value_type& val);
  void push_back(const T &val);
  void pop_back();
  void clear();

  /**
   * [Accessors]
   */
  // https://www.cplusplus.com/reference/vector/vector/at/
  T &at(int i);
  const T &at(int i) const;
  // Holy shit I love GPT-3
  T &operator[](int i);
  const T &operator[](int i) const;
  // https://www.cplusplus.com/reference/vector/vector/front/
  T &front();
  const T &front() const;

  // https://www.cplusplus.com/reference/vector/vector/back/
  T &back();
  const T &back() const;

  // https://www.cplusplus.com/reference/vector/vector/data/
  // o_o cplusplus.com: Returns a direct pointer to the memory array used
  // internally by the vector to store its owned elements. - Fuck yeah
  /*
   *[std::vector::data]
   *value_type* data() noexcept;
   *const value_type* data() const noexcept;
   */
  const T *data();
  const T *data() const;

  /**
   * [Size]
   */
  // https://www.cplusplus.com/reference/vector/vector/capacity/
  // Why cant't I fucking use the word capacity here.
  std::size_t capacity() const;

  // https://www.cplusplus.com/reference/vector/vector/reserve/
  void reserve(size_t n);

  // https://www.cplusplus.com/reference/vector/vector/resize/
  // void resize (size_type n, value_type val = value_type()); c++98
  // void resize (size_type n); c++11
  // void resize (size_type n, const value_type& val); c++11
  void resize(int size, T val = T()); // c++98

  // https://www.cplusplus.com/reference/vector/vector/max_size/
  // size_type max_size() const noexcept; c++11;
  std::size_t max_size();

  // https://www.cplusplus.com/reference/vector/vector/size/
  // size_type size() const noexcept; c++11
  size_t size() const;

  // https://www.cplusplus.com/reference/vector/vector/shrink_to_fit/
  // void shrink_to_fit(); All Versions
  void shrink_to_fit();

  // https://www.cplusplus.com/reference/vector/vector/empty/
  // bool empty() const noexcept;
  bool empty() const;

  /**
   * [Iterator]
   */
  // I love this iterator so much im shaking in my boots.
  typedef iterator<T> it;
  typedef iterator<const T> cit;
  typedef reverse<T> rit;
  typedef reverse<const T> crit;
  // hahah it cit rit crit

  /**
   * @brief Iterator begin() gets start of vector.
   * @return
   */
  it begin() { return it(&_values[0]); }
  /**
   * @brief Iterator end() gets end of vector.
   * @return
   */
  it end() { return it(&_values[_size]); }

  /**
   * @brief Iterator const cbegin() gets start of vector.
   * @return
   */
  cit cbegin() { return cit(&_values[0]); }

  /**
   * @brief Iterator const cend() gets end of vector.
   * @return
   */
  cit cend() { return cit(&_values[_size]); }

  /**
   * @brief Reverse Iterator rbegin() gets start of vector.
   * @return
   */
  rit rbegin() { return rit(&_values[_size - 1]); }

  /**
   * @brief Reverse Iterator rend() gets ends of vector.
   * @return
   */
  rit rend() { return rit(&_values[-1]); }

  /**
   * @brief Reverse Iterator const crbegin() gets start of vector.
   * @return
   */
  crit crbegin() { return crit(&_values[_size - 1]); }

  /**
   * @brief Reverse Iterator const crend() gets end of vector.
   * @return
   */
  crit crend() { return crit(&_values[-1]); }
};
