//!Reverse Iterator Class
/*!
 * derived from iterator<T>
 * @tparam T type to be used for iterator
 */
template <typename T> class reverse : public iterator<T> {
public:
  /*!
   * @brief Constructor.
   * @param ptr assigned to iterator
   */
  reverse(T *ptr = nullptr) : iterator<T>(ptr) {}
    //!Copy constructor for iterator
  /*!
   *
   * @param rawit iterator to copy
   */
  reverse(const iterator<T> &rawit) { this->m_ptr = rawit.gptr(); }
    //!Copy constructor for reverse iterator
  /*!
   *
   * @param rrawit reverse iterator to copy
   */
  reverse(const reverse<T> &rrawit) = default;
  //!Destructor
  ~reverse() {}

    /*!
   * @brief copy assignment for reverse iterator
   * @param rrawit reverse iterator to be copied
   * @return
   */
  reverse<T> &operator=(const reverse<T> &rrawit) = default;
    /*!
   * @brief copy assignment for iterator
   * @param rawit iterator to be copied
   * @return
   */
  reverse<T> &operator=(const iterator<T> &rawit) {
    this->m_ptr = rawit.gptr();
    return (*this);
  }
    //!Assignment operator setting this to the ptr passed in
  /*!
   *
   * @param ptr new ptr to be assigned
   * @return new assignment
   */
  reverse<T> &operator=(T *ptr) {
    this->setPtr(ptr);
    return (*this);
  }
   /*!
   * points to an element behind current element depending on 'movement'.
   * @param movement how many elements to move backwards
   * @return new iterator position
   */
  reverse<T> &operator+=(const typename iterator<T>::difference_type &movement) {
    this->m_ptr -= movement;
    return (*this);
  }
    /*!
   * points to a succeeding element depending on 'movement'.
   * @param movement how many elements to move forward
   * @return new iterator position
   */
  reverse<T> &operator-=(const typename iterator<T>::difference_type &movement) {
    this->m_ptr += movement;
    return (*this);
  }
  /*!
   * @brief Overloaded ++ operator. Will decrement instead of increment since this is a reverse
   * iterator
   * @return new iterator position
   */
  reverse<T> &operator++() {
    --this->m_ptr;
    return (*this);
  }
    /*!
   * @brief Overloaded ++ operator. decrements instead of increments. Will point
   * to the previous element to the one currently pointed at
   * @return new iterator position
   */
  reverse<T> operator++(int) {
    auto temp(*this);
    --this->m_ptr;
    return temp;
  }
    //!Overloaded -- operator
  /*!
   * increments instead of decrements since it is a reverse iterator
   * will point to the next element in the list
   * @return new iterator position
   */
  reverse<T> &operator--() {
    ++this->m_ptr;
    return (*this);
  }
  
    //!Overloaded -- operator
  /*!
   * increments instead of decrements since it is a reverse iterator
   * will point to the next element in the list
   * @return new iterator position
   */
  reverse<T> operator--(int) {
    auto temp(*this);
    ++this->m_ptr;
    return temp;
  }
   //!Overloaded + operator
  /*!
   * assigns m_ptr to temp, and subtracts 'movement' to it, moving that many elements to the left
   * @param movement amount to subtract
   * @return new iterator position
   */
  reverse<T> operator+(const int &movement) {
    auto old = this->m_ptr;
    this->m_ptr -= movement;
    auto temp(*this);
    this->m_ptr = old;
    return temp;
  }
    //!Overloaded - operator
  /*!
   * assigns m_ptr to temp, and adds 'movement' to it, moving that many elements to the right
   * @param movement amount to add
   * @return
   */
  reverse<T> operator-(const int &movement) {
    auto old = this->m_ptr;
    this->m_ptr += movement;
    auto temp(*this);
    this->m_ptr = old;
    return temp;
  }
 //!Calculates range between param ptr and lhs ptr, returns value
  typename iterator<T>::difference_type operator-(const reverse<T> &rrawit) {return std::distance(this->gptr(), rrawit.gptr());}

  iterator<T> base() {
    iterator<T> forwardIterator(this->m_ptr);
    ++forwardIterator;
    return forwardIterator;
  }
};