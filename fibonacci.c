#include <stdio.h>

int main() {
    int n;
    int a = 0, b =1, c;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("fibonacci numbers: %d\n", n);

    if(n >= 0) printf("%d\n", a);
    if(n >= 1) printf("%d\n", b);

    c = a + b;
    while(c <= n) {
        printf("%d\n",c);
        a = b;
        b = c;
        c = a + b;
    }
     
    return 0;
}