#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
  cout << "Hello world" << endl;
  // enum
  enum semester { SPRING, SUMMER, FALL, WINTER };
  cout << SUMMER << FALL << SPRING << WINTER << endl;

  // Pointer
  int i = 25;
  int *np = &i;

  // Reference
  int a = 5;
  int &j = a;
  a = 7;
  cout << j << endl;

  // const reference
  const int &k = a;
  a = 8;
  // k++
  cout << k << endl;
  cout << typeid(semester).name() << endl;
  return 0;
}
