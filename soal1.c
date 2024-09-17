#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N); 
    int nilai[N]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]); 
    }

    
    for (int i = 1; i < N; i++) {
        int key = nilai[i];
        int j = i - 1;
        while (j >= 0 && nilai[j] > key) {
            nilai[j + 1] = nilai[j];
            j = j - 1;
        }
        nilai[j + 1] = key;
    }

    for (int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }

    return 0;
}

