#include <stdio.h>

int main() {
  int myNumbers[] = {7, 17, 27, 37, 47, 57, 67, 77};
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
  
  printf("%d", length);
  return 0;
}