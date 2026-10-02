#include <iostream>
using namespace std;
int Max(int, int);
int Max(int, int, int);
int Max(int *, int);
int Max(float, int);
int Max(int, float);

int main() {
  int i = 2 + 4;
  cout << i << endl;
  return 0;
}

inline int Sum(int a, int b) { return a + b; }
