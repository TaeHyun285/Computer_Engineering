#include "practice.h"
int main() {
  Prctice r(1, 2);
  Prctice k(3, 4);
  Prctice *s = new Prctice(1, 3);
  cout << r.getx() << endl;
  cout << *s;
  cout << (r == k) << endl;
  cout << (r == *s) << endl;
  cout << (r == r) << endl;
  return 0;
  ;
}
