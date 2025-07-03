#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    char *p;

    p = (char *)memchr(str, 'e', strlen(str));

    if (p != NULL) {
        printf("'e' harfi topildi: %s\n", p);
    } else {
        printf("'e' harfi topilmadi.\n");
    }

    return 0;
}
