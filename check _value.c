#include <stdio.h>
int main () {
    int a, b, c, x, y;

    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    printf("Enter the third value: ");
    scanf("%d", &c);
    printf("Enter the fourth value: ");
    scanf("%d", &x);
    printf("Enter the fifth value: ");
    scanf("%d", &y);

    if (a > b && a > c && a > x && a > y ){
        printf("The highest value is %d", a);
    }
    else if (b > a && b > c && b > x && b > y){
        printf("The highest value is %d", b);
    }
    else if (c > a && c > b && c > x && c > y){
        printf("The highest value is %d", c);
    }
    else if (x > a && x > b && x > c && y) {
        printf("The highest value is %d", x);
    }
    else if (y > a && y > b && y > c && y > x) {
        printf("The highest value is %d", y);
    }

    return 0;
        
}