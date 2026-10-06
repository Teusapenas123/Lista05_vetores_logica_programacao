#include <stdio.h>

int main() {
    int A[10];
    int i;
    int maior, posicao;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    maior = A[0];
    posicao = 0;

    for (i = 1; i < 10; i++) {
        if (A[i] > maior) {
            maior = A[i];
            posicao = i;
        }
    }

    printf("\nVetor:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }

    printf("\nMaior elemento = %d\n", maior);
    printf("Posicao = %d\n", posicao);

    return 0;
}
