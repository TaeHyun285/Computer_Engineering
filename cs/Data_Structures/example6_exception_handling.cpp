#include <iostream>

// 나이를 확인하는 함수
void checkAge(int age) {
  if (age < 0) {
    // std::invalid_argument라는 '잘못된 인자'용 예외 객체를 던짐
    throw std::invalid_argument("나이는 음수가 될 수 없습니다.");
  }
  std::cout << "입력된 나이: " << age << "살" << std::endl;
}

int main() {
  try {
    checkAge(20); // 정상 실행됨
    checkAge(-5); // 여기서 예외가 발생(throw)하여 바로 catch로 점프함
    checkAge(30); // 윗 줄에서 에러가 났으므로 이 줄은 아예 실행되지 않음

  } catch (const std::invalid_argument &e) {
    // 던져진 예외 객체를 참조형(&)으로 잡습니다.
    // e.what() 함수를 호출하면 우리가 적어둔 에러 메시지를 꺼내볼 수 있습니다.
    std::cout << "입력 오류 처리: " << e.what() << std::endl;
  }

  return 0;
}
