#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("file.txt", "r");
    char myString[100];
    fgets(myString, 100, fptr);
    while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
    }
    fclose(fptr);
    return 0;
}