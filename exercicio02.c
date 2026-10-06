#include <stdio.h>

int main() {
    int A[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nValores lidos:\n");

    for (i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}
