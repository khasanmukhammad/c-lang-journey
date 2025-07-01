#include <stdio.h>
#define PI 3.14

int main() {
    float L, r, S;

    printf("Enter te length of circle: ");
    scanf("%f", &L);

    r= L/(2 * PI);
    S= PI * r * r;

    printf("Radius: %f\n", r);
    printf("Area: %f\n", S);

    return 0;
}
