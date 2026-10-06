#include <stdio.h>

int main() {
    int A[6];
    int i;

    for (i = 0; i < 6; i++) {
        do {
            printf("Digite um numero par para A[%d]: ", i);
            scanf("%d", &A[i]);
        } while (A[i] % 2 != 0);
    }

    printf("\nValores na ordem inversa:\n");

    for (i = 5; i >= 0; i--) {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}
