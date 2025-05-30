#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, userAnswer;
    int correctAnswer;
    char op;
    int correctCount = 0;

    srand(time(NULL));  // Tasodifiy sonlar uchun

    for (int i = 0; i < 20; i++) {
        int operation = rand() % 2;  // 0 yoki 1: faqat + yoki -

        num1 = rand() % 90 + 10;  // 10-99 oralig‘ida
        num2 = rand() % 90 + 10;

        switch (operation) {
            case 0:
                correctAnswer = num1 + num2;
                op = '+';
                break;
            case 1:
                correctAnswer = num1 - num2;
                op = '-';
                break;
        }

        printf("Misol %d: %d %c %d = ", i + 1, num1, op, num2);

        if (scanf("%d", &userAnswer) != 1) {
            printf("Incorrect input! Skip next question.\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        }

        if (userAnswer == correctAnswer) {
            printf("Correct!\n");
            correctCount++;
        } else {
            printf("incorrect! correct answer: %d\n", correctAnswer);
        }
    }

    // Baholash
    printf("You answered %d/10 questions correctly \n", correctCount);

    if (correctCount >= 17)
        printf("great!\n");
    else if (correctCount >= 14)
        printf("good!\n");
    else if (correctCount >= 10)
        printf("Not Bad!\n");
    else
        printf("Bad!\n");

    return 0;
}
