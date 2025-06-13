#include <stdio.h>
union myUnion {
    int myNum;
    char myLetter;
    char myString[30];
};

int main () {
    union myUnion u1;
    u1.myNum = 1000;
    u1.myLetter = 'X';

    printf("mynum %d\n", u1.myNum);
    printf("myletter %c\n", u1.myLetter);
    
    return 0;
}
            