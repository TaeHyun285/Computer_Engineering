#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main() {
  vector<int> v = {1, 2, 3, 4};
  // accumulate 예시
  cout << accumulate(v.begin(), v.end(), 0) << endl;

  // copy 예시
  int oldSize = 3;
  // 1. 기존 데이터가 들어있는 작은 배열
  int *oldArr = new int[oldSize]{10, 20, 30};

  // 2. 크기를 늘린 새로운 빈 배열 생성 (크기 5)
  int newSize = 5;
  int *newArr = new int[newSize];

  // 3. 기존 배열의 데이터를 새 배열로 통째로 복사
  // oldArr(시작 주소)부터 oldArr + 3(끝 주소)까지를 newArr(도착지 시작 주소)에
  // 복사
  copy(oldArr, oldArr + oldSize, newArr);

  // 4. 새 배열의 남은 빈 공간에 새 데이터 추가
  newArr[3] = 40;
  newArr[4] = 50;

  // 결과 확인
  cout << "확장된 새 배열: ";
  for (int i = 0; i < newSize; i++) {
    cout << newArr[i] << " ";
  }
  cout << endl; // 출력: 10 20 30 40 50

  // 5. 메모리 정리 (이사했으므로 예전 집은 철거)
  delete[] oldArr;
  delete[] newArr;

  return 0;
}
