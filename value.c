#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);


    printf("Initial value: \n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    int temp = a;
    a = b;
    b = c;
    c = temp;
    printf("exchanged values: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}