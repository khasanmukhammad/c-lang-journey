#include <stdio.h>

int main() {
    int answerNum = 77;
    int enteredNum;

    while (1) {
        printf("37 + 40: ");

        if (scanf("%d", &enteredNum) != 1) {
            printf("Please entere number. Try again!\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);

            continue; 
        }

        typeof(enteredNum) userInput = enteredNum;

        if (userInput == answerNum) {
            printf("Congrats, your answer is correct. Answer number is %d\n", answerNum);
            break;
        } else if (userInput < answerNum) {
            printf("Too low. Try again.\n");
        } else {
            printf("Too high. Try again.\n");
        }
    }

    return 0;
}
