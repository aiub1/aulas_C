#include <stdio.h>
#include <locale.h>

#define TAMANHO_DIMENSAO 2

void lerMatriz(int matriz[][TAMANHO_DIMENSAO][TAMANHO_DIMENSAO]) {
    int i, j, k;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < TAMANHO_DIMENSAO; i++) {
        for (j = 0; j < TAMANHO_DIMENSAO; j++) {
            for (k = 0; k < TAMANHO_DIMENSAO; k++) {
                printf("Elemento (%d, %d, %d): ", i + 1, j + 1, k + 1);
                scanf("%d", &matriz[i][j][k]);
            }
        }
    }
}

void exibirMatriz(const int matriz[][TAMANHO_DIMENSAO][TAMANHO_DIMENSAO]) {
    int i, j, k;

    printf("Matriz:\n");
    for (i = 0; i < TAMANHO_DIMENSAO; i++) {
        for (j = 0; j < TAMANHO_DIMENSAO; j++) {
            for (k = 0; k < TAMANHO_DIMENSAO; k++) {
                printf("%d ", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int matriz[TAMANHO_DIMENSAO][TAMANHO_DIMENSAO][TAMANHO_DIMENSAO];

    setlocale(LC_ALL, "Portuguese");

    lerMatriz(matriz);

    printf("\n");
    exibirMatriz(matriz);

    return 0;
}

