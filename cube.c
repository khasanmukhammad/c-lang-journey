#include <stdio.h>
int main() {
    float a, volume, surface;
    
    printf("Enter the length of a: ");
    scanf("%f", &a);

    volume = a * a * a;
    surface = 6 * a * a;

    printf("Volume of the cube: %f\n", volume);
    printf("surface of the cube: %f\n", surface);

    return 0;
}