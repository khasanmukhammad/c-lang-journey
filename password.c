#include <stdio.h>
int main() {
    int x = 10, password;

    while (x != 0) {
        printf("enter the password! \n");
        scanf("%d", &password);

        if (password == 1234) {
            printf("Correct password");
            x = 0;
        }

        else {
            printf("Wrong password ! ");
        }
        
    }
    return 0;
}