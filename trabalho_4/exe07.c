#include <stdio.h>
#include <locale.h>

#define LINHAS 3
#define COLUNAS 3

void imprimirMatriz(int matriz[][COLUNAS], int linhas) {
    int i, j;
    
    printf("Matriz:\n");
    
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void inserirNumero(int matriz[][COLUNAS], int linha, int coluna, int numero) {
    matriz[linha][coluna] = numero;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
	int matriz[LINHAS][COLUNAS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int linha, coluna, numero;
    
    printf("Matriz inicial:\n");
    imprimirMatriz(matriz, LINHAS);
    
    printf("Digite a coluna [0-2] em que deseja inserir o número: ");
    scanf("%d", &linha);
    
    printf("Digite a linha [0-2] em que deseja inserir o número: ");
    scanf("%d", &coluna);
    
    printf("Digite o número que deseja inserir: ");
    scanf("%d", &numero);
    
    if (linha >= 0 && linha < LINHAS && coluna >= 0 && coluna < COLUNAS) {
        inserirNumero(matriz, linha, coluna, numero);
        printf("Número inserido com sucesso!\n");
        imprimirMatriz(matriz, LINHAS);
    } else {
        printf("Posição inválida na matriz.\n");
    }
    
    return 0;
}

