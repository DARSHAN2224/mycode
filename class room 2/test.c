#include<stdio.h>

int countElements(int arr[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j])
        count++;
    }
  }
  return count;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Count of elements in circular form: %d", countElements(arr, n));
  return 0;
}
