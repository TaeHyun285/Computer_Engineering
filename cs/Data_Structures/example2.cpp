#include <fstream>
#include <iostream>
using namespace std;
int main() {

  ofstream outFile("my.out", ios::out);
  if (!outFile) {
    cerr << "cannot open my.out" << endl; // 표준 오류 장치
    return 0;
  }
  int n = 50;
  float f = 20.3;
  outFile << "n: " << n << endl;
  outFile << "f: " << f << endl;

  return 0;
}
