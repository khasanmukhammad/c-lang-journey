#include <stdio.h>
int main () {
    int x, y;

    printf("Enter value for x and  y:\n ");
    scanf("%d%d", &x, &y);
    printf("Before swaping the value of x and y: %d, %d\n", x, y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("After swaping the value of x and y: %d, %d,", x, y);

    return 0;


}