#include <stdio.h>
#include <locale.h>

#define TAMANHO_MATRIZ 10

int verificaDuplicado(int matriz[], int tamanho) {
    int i, j;
    
    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (matriz[i] == matriz[j]) {
                return 1;
            }
        }
    }
    
    return 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int matriz[TAMANHO_MATRIZ];
    int i;
    
    printf("Digite os elementos de uma matriz de 10 itens e com números inteiros:\n");
    
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        scanf("%d", &matriz[i]);
    }
    
    if (verificaDuplicado(matriz, TAMANHO_MATRIZ)) {
        printf("A matriz contém um número duplicado.\n");
    } else {
        printf("A matriz não contém números duplicados.\n");
    }
    
    return 0;
}

