#include <iostream>
// Call by Values, Call by reference
int func1(int a, int b);
int func2(int &c, int &d);
int func3(const int &e, const int &f);
int main() {
  int x = 5, y = 7;
  int p = 5, q = 7;
  int i = 5, j = 7;
  std::cout << func1(x, y) << std::endl;
  std::cout << x << " " << y << std::endl;
  std::cout << func2(p, q) << std::endl;
  std::cout << p << " " << q << std::endl;
  std::cout << func3(i, j) << std::endl;
  std::cout << i << " " << j << std::endl;
  return 0;
}

int func1(int a, int b) {
  a++, b++;
  return a + b;
}

int func2(int &c, int &d) {
  c++, d++;
  return c + d;
}

int func3(const int &e, const int &f) {
  // e++, f++;
  return e + f;
}
