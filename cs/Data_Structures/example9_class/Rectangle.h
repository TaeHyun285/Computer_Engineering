#include <iostream>
using namespace std;

class Rectangle {
private:
  int xLow, yLow, height, width;

public:
  // 생성자 (멤버 초기화 리스트 사용)
  Rectangle(int x = 0, int y = 0, int h = 0, int w = 0)
      : xLow(x), yLow(y), height(h), width(w) {}

  // 파괴자
  ~Rectangle() {
    // 동적 할당된 메모리가 없으므로 비워둡니다.
  }

  // 멤버 함수
  int GetHeight() { return height; }
  int GetWidth() { return width; }

  // 연산자 다중화 (동등성 검사)
  bool operator==(const Rectangle &s) {
    if (this == &s)
      return true; // 동일 객체인지 비교
    if ((xLow == s.xLow) && (yLow == s.yLow) && (height == s.height) &&
        (width == s.width))
      return true;
    else
      return false;
  }

  // 연산자 다중화 (출력 연산자) - private 멤버 접근을 위해 friend 선언
  friend ostream &operator<<(ostream &os, Rectangle &r);
};

// 출력 연산자(<<) 다중화 구현
ostream &operator<<(ostream &os, Rectangle &r) {
  os << "Position is: " << r.xLow << " " << r.yLow << endl;
  os << "Height is: " << r.height << endl;
  os << "Width is: " << r.width << endl;
  return os;
}
