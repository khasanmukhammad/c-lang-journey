#include <stdio.h>
int main() {
    int x, y, c, max;

    printf("Enter first number (x): ");
    scanf("%d", &x);

    printf("Enter second number (y): ");
    scanf("%d", &y);

    printf("Enter third number (c): ");
    scanf("%d", &c);
 
    if( x >= y && x >= c) 
        max = x;
    else if (y >= x && y >= c)
        max =y;
    else if (c >= x && c >= y)
        max = c;

    printf("Max number: %d\n", max);

    return 0;
}