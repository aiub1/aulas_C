#include <stdio.h>
#include <locale.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

void somarMatrizes(const int matriz1[][MAX_COLUNAS], const int matriz2[][MAX_COLUNAS], int resultado[][MAX_COLUNAS], int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void lerMatriz(int matriz[][MAX_COLUNAS], int linhas, int colunas) {
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Elemento (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibirMatriz(const int matriz[][MAX_COLUNAS], int linhas, int colunas) {
    int i, j;

    printf("Matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[MAX_LINHAS][MAX_COLUNAS];
    int matriz2[MAX_LINHAS][MAX_COLUNAS];
    int resultado[MAX_LINHAS][MAX_COLUNAS];
    int linhas, colunas;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    printf("Matriz 1:\n");
    lerMatriz(matriz1, linhas, colunas);

    printf("\nMatriz 2:\n");
    lerMatriz(matriz2, linhas, colunas);

    somarMatrizes(matriz1, matriz2, resultado, linhas, colunas);

    printf("\nResultado:\n");
    exibirMatriz(resultado, linhas, colunas);

    return 0;
}

