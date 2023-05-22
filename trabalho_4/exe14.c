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

void trocarMaiorEMenor(int matriz[][COLUNAS], int linhas, int colunas) {
    int i, j;
    int maior = matriz[0][0];
    int menor = matriz[0][0];
    int indiceMaiorI = 0;
    int indiceMaiorJ = 0;
    int indiceMenorI = 0;
    int indiceMenorJ = 0;
    
    // Encontra o maior e o menor número na matriz
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                indiceMaiorI = i;
                indiceMaiorJ = j;
            }
            
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                indiceMenorI = i;
                indiceMenorJ = j;
            }
        }
    }
    
    // Troca o maior pelo menor
    int temp = matriz[indiceMaiorI][indiceMaiorJ];
    matriz[indiceMaiorI][indiceMaiorJ] = matriz[indiceMenorI][indiceMenorJ];
    matriz[indiceMenorI][indiceMenorJ] = temp;
}

void imprimirMatriz(int matriz[][COLUNAS], int linhas, int colunas) {
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
    
    int matriz[LINHAS][COLUNAS];
    
    lerMatriz(matriz, LINHAS, COLUNAS);
    
    printf("Matriz original:\n");
    imprimirMatriz(matriz, LINHAS, COLUNAS);
    
    trocarMaiorEMenor(matriz, LINHAS, COLUNAS);
    
    printf("Matriz com o maior e o menor número trocados:\n");
    imprimirMatriz(matriz, LINHAS, COLUNAS);
    
    return 0;
}

