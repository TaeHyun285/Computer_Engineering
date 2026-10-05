#include <iostream>
using namespace std;

int my_RecursiveBinarySearch(int *a, const int x, const int left,
                             const int right);
int RecursiveBinarySearch(int *a, const int x, const int left, const int right);
int main() {
  int n = 10;
  int x = 5;
  int temp[10] = {1, 3, 4, 6, 7, 10, 12, 13, 18, 19};
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
    arr[i] = temp[i];
  int l = 0, r = n - 1;
  // cout << my_RecursiveBinarySearch(arr, x, l, r) << endl;
  cout << RecursiveBinarySearch(arr, x, l, r) << endl;
  delete[] arr;
  return 0;
}

int my_RecursiveBinarySearch(int *a, const int x, const int left,
                             const int right) {
  int middle = (left + right) / 2;
  if (a[middle] == x)
    return middle;
  else if (a[middle] > x)
    return my_RecursiveBinarySearch(a, x, left, middle - 1);
  else
    return my_RecursiveBinarySearch(a, x, middle + 1, right);
}

int RecursiveBinarySearch(int *a, const int x, const int left,
                          const int right) {
  if (left <= right) {
    int middle = (left + right) / 2;
    if (x < a[middle])
      return RecursiveBinarySearch(a, x, left, middle - 1);
    else if (x > a[middle])
      return RecursiveBinarySearch(a, x, middle + 1, right);
    return middle;
  } // if의 끝
  return -1;
  // 발견되지 않음
}
