#include <iterator>
template<typename T>
class iterator {
protected:
    T *m_ptr; /*!<Iterator*/

public:
    using iterator_category = std::random_access_iterator_tag;
    using value_type = T;
    using difference_type = std::ptrdiff_t;
    using pointer = T *;
    using reference = T &;
    
    //!Constructor.
  /*!
   * takes a ptr parameter, which assigns nullptr to m_ptr
   * @param ptr assinged to m_ptr
   */
    iterator(T *ptr = nullptr) { m_ptr = ptr; }
    //!Copy Constructor.
    /*!
    * @param rawit iterator to copy
     */
    iterator(const iterator<T> &rawit) = default;
    //!Destructor
    ~iterator() {}

    //!Copy assignment
    /*!
    * @param rawit iterator to copy
    */
    iterator<T> &operator=(const iterator<T> &rawit) = default;
      //!Overloaded assignment operator
  /*!
   *
   * @param ptr replaces m_ptr
   * @return ptr as new m_ptr
   */
    iterator<T> &operator=(T *ptr) {
        m_ptr = ptr;
        return (*this);
    }
    //!Overloaded bool operator
    operator bool() const {
        if (m_ptr) return true;
        else
            return false;
    }
      //!Overloaded == equality operator
  /*!
   *
   * @param rawit iterator to compare
   * @return true if m_ptr equals rawit.gcptr(), false if not
   */
    bool operator==(const iterator<T> &rawit) const { return (m_ptr == rawit.gcptr()); }
  //!Overloaded != equality operator
  /*!
   *
   * @param rawit iterator to compare 
   * @return true if m_ptr doesnt equal rawit.gcptr(), false if they are
   */
    bool operator!=(const iterator<T> &rawit) const { return (m_ptr != rawit.gcptr()); }

      /**
   * @brief += operator
   * @param movement how much to move the iterator
   * @return new iterator position
   */ 
    iterator<T> &operator+=(const difference_type &movement) {
        m_ptr += movement;
        return (*this);
    }
      /**
   * @brief -= operator
   * @param movement how much to move the iterator back
   * @return new iterator position
   */
    iterator<T> &operator-=(const difference_type &movement) {
        m_ptr -= movement;
        return (*this);
    }
    /**
   * @brief ++ operator prefix, increments iterator to move forward one space 
   * @return new iterator position
   */
    iterator<T> &operator++() {
        ++m_ptr;
        return (*this);
    }
      /**
   * @brief -- operator prefix decrements iterator to move back one space 
   * @return new iterator position
   */
    iterator<T> &operator--() {
        --m_ptr;
        return (*this);
    }
      /**
   * @brief ++ operator postfix increments iterator to move forward one space
   * @return new iterator position
   */
    iterator<T> operator++(int) {
        auto temp(*this);
        ++m_ptr;
        return temp;
    }
      /**
   * @brief -- operator postfix decrements iterator to move back one space 
   * @return new iterator position
   */
    iterator<T> operator--(int) {
        auto temp(*this);
        --m_ptr;
        return temp;
    }
      /**
   * @brief + operator functions similar to += operator; moves to right based on param
   * @param movement amount of space to move to the right
   * @return new iterator position
   */
    iterator<T> operator+(const difference_type &movement) {
        auto oldPtr = m_ptr;
        m_ptr += movement;
        auto temp(*this);
        m_ptr = oldPtr;
        return temp;
    }
  /**
   * @brief - operator functions similar to -= operator; moves to left based on param
   * @param movement amount of elements moved to the left 
   * @return new iterator posiiton
   */
    iterator<T> operator-(const difference_type &movement) {
        auto oldPtr = m_ptr;
        m_ptr -= movement;
        auto temp(*this);
        m_ptr = oldPtr;
        return temp;
    }
          /**
   * @brief + operator functions similar to += operator; moves add number of elems to right
   * @param add amount of space to move to the right
   * @return new iterator position
   */
    iterator<T> operator+(int add) {
        iterator<T> temp(m_ptr + add);
        return temp;
    }
  /**
   * @brief - operator functions similar to -= operator; moves to left based on param
   * @param sub amount of elements moved to the left
   * @return new iterator posiiton
   */
    iterator<T> operator-(int sub) {
        iterator<T> temp(m_ptr - sub);
        return temp;
    }
    //!Calculates range between param ptr and lhs ptr, returns value
    difference_type operator-(const iterator<T> &rawit) {
        return std::distance(rawit.gptr(), this->gptr());
    }

    //!Gets value of what iterator is pointing to
    T &operator*() { return *m_ptr; }
    //!Gets value of what iterator is pointing to(read only)
    const T &operator*() const { return *m_ptr; }
    //!Arrow operator, returns address of m_ptr
    T *operator->() { return m_ptr; }

//!Getter for m_ptr
    T *gptr() const { return m_ptr; }
    //!Getter for m_ptr(read only)
    const T *gcptr() const { return m_ptr; }
};