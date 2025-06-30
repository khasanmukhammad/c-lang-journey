#include <stdio.h>
int main(){
    float a, b, result;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    result = (a + b) /2;

    printf("Arithmetic mean: %f\n", result);

    return 0;
}