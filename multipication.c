#include <stdio.h>

int main() {
    int son;
    int kopaytma = 1;
    int raqam;

    printf("4 xonali son kiriting: ");
    scanf("%d", &son);

    // Son 4 xonali bo'lishi shart
    if (son < 1000 || son > 9999) {
        printf("Iltimos, faqat 4 xonali son kiriting.\n");
        return 1; // Dasturni to'xtatamiz
    }

    while (son > 0) {
        raqam = son % 10;         
        kopaytma *= raqam;       
        son = son / 10;           
    }

    printf("Raqamlar ko‘paytmasi: %d\n", kopaytma);

    return 0;
}
