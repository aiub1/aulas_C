#include <stdio.h>
#include <locale.h>

void imprimirArray(int array[], int tamanho) {
    int i;
    
    printf("Array: ");
    
    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\n");
}

void mesclarArrays(int array1[], int tamanho1, int array2[], int tamanho2, int arrayResultado[]) {
    int i, j, k;
    
    i = j = k = 0;
    
    while (i < tamanho1 && j < tamanho2) {
        if (array1[i] < array2[j]) {
            arrayResultado[k] = array1[i];
            i++;
        } else {
            arrayResultado[k] = array2[j];
            j++;
        }
        k++;
    }
    
    while (i < tamanho1) {
        arrayResultado[k] = array1[i];
        i++;
        k++;
    }
    
    while (j < tamanho2) {
        arrayResultado[k] = array2[j];
        j++;
        k++;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int array1[] = {1, 3, 5, 7};
    int tamanho1 = sizeof(array1) / sizeof(array1[0]);
    
    int array2[] = {2, 4, 6, 8};
    int tamanho2 = sizeof(array2) / sizeof(array2[0]);
    
    int arrayResultado[tamanho1 + tamanho2];
    
    printf("Array 1:\n");
    imprimirArray(array1, tamanho1);
    
    printf("Array 2:\n");
    imprimirArray(array2, tamanho2);
    
    mesclarArrays(array1, tamanho1, array2, tamanho2, arrayResultado);
    
    printf("Array mesclado:\n");
    imprimirArray(arrayResultado, tamanho1 + tamanho2);
    
    return 0;
}

