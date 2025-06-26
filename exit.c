#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr = fopen("practice.txt", "r");

    if(fptr == NULL) {
        printf("File cant not be opened. The programmis stopping\n");
        exit(1);

    }
    printf("file opened \n");
    fclose(fptr);
    return 0;
}