#include <stdio.h>
#include <locale.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

void multiplicarMatrizes(const int matriz1[][MAX_COLUNAS], const int matriz2[][MAX_COLUNAS], int resultado[][MAX_COLUNAS], int linhas1, int colunas1, int colunas2) {
    int i, j, k;

    for (i = 0; i < linhas1; i++) {
        for (j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
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
    int linhas1, colunas1, linhas2, colunas2;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o número de linhas da matriz 1: ");
    scanf("%d", &linhas1);
    printf("Digite o número de colunas da matriz 1: ");
    scanf("%d", &colunas1);

    printf("Digite o número de linhas da matriz 2: ");
    scanf("%d", &linhas2);
    printf("Digite o número de colunas da matriz 2: ");
    scanf("%d", &colunas2);

    if (colunas1 != linhas2) {
        printf("As matrizes não podem ser multiplicadas.\n");
        return 0;
    }

    printf("Matriz 1:\n");
    lerMatriz(matriz1, linhas1, colunas1);

    printf("\nMatriz 2:\n");
    lerMatriz(matriz2, linhas2, colunas2);

    multiplicarMatrizes(matriz1, matriz2, resultado, linhas1, colunas1, colunas2);

    printf("\nResultado:\n");
    exibirMatriz(resultado, linhas1, colunas2);

    return 0;
}

