#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]) {
  vector<int> v = {2, 3, 1, 5, 2, 1, 66, 23, 1};
  sort(v.begin(), v.end());
  for (auto i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  for (auto i = v.begin(); i < v.end(); i++) {
    cout << *i << " ";
  }
  cout << endl;
  return 0;
}
