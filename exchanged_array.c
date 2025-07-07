#include <stdio.h>

int main() {
    int arr [10];
    int i, temp;

    for (i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }
    
    for(i = 0; i < 10 / 2; i++ ) {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }

    printf("Exchanged array: ");
    for(i = 0; i < 10; i++ ) {
        printf("%d", arr[i]);

    }

    return 0;
}