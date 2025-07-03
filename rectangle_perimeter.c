#include <stdio.h>
#include <stdlib.h>  
int main() {
    int x1, y1, x2, y2;
    int length, high, area, perimeter;

    printf("Enter the coordinates of first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    length = abs(x2 - x1);
    high = abs(y2 - y1);

    area = length * high;
    perimeter = 2 * (length + high);

    printf("To'g'ri to'rtburchakning yuza: %d\n", area);
    printf("To'g'ri to'rtburchakning perimetr: %d\n", perimeter);

    return 0;
}
