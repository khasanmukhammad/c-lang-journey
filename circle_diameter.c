#include <stdio.h>
#define PI 3.14

float sqrtSimple(float n) {
    float i = 0;
    float step = 0.00001;

    while (i * i <= n) {
        i += step;
    }

    return i;
}

int main() {
    float S, d, R;

    printf("Enter the area of the circle: ");
    scanf("%f", &S);

    R = sqrtSimple(S / PI);
    d = 2 * R;

    printf("Radius: %.2f\n", R);
    printf("Diameter: %.2f\n", d);

    return 0;
}
