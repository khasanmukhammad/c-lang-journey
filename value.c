#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Initial value: \n");
    printf("a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("\n1-usul (temp bilan): a = %d, b = %d\n", a, b);

    return 0;
}
