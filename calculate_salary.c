#include <stdio.h>

int main(){
    char id [10];
    int hour;
    double value, salary;

    printf("Enter employee ID: ");
    scanf("%s", &id);

    printf("Enter th working hour: ");
    scanf("%d", &hour);

    printf("Enter the salary amount/hour: ");
    scanf("%lf", &value);

    salary = value * hour;

    printf("\nEmployees ID = %s\nSalary = U$ %.2lf\n", id, salary);

    return 0;
}