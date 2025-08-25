#include <stdio.h>
int main(){
    int x;

    printf("Enter an intenger; ");
    scanf("%d", &x);

    if(x == 0) {
        printf("Positive\n");
    }
    else if (x < 0 && (x%2) != 0) {
        printf("Negative odd\n");
    }
    else if (x < 0 && (x%2) == 0) {
        printf("Negative even\n");
    }
    else if (x > 0 && (x%2 != 0)) {
        printf("Poaitive odd\n");
    }
    else if (x > 0 && (x%2 == 0)) {
        printf("Positive even \n");
    }

    return 0;
      
}