#include <stdio.h>
#define PI 3.14

// Kvadrat ildiz olish funksiyasi
float sqrtSimple(float n) {
    float i = 0;
    float step = 0.00001; // aniqlik darajasi

    while (i * i <= n) {
        i += step;
    }

    return i;
}

int main() {
    float S, d, R;

    // Doira yuzasini kiritish
    printf("Enter the area of the circle: ");
    scanf("%f", &S);

    // Radius va diametr hisoblash (sqrt o'rniga sqrtSimple ishlatilmoqda)
    R = sqrtSimple(S / PI);
    d = 2 * R;

    // Natija chiqarish
    printf("Radius: %.2f\n", R);
    printf("Diameter: %.2f\n", d);

    return 0;
}
