#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[] ="1234567890abc";

    long long int num = atoll(str);

    printf("result: %d\n", num);

    return 0;
}