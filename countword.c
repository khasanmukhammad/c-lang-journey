#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    int count = 0;
    int inWord = 0;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (isspace(text[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
    }

    printf("Your text includes %d word(s)\n", count);

    return 0;
}


