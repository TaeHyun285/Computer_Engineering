#include <iostream>
using namespace std;
void my_SelectionSort(int *a, const int n);
void SelectionSort(int *a, const int n);

int main() {
  int n;
  int temp[10] = {8, 10, 5, 1, 3, 1, 3, 4, 2, 6};
  // cin >> n;
  n = 10;
  int *arr = new int[n];

  for (int i = 0; i < n; i++) {
    arr[i] = temp[i];
  }

  SelectionSort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
  delete[] arr;
  return 0;
}

void my_SelectionSort(int *a, const int n) {
  // a[i]에서부터 a[n-1]까지의 정수 값을 검사한 결과 a[j]가 가장 작은 값 a[i]와
  // a[j]를 서로 교환;
  for (int i = 0; i < n; i++) {
    int min = a[i];
    int min_index = i;
    for (int j = i; j < n; j++) {
      if (min > a[j]) {
        min = a[j];
        min_index = j;
      }
    }
    swap(a[i], a[min_index]);
  }
}

void SelectionSort(int *a, const int n) {
  // n개의 정수 a[0]부터 a[n-1]까지 비감소 순으로 정렬한다.
  for (int i = 0; i < n; i++) {
    int j = i;
    // a[i]와 a[n-1] 사이에 가장 작은 정수를 찾는다.
    for (int k = i + 1; k < n; k++) {
      if (a[k] < a[j])
        j = k;
    }
    swap(a[i], a[j]);
  }
}
