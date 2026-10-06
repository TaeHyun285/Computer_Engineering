// C311044 김태현
#include "rectangle.h"
#include <iostream>
using namespace std;
int main() {
  Rectangle r(2, 3, 4, 6), s(1, 2, 6, 6);
  Rectangle *w = new Rectangle(2, 3, 4, 5);
  // Rectangle* t = &s;
  // if (t->Equal(s)) cout << "same rectangle" << endl;

  cout << "<rectangle r> ";
  r.Print();
  cout << "<rectangle s> ";
  s.Print();
  if (r.LessThan(s))
    cout << "s is bigger";
  else if (r.EqualSize(s))
    cout << "Same Size";
  else
    cout << "r is bigger";
  cout << endl << endl;

  cout << "<rectangle r> " << r << endl;
  cout << "<rectangle s> " << s << endl;
  if (r < s)
    cout << "s is bigger";
  else if (r == s)
    cout << "Same Size";
  else
    cout << "r is bigger";
  cout << endl << endl;
  delete w;
}
