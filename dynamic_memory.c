#include <stdio.h>
#include <stdlib.h>

int main() {
    int *students;
    int numStudents = 17;
    students = calloc(numStudents, sizeof(*students));
    printf("%d", numStudents * sizeof(*students));
    return 0;
}