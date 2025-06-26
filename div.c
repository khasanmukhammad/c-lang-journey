#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 27;
    int y = 5;

    div_t result = div(x, y);

    printf("%d / %d = %d (qoldiq: %d)\n", x, y, result.quot, result.rem);

    return 0;
}
