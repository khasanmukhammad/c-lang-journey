#include <stdio.h>

int main() {
    int age;

    printf("Enter your age to register: \n");
    scanf("%d", &age);

    if(age >= 18)
        printf("Your age enough to register! \n");
     else if(age < 18)
        printf("Your age is not enough to register! \n");

    return 0;    
    
}