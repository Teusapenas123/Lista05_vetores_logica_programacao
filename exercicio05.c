#include <stdio.h>

int main() {
    int A[10];
    int i, pares = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &A[i]);

        if (A[i] % 2 == 0) {
            pares++;
        }
    }

    printf("Quantidade de valores pares: %d\n", pares);

    return 0;
}
