#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);
    
	int numeros[n];
	
    if (n <= 0 || n > n) {
        printf("Quantidade invalida de numeros.\n");
        return 1;
    }

    printf("Digite os numeros:\n");
    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Numeros digitados:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", numeros[i]);
    }

	system("pause");
    return 0;
}

