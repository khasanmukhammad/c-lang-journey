#include <stdio.h>
int main(){
   int num1, num2, result1, result2;

   printf("Enter first number: ");
   scanf("%d", &num1);

   printf("Enter second number: ");
   scanf("%d", &num2);

   result1 = num1 + num2;
   result2 = num1 * num2;

   printf("Result of multiplication: %d\n", result1);
   printf("Result of addtion: %d\n", result2);

   return 0;

}