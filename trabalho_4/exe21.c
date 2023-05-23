#include <stdio.h>
#include <locale.h>

#define TAMANHO_MATRIZ 3

void transporMatriz(const int matriz[][TAMANHO_MATRIZ], int matrizTransposta[][TAMANHO_MATRIZ]) {
    int i, j;

    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        for (j = 0; j < TAMANHO_MATRIZ; j++) {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }
}

void exibirMatriz(const int matriz[][TAMANHO_MATRIZ]) {
    int i, j;

    printf("Matriz:\n");
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        for (j = 0; j < TAMANHO_MATRIZ; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    int matrizTransposta[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    int i, j;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        for (j = 0; j < TAMANHO_MATRIZ; j++) {
            printf("Elemento (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    transporMatriz(matriz, matrizTransposta);

    printf("\nMatriz transposta:\n");
    exibirMatriz(matrizTransposta);

    return 0;
}

