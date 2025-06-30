#include <stdio.h>
int main() {
    float radius, diameter;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    printf("Diameter of circle = %.2f units \n", diameter);
    
    return 0;
}
