#include <stdio.h>
int main () {
    int a, b;

    printf("Enter an intenger: ");
    scanf("%d", &a);
    printf("Before shifting the number: %d\n", a);

    a <<= 2;
    b = a;

    printf("After shift the number to the left: %d\n", b);

    return 0;
}