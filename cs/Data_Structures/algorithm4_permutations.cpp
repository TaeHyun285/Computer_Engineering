#include <iostream>

using namespace std;

// 작성하신 완벽한 순열 알고리즘
void Permutations(char *a, const int k, const int m) {
  if (k == m) {
    for (int i = 0; i <= m; i++)
      cout << a[i] << " ";
    cout << endl;
  } else {
    for (int i = k; i <= m; i++) {
      swap(a[k], a[i]);
      Permutations(a, k + 1, m);
      swap(a[k], a[i]); // 제자리로 돌려놓는 백트래킹(Backtracking)의 핵심!
    }
  }
}

int main() {
  // 반드시 포인터가 아닌 '수정 가능한 문자 배열' 형태로 선언해야 합니다.
  char *arr = new char[3];
  arr[0] = 'a';
  arr[1] = 'b';
  arr[2] = 'c';

  // a부터 c까지 인덱스 0~2를 넘겨줍니다.
  cout << "--- 순열 생성 결과 ---" << endl;
  Permutations(arr, 0, 2);

  return 0;
}
