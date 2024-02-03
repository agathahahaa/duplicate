#include <stdio.h>

int main() {

  int arr[] = {20,20,20,3,6,7,8,10,3,5,5};

  printf("Elemen duplikat: ");
  
  for (int i = 0; i < 11; i++) {
    for (int j = i + 1; j < 11; j++) {
      if (arr[i] == arr[j]) {
        printf("%d ", arr[i]);
        break;
      }
    }
  }

  return 0;
}