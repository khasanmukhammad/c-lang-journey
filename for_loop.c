#include <stdio.h>
 
int main() {
  int number = 5;
  int i;
  
  //print the multiplication table for number 5
  for (i = 1; i <= 10; i ++) {
    printf("%d x %d = %d\n", number, i, number * i);
  }
  
  return 0;
}  