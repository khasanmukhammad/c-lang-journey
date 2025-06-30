#include <stdio.h>

int main() {
    int a, perimeter;

    printf("Enter the length of side a:");
    scanf("%d", &a);

    perimeter = 4 * a;
    printf("perimeter of the square: %d\n", perimeter);
    
    return 0;
}