#include <iostream>
using namespace std;

int my_BinarySearch(int *a, const int x, const int n);
int BinarySearch(int *a, const int x, const int n);
int main() {
  int n = 10;
  int x = 14;
  int temp[10] = {1, 3, 4, 6, 7, 10, 12, 13, 18, 19};
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
    arr[i] = temp[i];
  // cout << my_BinarySearch(arr, x, n) << endl;
  cout << BinarySearch(arr, x, n) << endl;
  delete[] arr;
  return 0;
}
//  x가 배열안에 없으면 1 리턴, 예외처리 필요함.
int my_BinarySearch(int *a, const int x, const int n) {
  int left = 0, right = n;
  while (left < right) {
    int middle = (left + right) / 2;
    if (a[middle] == x) {
      return middle;
    } else if (middle > x) {
      right = middle - 1;
    } else {
      left = middle + 1;
    }
  }
}

int BinarySearch(int *a, const int x, const int n) {
  // Search the sorted array a[0],…,a[n-1] for x.
  int left = 0, right = n - 1;
  while (left <= right) { // there are more elements
    int middle = (left + right) / 2;
    if (x < a[middle])
      right = middle - 1;
    else if (x > a[middle])
      left = middle + 1;
    else
      return middle;
  } // end of while
  return -1; // not found
}
