#include "Vector/Vector.cpp"
#include <iostream>
int main() {
  std::cout << "Origin Test" << std::endl;
  Vector<int> s;
  Vector<int> p;
  s.push_back(8);
  s.push_back(2);
  s.push_back(3);
  s.push_back(6);
  s.push_back(5);
  s.push_back(7);
  for (int x : s) {
    std::cout << x << std::endl;
  }
  std::cout << "[S]Vector.at(0) returns: " << s.at(0) << std::endl;
  p = s;
  std::cout << "[P]Vector.at(0) returns: " << s.at(0) << std::endl;
  std::sort(s.begin(), s.end());
  std::sort(s.rbegin(), s.rend());
  for (int x : s) {
    std::cout << x << std::endl;
  }
  return 0;
}
