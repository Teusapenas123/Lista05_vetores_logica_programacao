#include <stdio.h>

int main() {
    float A[10], B[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &A[i]);

        B[i] = A[i] * A[i];
    }

    printf("\nVetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", A[i]);
    }

    printf("\n\nVetor com os quadrados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", B[i]);
    }

    printf("\n");

    return 0;
}
