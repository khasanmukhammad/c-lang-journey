#include <stdio.h>

int main() {
    int i, number[5], total;

    printf("Enter first number:\n ");
    scanf("%d", &number[1]);

    printf("Enter seond number: \n");
    scanf("%d", &number[2]);

    printf("Enter third number: \n");
    scanf("%d", &number[3]);

    printf("Enter fourth number: \n");
    scanf("%d", &number[4]);

    printf("Enter fifth number: \n");
    scanf("%d", &number[5]);

    for(i = 0; i <= 5; i++) {
        if((number[i]%2) != 0) 
        {
            total += number[i];
        }   
    }

    printf("Sum of all odd value: %d", total);
    printf("\n");
    return 0;
}