#include <stdio.h>

int main() {
  int sum1 = 70 + 80; // 150 (70 + 80)
  int sum2 = sum1 * 7; // 1050 (150 * 7)
  int sum3 = sum2 / sum1; // 7 (1050 / 150)
  printf("%d\n", sum1);
  printf("%d\n", sum2);
  printf("%d\n", sum3);
  return 0;
}