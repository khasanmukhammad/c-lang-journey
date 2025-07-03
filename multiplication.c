#include <stdio.h>

int main() {
    int A, B, C;
    int AC, BC, multiplication;

    printf("Enter the value of point A: ");
    scanf("%d", &A);
    printf("Enter the value of point B: ");
    scanf("%d", &B);
    printf("Enter the value of point C: ");
    scanf("%d", &C);

    AC = (A - C);
    BC = (B- C);
    multiplication = AC * BC;

    printf("AC: %d\n", AC);
    printf("BC: %d\n", BC);
    printf("Multiplication: %d\n", multiplication);

    return 0;
}
