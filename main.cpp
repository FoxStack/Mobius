#include "Vector/Vector.cpp"
#include <iostream>
int main() {
  std::cout << "Origin Test" << std::endl;
  Vector<int> s;
  Vector<int> p;
  s.push_back(1);
  for (int x : s) {
    std::cout << x << std::endl;
  }
  std::cout << "[S]Vector.at(0) returns: " << s.at(0) << std::endl;
  p = s;
  std::cout << "[P]Vector.at(0) returns: " << s.at(0) << std::endl;
  return 0;
}
