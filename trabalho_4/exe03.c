#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    int numeros[MAX_SIZE];
    int i;
    int menor;
    int posicao;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Quantidade invalida de numeros.\n");
        return 1;
    }

    printf("Digite os numeros:\n");
    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    menor = numeros[0];
    posicao = 0;

    for (i = 1; i < n; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
            posicao = i;
        }
    }

    printf("O menor numero digitado foi %d e sua posicao eh %d.\n", menor, posicao + 1);
	system("pause");
    return 0;
}

