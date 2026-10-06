#include <stdio.h>

int main() {
    int A[8];
    int i, X, Y;

    for (i = 0; i < 8; i++) {
        printf("Digite A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite a posicao X (0 a 7): ");
    scanf("%d", &X);

    printf("Digite a posicao Y (0 a 7): ");
    scanf("%d", &Y);

    printf("Soma = %d\n", A[X] + A[Y]);

    return 0;
}
