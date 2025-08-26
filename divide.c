#include <stdio.h>
int main () {
    int x , y;
    float divide_result;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    if (y != 0) {
        divide_result = x/y;
        printf("%.1f\n", divide_result);

    }
    else {
        printf ("Divide not possible \n");
    } 

    return 0;
    
}