#include <stdio.h>
#include <math.h>

double sqrtSimple(double n) {
    double x = n;
    double step = 0.00001; // aniqlik
    double i = 0;

    while (i * i <= n) {
        i += step;
    }

    return i;
}


int main() {
    double a, b, c, perimetr;

    printf("2 ta katetni kiriting (a va b): ");
    scanf("%lf %lf", &a, &b);

    c = sqrtSimple(a * a + b * b);
    perimetr = a + b + c;

    printf("Gipotenuza: %.2lf\n", c);
    printf("Perimetr: %.2lf\n", perimetr);

    return 0;
}
