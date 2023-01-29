#include <stdio.h>

int main() {
  char string[] = "ABC";
  int ascii[sizeof(string) - 1] = {};
  int binary[sizeof(string) - 1][8] = {};
  
  for (int i = 0; i < sizeof(string); i++) {
    int num = string[i];
    ascii[i] = string[i];
  }

  for (int i = 0; i < sizeof(ascii) / 4; i++) {
    for (int num = ascii[i], j = 7; num >= 1; num = num / 2) {
      binary[i][j--] = num % 2;
    }
  }

  for (int i = 0; i < sizeof(binary) / 32; i++) {
    for (int j = 0; j < sizeof(binary[i]) / 4; j++) {
      printf("%d", binary[i][j]);
    }
    printf("\n");
  }

  return 0;
}
