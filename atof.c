#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[20];

    printf("Haqiqiy son kiriting: ");
    scanf("%s", input);

    double num = atof(input);

    printf("Siz kiritgan son: %f\n", num);

    return 0;
}
