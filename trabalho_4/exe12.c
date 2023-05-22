#include <stdio.h>
#include <locale.h>

#define LINHAS 3
#define COLUNAS 3

void lerMatriz(int matriz[][COLUNAS], int linhas, int colunas) {
    int i, j;
    
    printf("Digite os elementos da matriz:\n");
    
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int encontrarMenorNumero(int matriz[][COLUNAS], int linhas, int colunas) {
    int i, j;
    int menor = matriz[0][0];
    
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    
    return menor;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int matriz[LINHAS][COLUNAS];
    int menorNumero;
    
    lerMatriz(matriz, LINHAS, COLUNAS);
    
    menorNumero = encontrarMenorNumero(matriz, LINHAS, COLUNAS);
    
    printf("O menor número da matriz é: %d\n", menorNumero);
    
    return 0;
}

