#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");

    if (file == NULL) {
        printf("Fayl ochilmadi.\n");
        return 1;
    }

    // Fayl boshidan 4-baytga o‘tamiz (0 dan boshlanadi)
    fseek(file, 4, SEEK_SET);

    char ch = fgetc(file);  // Belgini o‘qiymiz
    printf("5-chi belgi: %c\n", ch);  // Natija: E

    fclose(file);
    return 0;
}
