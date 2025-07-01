#include <stdio.h>
#include <math.h>

int main() {
    float a, b, result;

    printf("Enter first positive number: ");
    scanf("%f", &a);
    printf("Enter second positive number: ");
    scanf("%f", &b);

    if (a < 0 || b < 0) {
        printf("Error! Enter positive number: ");
        return 1;
    }
    result = sqrt(a * b);

    printf("Geometric mean: %f", result);

    return 0;
}