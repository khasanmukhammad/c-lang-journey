#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    arr = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}