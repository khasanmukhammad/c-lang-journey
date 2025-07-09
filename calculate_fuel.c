#include <stdio.h>
int main() {
    int x, y, result;

    printf("Enter total distance in km: ");
    scanf("%d", &x);

    printf("Enter total fuel spent in liters: ");
    scanf("%d", &y);

    result = x / y;

    printf("Average consumption (km/lt): %d\n", result);

    return 0;
}