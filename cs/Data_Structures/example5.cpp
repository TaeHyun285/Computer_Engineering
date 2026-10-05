#include <iostream>
int main() {
  // 단일 변수 동적 할당
  int *ip = new int;
  std::cout << *ip;
  delete ip;

  // 배열 형태의 동적 할당
  int size;
  std::cin >> size;
  int *jp = new int[size];
  for (int k = 0; k < size; k++)
    jp[k] = k;
  for (int k = 0; k < size; k++)
    std::cout << jp[k] << std::endl;
  delete[] jp;

  return 0;
}
