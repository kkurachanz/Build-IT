#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char A[101], B[101];

    scanf("%s %s", A, B);

    if (strlen(A) != strlen(B)) {
        printf("BERBEDA\n");
    } else {
        if (strcmp(A, B) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }

    return 0;
}