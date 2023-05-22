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

void inserirNumeroOrdenado(int matriz[][COLUNAS], int linhas, int colunas, int numero) {
    int i, j;
    int linhaInsercao = -1, colunaInsercao = -1;
    
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (numero <= matriz[i][j]) {
                linhaInsercao = i;
                colunaInsercao = j;
                break;
            }
        }
        if (linhaInsercao != -1) {
            break;
        }
    }
    
    for (i = linhas - 1; i > linhaInsercao; i--) {
        for (j = colunas - 1; j > colunaInsercao; j--) {
            matriz[i][j] = matriz[i-1][j-1];
        }
    }
    
    matriz[linhaInsercao][colunaInsercao] = numero;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int matriz[LINHAS][COLUNAS] = {{1, 2, 4}, {5, 6, 8}, {9, 10, 12}};
    int numero;
    
    printf("Matriz inicial:\n");
    imprimirMatriz(matriz, LINHAS);
    
    printf("Digite o número que deseja inserir: ");
    scanf("%d", &numero);
    
    inserirNumeroOrdenado(matriz, LINHAS, COLUNAS, numero);
    
    printf("Número inserido com sucesso!\n");
    imprimirMatriz(matriz, LINHAS);
    
    return 0;
}
