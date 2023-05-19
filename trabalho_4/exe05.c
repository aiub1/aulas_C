#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

int main() {
    int n;
    int digitos[MAX_SIZE];
    int i;
    int numero = 0;

    printf("Digite a quantidade de digitos a serem lidos: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Quantidade invalida de digitos.\n");
        return 1;
    }

    printf("Digite os digitos:\n");
    for (i = 0; i < n; i++) {
        printf("Digite o digito %d: ", i + 1);
        scanf("%d", &digitos[i]);
    }

    for (i = 0; i < n; i++) {
        numero += digitos[i] * pow(10, n - i - 1);
    }

    printf("O numero formado pelos digitos fornecidos eh: %d\n", numero);

	system("pause");
    return 0;
}

