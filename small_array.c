#include <stdio.h>
int main() {
    int x, y, small, position;

    printf("Enter the length of array: ");
    scanf("%d", &x);

    int arr[x];

    printf("Enter the array elements: \n");
    for (y = 0; y < x; y++ ) {
        scanf("%d", &arr[y]);

    }

    small = arr[0];
    position = 0;

    for (y = 0; y < x; y++) {
        if(small >arr[y]){
            small = arr[y];
            position = y;
        }
    }

    printf("Small array: %d\n", small);
    printf("Position of elements: %d\n", position);

    return 0;
}