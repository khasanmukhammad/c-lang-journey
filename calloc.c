#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nechta foydalanuvchi uchun ball kerak? ");
    scanf("%d", &n);

    int *ballar = calloc(n, sizeof(int));
    if (ballar == NULL) {
        printf("Xotira ajratilmadi!\n");
        return 1;
    }

    printf("\nBarcha ballar hozircha 0:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ballar[i]);
    }
    printf("\n");

    int index, ball;
    printf("\nQaysi indeksga ball qo‘ymoqchisiz (0 dan %d gacha)? ", n - 1);
    scanf("%d", &index);
    printf("Ball kiriting: ");
    scanf("%d", &ball);
    ballar[index] = ball;

    printf("\nYangi holat:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ballar[i]);
    }
    printf("\n");

    free(ballar); // xotirani ozod qilish
    return 0;
}
