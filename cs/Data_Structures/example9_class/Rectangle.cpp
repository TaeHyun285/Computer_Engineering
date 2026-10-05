#include "Rectangle.h"
#include <iostream>

int main() {
  // 1. 객체 생성
  Rectangle r(1, 3, 6, 6);                  // 일반 객체 선언
  Rectangle s(1, 3, 6, 6);                  // r과 동일한 값을 가진 객체
  Rectangle *t = new Rectangle(0, 0, 3, 4); // 포인터를 이용한 동적 객체 생성

  // 2. 멤버 함수 기동 및 점(.), 화살표(->) 연산자 사용
  cout << "--- 면적 비교 ---" << endl;
  // 일반 객체는 점(.) 사용, 포인터 객체는 화살표(->) 사용
  if (r.GetHeight() * r.GetWidth() > t->GetHeight() * t->GetWidth()) {
    cout << "r has the greater area" << endl;
  } else {
    cout << "t has the greater area" << endl;
  }

  // 3. 연산자 다중화 확인 (==)
  cout << "\n--- 객체 동등성 비교 ---" << endl;
  if (r == s) {
    cout << "r과 s는 같은 위치와 크기를 가진 사각형입니다." << endl;
  }

  // 4. 연산자 다중화 확인 (<<)
  cout << "\n--- r 객체 정보 출력 ---" << endl;
  cout << r;

  // 동적 할당된 객체 메모리 해제
  delete t;

  return 0;
}
