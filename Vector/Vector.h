//
// Created by raf on 7/19/21.
//

#pragma once
#include <cstddef>
#include <iterator>

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
  class iterator {
  public:
    typedef iterator self_type;
    typedef T value_type;
    typedef T &reference;
    typedef T *pointer;
    typedef std::forward_iterator_tag iterator_category;
    typedef int difference_type;
    iterator(pointer ptr) : ptr_(ptr) {}
    self_type operator++() {
      self_type i = *this;
      ptr_++;
      return i;
    }
    self_type operator++(int junk) {
      ptr_++;
      return *this;
    }
    reference operator*() { return *ptr_; }
    pointer operator->() { return ptr_; }
    bool operator==(const self_type &rhs) { return ptr_ == rhs.ptr_; }
    bool operator!=(const self_type &rhs) { return ptr_ != rhs.ptr_; }

  private:
    pointer ptr_;
  };

  class const_iterator {
  public:
    typedef const_iterator self_type;
    typedef T value_type;
    typedef T &reference;
    typedef T *pointer;
    typedef int difference_type;
    typedef std::forward_iterator_tag iterator_category;
    const_iterator(pointer ptr) : ptr_(ptr) {}
    self_type operator++() {
      self_type i = *this;
      ptr_++;
      return i;
    }
    self_type operator++(int junk) {
      ptr_++;
      return *this;
    }
    const reference operator*() { return *ptr_; }
    const pointer operator->() { return ptr_; }
    bool operator==(const self_type &rhs) { return ptr_ == rhs.ptr_; }
    bool operator!=(const self_type &rhs) { return ptr_ != rhs.ptr_; }

  private:
    pointer ptr_;
  };

  iterator begin(){
    return iterator(_values);
  }

  iterator end(){
    return iterator(_values + _size);
  }

  const_iterator begin() const{
    return const_iterator(_values);
  }

  const_iterator end() const{
    return const_iterator(_values + _size);
  }
};
