#include <stdio.h>

void printI(int i){
    if (i <= 10){
        printf("%d. Loop\n", i);
        i++;
        printI(i);
    }
}


int main() {
    printI(1);
    return 0;
}