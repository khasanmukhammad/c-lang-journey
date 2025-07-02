#include <stdio.h>
#include <math.h>

float sqrtSimple(float n) {
    float i = 0;
    float step = 0.00001; 

    while (i * i <= n) {
        i += step;
    }

    return i;
}

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
    result = sqrtSimple(a * b);

    printf("Geometric mean: %f", result);

    return 0;
}