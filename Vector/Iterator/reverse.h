//
// Created by raf on 7/20/21.
//

template <typename T>
class reverse : public iterator<T> {
public:
  reverse(T* ptr = nullptr):iterator<T>(ptr) {}
};