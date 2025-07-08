#include <stdio.h>

int main() {
    int years, months, weeks,  days;
    
    printf("Enter days: ");
    scanf("%d", &days);

    years = days / 365;
    
    months = days /30;

    weeks = days /7;

    days = days % 7;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Remain days: %d\n", days);

    return 0;
    
}
