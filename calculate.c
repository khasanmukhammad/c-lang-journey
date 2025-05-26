#include <stdio.h>


int sumNums(int num1, int num2) {
    return num1 + num2;
}


int main() {
  
   int num1, num2;

   printf("Enter first value: ");
   scanf("%d", &num1);

   printf("Enter second value: ");
   scanf("%d", &num2);

   int result = sumNums(num1, num2);

   printf("Result: %d\n", result);

   return 0;

}