#include <stdio.h>
int main() {
    int x, i;

    printf("Enter an intenger: ");
    scanf("%d", &x);

    printf("All the divisors %d are: \n" , x );
    
    for (i = 1; i <= x; i++)
    {
        if((x%i) == 0){
            printf("%d\n", i);
           
        }
    }
    
    return 0;
}