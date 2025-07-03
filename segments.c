#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C;
    int AC, BC, sum;

    printf("Enter the value of points A: ");
    scanf("%d", &A);
    printf("Enter the value of points B: ");
    scanf("%d", &B);
    printf("Enter the value of points C: ");
    scanf("%d", &C);

    AC = (A - C);
    BC = (B - C);
    sum = AC + BC;

    printf("Length of segment AC: %d\n", AC);
    printf("Length of segment BC: %d\n", BC);
    printf("Sum of segments: %d\n", sum);

    return 0;
}