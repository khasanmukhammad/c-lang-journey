#include <stdio.h>
int main () {
    int a, area;
    
    printf("Enter the length of side a: ");
    scanf("%d", &a);

    area = a * a;
    printf("Area of the square: %d\n", area);

    return 0;
}
