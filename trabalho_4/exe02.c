#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    int numeros[MAX_SIZE];
    int i;
    int soma = 0;
    float media;

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
        soma += numeros[i];
    }

    media = (float)soma / n;

    printf("A media dos numeros digitados eh: %.2f\n", media);
	system("pause");
    return 0;
}

