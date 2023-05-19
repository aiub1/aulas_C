#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    int numeros[MAX_SIZE];
    int i;
    int maior;
    int segundoMaior;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    if (n <= 1 || n > MAX_SIZE) {
        printf("Quantidade invalida de numeros.\n");
        return 1;
    }

    printf("Digite os numeros:\n");
    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    segundoMaior = numeros[0];

    for (i = 1; i < n; i++) {
        if (numeros[i] > maior) {
            segundoMaior = maior;
            maior = numeros[i];
        } else if (numeros[i] > segundoMaior && numeros[i] < maior) {
            segundoMaior = numeros[i];
        }
    }

    printf("O segundo maior numero digitado foi: %d\n", segundoMaior);
	system("pause");
    return 0;
}

