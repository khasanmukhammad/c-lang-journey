#include <stdio.h>

int main() {
    int answerNum = 77;
    int enteredNum;

    while (1) {
        printf("37 + 40: ");
        scanf("%d", &enteredNum);

        if (enteredNum == answerNum) {
            printf("Congrats, your answer is correct. Answer number is %d\n", answerNum);
            break;
        } else if (enteredNum < answerNum) {
            printf("Too low. Try again.\n");
        } else {
            printf("Too high. Try again.\n");
        }
    }

    return 0;
}