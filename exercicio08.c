#include <stdio.h>

int main() {
    int A[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nValores na ordem inversa:\n");

    for (i = 5; i >= 0; i--) {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}
