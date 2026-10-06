#include <stdio.h>

int main() {
    int A[5];
    int i;
    int maior, menor;
    float soma = 0, media;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &A[i]);

        soma = soma + A[i];
    }

    maior = A[0];
    menor = A[0];

    for (i = 1; i < 5; i++) {
        if (A[i] > maior) {
            maior = A[i];
        }

        if (A[i] < menor) {
            menor = A[i];
        }
    }

    media = soma / 5;

    printf("\nValores: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }

    printf("\nMaior = %d\n", maior);
    printf("Menor = %d\n", menor);
    printf("Media = %.2f\n", media);

    return 0;
}
