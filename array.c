#include <stdio.h>
int main() {
    int arr[5], x, y;

    printf("Enter the first array: \n");
    scanf("%d", &y);

    for(x = 0; x < 5; x++) {
        arr[x] = y;
        y = 3 * y;

         printf("arr[%d] = %d\n", x, arr[x]);
    }
    return 0;
}