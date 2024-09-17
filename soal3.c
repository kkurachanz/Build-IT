#include <stdio.h>
#include <math.h>

int main() {
    long long N;
    scanf("%lld", &N);

    if (N <= 1) {
        printf("BUKAN\n");
        return 0;
    } else if (N <= 3) {
        printf("PRIMA\n");
        return 0;
    }

    if (N % 2 == 0) {
        printf("BUKAN\n");
        return 0;
    }

    if (N % 3 == 0) {
        printf("BUKAN\n");
        return 0;
    }

    for (long long i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) {
            printf("BUKAN\n");
            return 0;
        }
    }

    printf("PRIMA\n");
    return 0;
}