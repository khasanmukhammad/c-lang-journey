#include <stdio.h>
int main(){
    float a, b, S, M, a_square, b_square;

    printf("Enter first number (a): ");
    scanf("%f", &a);
    printf("Enter second number (b): ");
    scanf("%f", &b);

    S = a + b;
    M = a * b;
    a_square = a * a;
    b_square = b * b;

    printf("Sum of numbers: %f\n", S);
    printf("Multipication if numbers: %f\n", M);
    printf("a square: %f\n", a_square);
    printf("b square: %f\n", b_square);

    return 0;
}