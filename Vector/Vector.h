//
// Created by raf on 7/13/21.
//

#ifndef MOBIUS_VECTOR_H
#define MOBIUS_VECTOR_H

#include <cstddef>
#include <iterator>

template <typename T>
class Vector {
private:
    unsigned int size, capacity;
    T *container;
public:
    Vector();

    Vector(size_t zize);

    Vector(size_t size, const T &values);

    Vector(const Vector<T> &rhs);

    ~Vector();

    //C++11
    //void reserve(size_t size);
    void reserve(size_t size);

    //C++11
    //void push_back (const value_type& val);
    //void push_back (value_type&& val);
    void push_back(T value);

    //C++11
    //void pop_back();
    void pop_back();

    //C++11
    //void empty();
    void empty();
};

#endif //MOBIUS_VECTOR_H
