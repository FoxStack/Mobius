#include <iterator>
template <typename T> class iterator {

  /*
   * [Iterator Requirements]
   * https://eel.is/c++draft/iterator.requirements
   *
   * Forward It Ref - 23.3.4.11
   * Input It Ref - 23.3.4.9
   * Random Access It Ref - 23.3.4.13
   */

protected:
  T *m_ptr;

public:
  /*
   * Pointer Arithmetic
   * https://en.cppreference.com/w/cpp/language/operator_arithmetic#Additive_operators
   *
   * https://en.cppreference.com/w/cpp/named_req/RandomAccessIterator
   * LR operator+(L, R)
   * LR operator-(L, R)
   * T* operator+(T*, std::ptrdiff_t)
   * T* operator+(std::ptrdiff_t, T*)
   * T* operator-(T*, std::ptrdiff_t)
   * std::ptrdiff_t operator-(T*, T*)
   */

  // https://eel.is/c++draft/iterator.requirements#iterator.concept.random.access
  using iterator_category = std::random_access_iterator_tag;
  using value_type = T;
  // https://en.cppreference.com/w/cpp/types/ptrdiff_t
  using difference_type = std::ptrdiff_t;
  using pointer = T *;
  using reference = T &;

  iterator(T *ptr = nullptr) { m_ptr = ptr; }
  iterator(const iterator<T> &rawit) = default;
  ~iterator() {}

  iterator<T> &operator=(const iterator<T> &rawit) = default;
  iterator<T> &operator=(T *ptr) {
    m_ptr = ptr;
    return (*this);
  }

  operator bool() const {
    if (m_ptr)
      return true;
    else
      return false;
  }
  bool operator==(const iterator<T> &rawit) const {
    return (m_ptr == rawit.gcptr());
  }
  bool operator!=(const iterator<T> &rawit) const {
    return (m_ptr != rawit.gcptr());
  }

  /**
   * @brief += operator
   * @param movement
   * @return
   */
  iterator<T> &operator+=(const difference_type &movement) {
    m_ptr += movement;
    return (*this);
  }

  /**
   * @brief -= operator
   * @param movement
   * @return
   */
  iterator<T> &operator-=(const difference_type &movement) {
    m_ptr -= movement;
    return (*this);
  }

  /**
   * @brief ++ operator prefix
   * @return
   */
  iterator<T> &operator++() {
    ++m_ptr;
    return (*this);
  }

  /**
   * @brief -- operator prefix
   * @return
   */
  iterator<T> &operator--() {
    --m_ptr;
    return (*this);
  }

  /**
   * @brief ++ operator postfix
   * @return
   */
  iterator<T> operator++(int) {
    auto temp(*this);
    ++m_ptr;
    return temp;
  }

  /**
   * @brief -- operator postfix
   * @return
   */
  iterator<T> operator--(int) {
    auto temp(*this);
    --m_ptr;
    return temp;
  }

  /**
   * @brief + operator
   * @param movement
   * @return
   */
  iterator<T> operator+(const difference_type &movement) {
    auto oldPtr = m_ptr;
    m_ptr += movement;
    auto temp(*this);
    m_ptr = oldPtr;
    return temp;
  }

  /**
   * @brief - operator
   * @param movement
   * @return
   */
  iterator<T> operator-(const difference_type &movement) {
    auto oldPtr = m_ptr;
    m_ptr -= movement;
    auto temp(*this);
    m_ptr = oldPtr;
    return temp;
  }

  difference_type operator-(const iterator<T> &rawit) {
    return std::distance(rawit.gptr(), this->gptr());
  }

  T &operator*() { return *m_ptr; }
  const T &operator*() const { return *m_ptr; }
  T *operator->() { return m_ptr; }

  T *gptr() const { return m_ptr; }
  const T *gcptr() const { return m_ptr; }
};