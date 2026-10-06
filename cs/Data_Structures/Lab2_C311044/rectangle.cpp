#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int x, int y, int h, int w)
    : xLow(x), yLow(y), height(h), width(w) {}
Rectangle::~Rectangle() {}
void Rectangle::Print() { // 위에 제시된 출력창의 포맷에 맞게 출력할 수 있도록
                          // 구성
  cout << "xLow: " << xLow << ", yLow: " << yLow;
  cout << ", height: " << height << ", width: " << width;
  cout << endl;
}
int Rectangle::Area() { // 면적값을 산출하여 반환하기
  return width * height;
}
bool Rectangle::LessThan(
    Rectangle &s) { // 사각형의 면적(Area())이 작은 경우 작은 사각형으로 결정
  if (Area() < s.Area())
    return true;
  else
    return false;
}
bool Rectangle::Equal(Rectangle &s) { // 교재 내용: 위치, 넓이, 높이 모두 같아야
                                      // 동일한 사각형으로 결정
  if (this == &s)
    return true;
  if ((xLow == s.xLow) && (yLow == s.yLow) && (height == s.height) &&
      (width == s.width))
    return true;
  else
    return false;
}
int Rectangle::GetHeight() { return height; }
int Rectangle::GetWidth() { return width; }

bool Rectangle::EqualSize(Rectangle &s) { return this->Area() == s.Area(); }

ostream &operator<<(ostream &os, Rectangle &s) {
  os << "xLow: " << s.xLow << ", yLow: " << s.yLow;
  os << ", height :" << s.height << ", width: " << s.width;
  return os;
}
bool Rectangle::operator<(Rectangle &s) {
  if (Area() < s.Area())
    return true;
  else
    return false;
}
bool Rectangle::operator==(Rectangle &s) {
  if (this == &s)
    return true;
  if ((xLow == s.xLow) && (yLow == s.yLow) && (height == s.height) &&
      (width == s.width))
    return true;
  else
    return false;
}
