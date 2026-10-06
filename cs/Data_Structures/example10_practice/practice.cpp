#include "practice.h"
int main() {
  asdf r(1, 2);
  asdf *s = new asdf(3, 5);
  cout << r.getx() << endl;
  cout << r;
  cout << *s;
  return 0;
}
