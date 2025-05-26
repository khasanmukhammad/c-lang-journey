#include <stdio.h>

int main() {
  int answer = 1;
   
  while (answer <= 5) {
    if (answer < 5) {
       printf("True\n");
     } else {
       printf("fale!\n");
     }
     answer = answer + 1;
   }
   
   return 0;
}   