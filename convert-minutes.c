#include <stdio.h>

int main() {
    int minute;
    int second;

    printf("Enter minute!");
    scanf("%d", &minute);

    second = minute * 60;
    printf("%d minute = %d second\n",minute, second);
    
    return 0;


}