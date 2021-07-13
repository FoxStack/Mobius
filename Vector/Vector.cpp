//
// Created by raf on 7/13/21.
//

#include "Vector.h"

/**
 * Blank constructor w/ no props.
 * @tparam T
 */

template <typename T>
Vector<T>::Vector() {
    size, capacity = 0;
    container = new T [0];
}

/**
 * @brief Vector constructor with size prop
 * @tparam T
 * @param size
 */

template <typename T>
Vector<T>::Vector(size_t size) {
    size, capacity = size;
    container = new T [size];
}

/**
 * @brief Constructor w/ size and items as props
 * @tparam T
 * @param size
 * @param items
 */

template <typename T>
Vector<T>::Vector(size_t size, const T &values) {
    size, capacity = size;
    container = new T [size];
    for(size_t i=0; i<size; i++){
        container[i] = values;
    }
}

/**
 * @brief Copy constructor for Vector
 * @tparam T
 * @param rhs - Vector
 */

template <typename T>
Vector<T>::Vector(const Vector<T> &rhs) {
    size = rhs.size;
    capacity = rhs.capacity;
    container = new T [rhs.size];
    for(size_t i=0; i<rhs.size; i++){
        container[i] = rhs.storage[i];
    }
}

/**
 * @brief Destructor for Vector
 * @tparam T
 */

template <typename T>
Vector<T>::~Vector() {
    delete[] container;
}
