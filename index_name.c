#include <stdio.h>
#include <string.h>

void printArray(char name[]) {
    int length = strlen(name);
    for (int i = 0; i < length; ++i) {
        printf("%d, %c\n", i, name[i]);
    }
}

int main() {
    char myName[10];

    printf("Enter up to 10 chars (without spaces): \n");
    scanf("%10s", myName);  // Limit input to avoid overflow

    printArray(myName);

    return 0;
}
