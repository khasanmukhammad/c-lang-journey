#include <stdio.h>

int main() {
    FILE *fptr;
    
    fptr = fopen("./file.txt","a");
    fprintf(fptr, "\n I am 16 years old");

    fclose(fptr);
    return 0;
}