#include <stdio.h>

int main() {
    float A[10];
    int i;
    int negativos = 0;
    float somaPositivos = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &A[i]);

        if (A[i] < 0) {
            negativos++;
        }

        if (A[i] > 0) {
            somaPositivos = somaPositivos + A[i];
        }
    }

    printf("Quantidade de negativos = %d\n", negativos);
    printf("Soma dos positivos = %.2f\n", somaPositivos);

    return 0;
}
