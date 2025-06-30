#include <stdio.h>
#define PI 3.14
int main() {
    float r, L, S;

    printf("enter the length of radius: ");
    scanf("%f", &r);

    L = 2 * PI * r;
    S = PI * r * r;

    printf("Long of the circle: %f\n", L);
    printf("Area of the circle: %f\n", S);

    return 0;

}