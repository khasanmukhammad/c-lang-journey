#include <stdio.h>

int main() {
    int a, b, c, P;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");    
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    P = a + b + c;

    printf("Perimeter: %d\n", P);

    return 0;
}