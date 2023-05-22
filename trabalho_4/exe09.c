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

void excluirNumero(int matriz[][COLUNAS], int linhas, int colunas, int numero) {
    int i, j;
    int encontrado = 0;
    
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] == numero) {
                matriz[i][j] = 0;
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }
    
    if (encontrado) {
        printf("Número %d excluído com sucesso!\n", numero);
    } else {
        printf("Número %d não encontrado na matriz.\n", numero);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int matriz[LINHAS][COLUNAS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int numero;
    
    printf("Matriz inicial:\n");
    imprimirMatriz(matriz, LINHAS);
    
    printf("Digite o número que deseja excluir: ");
    scanf("%d", &numero);
    
    excluirNumero(matriz, LINHAS, COLUNAS, numero);
    
    imprimirMatriz(matriz, LINHAS);
    
    return 0;
}

