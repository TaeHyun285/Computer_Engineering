#include <iostream>
#include <ostream>
#include <queue>
using namespace std;
class Prctice {
private:
  int xlow, ylow;

public:
  Prctice(const int x, const int y) : xlow(x), ylow(y) {};
  ~Prctice() {
    // later
  }
  int getx() { return xlow; }
  int gety() { return ylow; }
  friend ostream &operator<<(ostream &os, const Prctice &som);
  bool operator==(const Prctice &wak) {
    if (this == &wak) {
      return true;
    } else if (this->xlow == wak.xlow && ylow == wak.ylow) {
      return true;
    } else
      return false;
  }
};
ostream &operator<<(ostream &os, const Prctice &som) {
  os << som.xlow << "," << som.ylow << endl;
  return os;
}
