// C311044 김태현

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool myfunction(int i, int j) { return (i > j); }

struct myclass {
  bool operator()(int i, int j) { return (i < j); }
} myobject;

int main() {
  int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};

  vector<int> myvector(myints, myints + 8); // 32 71 12 45 26 80 53 33
  vector<int>::iterator it; // using default comparison (operator <):

  cout << "myvector initial values:";
  for (it = myvector.begin(); it != myvector.end(); ++it)
    cout << " " << *it;
  cout << endl;

  // sort(myvector.begin(), myvector.begin() + 4); //(12 32 45 71)26 80 53 33
  // using function as comp

  sort(myvector.begin() + 3, myvector.begin() + 7, myfunction);
  // using object as comp
  cout << "myvector [3,7) sorted in decreasing order:";
  for (it = myvector.begin(); it != myvector.end(); ++it)
    cout << " " << *it;
  cout << endl;
  cout << endl;

  sort(myvector.begin(), myvector.end(), myobject); //(12 26 32 33 45 53 71 80)
  // print out content:
  cout << "myvector contains:";
  for (it = myvector.begin(); it != myvector.end(); ++it)
    cout << " " << *it;
  cout << endl;

  return 0;
}
