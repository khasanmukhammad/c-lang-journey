#include <stdio.h> 

#define INCH_TO_CM 2.54

int main() {
    double inch, cm;

    printf("Enter the cm:\n");
    scanf("%lf", &cm);

    inch = cm / INCH_TO_CM;

    printf("%0.2lf cms = %0.2lf inches\n", cm, inch);

    return 0;
}
