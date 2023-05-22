#include <stdio.h>
#include <locale.h>

#define LINHAS 3
#define COLUNAS 3

void exibirMatriz(int matriz[][COLUNAS], int linhas, int colunas) {
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
    setlocale(LC_ALL, "Portuguese");
    
    int matriz[LINHAS][COLUNAS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    exibirMatriz(matriz, LINHAS, COLUNAS);
    
    return 0;
}

