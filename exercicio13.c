#include <stdio.h>

int main() {
    int A[5];
    int i;
    int maior, menor;
    int posMaior, posMenor;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    maior = A[0];
    menor = A[0];
    posMaior = 0;
    posMenor = 0;

    for (i = 1; i < 5; i++) {
        if (A[i] > maior) {
            maior = A[i];
            posMaior = i;
        }

        if (A[i] < menor) {
            menor = A[i];
            posMenor = i;
        }
    }

    printf("Posicao do maior valor: %d\n", posMaior);
    printf("Posicao do menor valor: %d\n", posMenor);

    return 0;
}
