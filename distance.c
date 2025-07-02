#include <stdio.h>
#include <stdlib.h>

int main () {
    float x1, x2, distance;
    
    printf("Enter point x1: ");
    scanf("%f", &x1);
    printf("Enter point x2: ");
    scanf("%f", &x2);

    distance = abs(x1 - x2);

    printf("distance: %f\n", distance);

    return 0;

}