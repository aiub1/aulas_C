#include <stdio.h>
#include <locale.h>

#define LINHAS 3
#define COLUNAS 3

void imprimirArray2D(int array[][COLUNAS], int linhas, int colunas) {
    int i, j;
    
    printf("Elementos do Array 2D:\n");
    
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int array2D[LINHAS][COLUNAS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    imprimirArray2D(array2D, LINHAS, COLUNAS);
    
    return 0;
}

