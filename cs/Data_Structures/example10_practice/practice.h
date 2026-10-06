#include <iostream>
#include <ostream>
using namespace std;
class asdf {
private:
  int xlow, ylow;

public:
  asdf(const int x = 0, const int y = 0) : xlow(x), ylow(y) {};
  ~asdf() {};
  int getx() { return xlow; }
  int gety() { return ylow; }
  friend ostream &operator<<(ostream &os, asdf &sumt);
};

ostream &operator<<(ostream &os, asdf &sumt) {
  os << sumt.xlow << "," << sumt.ylow << endl;
  return os;
}
