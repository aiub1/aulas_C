#include <stdio.h>
#include <locale.h>

#define TAMANHO_DIMENSAO 2

void exibirMatriz(int matriz[TAMANHO_DIMENSAO][TAMANHO_DIMENSAO][TAMANHO_DIMENSAO]) {
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
    int matriz[TAMANHO_DIMENSAO][TAMANHO_DIMENSAO][TAMANHO_DIMENSAO] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    int (*ponteiroMatriz)[TAMANHO_DIMENSAO][TAMANHO_DIMENSAO];

    setlocale(LC_ALL, "Portuguese");

    ponteiroMatriz = matriz;

    exibirMatriz(ponteiroMatriz);

    return 0;
}

