#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, perimetr;

    printf("2 ta katetni kiriting (a va b): ");
    scanf("%lf %lf", &a, &b);

    c = sqrt(a * a + b * b);
    perimetr = a + b + c;

    printf("Gipotenuza: %.2lf\n", c);
    printf("Perimetr: %.2lf\n", perimetr);

    return 0;
}
