#include <stdio.h>
int main() {
    float a, b, c, volume, surface;

    printf("Entern the length of a: ");
    scanf("%f", &a);

    printf("Entern the length of b: ");
    scanf("%f", &b);

    printf("Entern the length of c: ");
    scanf("%f", &c);

    volume = a * b * c;
    surface = 2 * (a+b+b * c+a+c);
    
    printf("Volume of the parallelepiped: %f\n", volume);
    printf("Surface of the parallelepiped: %f\n", surface);
    
    return 0;
}

