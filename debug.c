#include <stdio.h>

#define DEBUG

int main() {
#ifdef DEBUG
    printf("DEBUG rejimi ishlamoqda\n");
#endif

    printf("Dasturni boshladik\n");
    return 0;
}
