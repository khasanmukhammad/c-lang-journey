#include <stdio.h>

int main(){
    int a, a2, a3, a5, a10, a15;

    printf("Enter a: ");
    scanf("%d", &a);

    a2 = a * a;
    a3 = a * a * a;
    a5 = a3 * a * a;
    a10 = a5 * a5;
    a15 = a5 * a5 * a5;
    
    printf("a2 = %d\n", a2);
    printf("a3 = %d\n", a3);
    printf("a5 = %d\n", a5);
    printf("a10 = %d\n", a10);
    printf("a15 = %d\n", a15);

    return 0;
}