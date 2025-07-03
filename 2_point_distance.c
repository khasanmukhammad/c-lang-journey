#include <stdio.h>
#include <math.h>

double sqrtSimple(double n) {
    double x = n;
    double step = 0.00001; 
    double i = 0;

    while (i * i <= n) {
        i += step;
    }

    return i;
}

int main() {
    double x1, y1, x2, y2, distance;

    printf("Enter the coordinate of first point (x1, y1,): ");
    scanf("%lf %lf", &x1, &x2);
    printf("Enter the coordinate of second point (x2, y2,): ");
    scanf("%lf %lf", &x2, &y2);

    distance = sqrtSimple(x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

    printf("Distance between points: %.2lf\n", distance);

    return 0;

}