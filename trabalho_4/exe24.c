#include <stdio.h>
#include <locale.h>

#define MAX_DIMENSAO 100

void preencherMatriz(int matriz[][MAX_DIMENSAO], int dimensao) {
    int i, j;

    for (i = 0; i < dimensao; i++) {
        for (j = 0; j < dimensao; j++) {
            if (i == j) {
                matriz[i][j] = 0; // Diagonal principal
            } else if (i < j) {
                matriz[i][j] = 1; // Triângulo superior direito
            } else {
                matriz[i][j] = -1; // Triângulo inferior esquerdo
            }
        }
    }
}

void exibirMatriz(const int matriz[][MAX_DIMENSAO], int dimensao) {
    int i, j;

    printf("Matriz:\n");
    for (i = 0; i < dimensao; i++) {
        for (j = 0; j < dimensao; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[MAX_DIMENSAO][MAX_DIMENSAO];
    int dimensao;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a dimensão da matriz quadrada: ");
    scanf("%d", &dimensao);

    preencherMatriz(matriz, dimensao);

    printf("\nMatriz preenchida:\n");
    exibirMatriz(matriz, dimensao);

    return 0;
}

