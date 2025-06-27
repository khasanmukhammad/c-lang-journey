#include <stdio.h>
#include <string.h>

int main(){
    char myStr1[] = "ABCD";
    char myStr2[] = "ABCE";
    int cmp = memcmp(myStr1, myStr2, 4);

    if(cmp > 0) {
        printf("%s greater than %s\n", myStr1, myStr2);
    } else if(cmp < 0) {
        printf("%s greater than %s\n", myStr2, myStr1);
    } else {
        printf("%s is equal to %s\n", myStr1, myStr2);
    }
    return 0;
    
}