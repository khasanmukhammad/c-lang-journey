#include <stdio.h>
int main() {
    int a, b, perimeter, area;

    printf("Enter the length of side a: ");
    scanf("%d", &a);
    printf("Enter the length of side b: ");
    scanf("%d",&b);
    
    perimeter = 2 * (a + b);
    printf("perimeter of the rectangle: %d\n", perimeter);

    area = a * b;
    printf("Area of the rectangle; %d\n", area);

    return 0;
}