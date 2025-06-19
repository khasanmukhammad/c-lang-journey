#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);    
    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Hi %s! You will turn %d next year.\n", name, age + 1);

    return 0;
}
