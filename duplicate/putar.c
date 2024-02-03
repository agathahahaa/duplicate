#include <stdio.h>

int main() {

  int arr[] = {2, 4, 6, 8, 10, 12};
  int target = 16;
  
  printf("Pasangan angka dengan jumlah %d:\n", target);

  for (int i = 0; i < 6; i++) {
    for (int j = i + 1; j < 6; j++) {
      if (arr[i] + arr[j] == target) {
        printf("%d + %d\n", arr[i], arr[j]); 
      }
    }
  }

  return 0;
}