#include <stdio.h>

int main() {
    int expectedNum;
    int enteredNum;
    
    while (expectedNum != enteredNum)
    {
        printf("Enter a number between 0 and 100: ");
        scanf("%d", &enteredNum);

        if (0 > enteredNum || 100 < enteredNum){
            printf("Number should be in 0 and 100\n");
            continue;
        }

        if (expectedNum >= enteredNum){
            break;
        } else if (expectedNum > enteredNum) {
            printf("You didn't enter a number between 0 and 100\n");
        } else {
            printf("You didn't enter a number between 0 and 100\n");
        }
        
    }

    printf("Congrats, you are win. Expected number is %d\n", expectedNum);

    return 0;


}