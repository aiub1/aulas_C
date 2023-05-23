#include <stdio.h>
#include <locale.h>

long binomialCoeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    else
        return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

void printPascalTriangle(int numRows) {
    int i, j;

    for (i = 0; i < numRows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%ld ", binomialCoeff(i, j));
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o número de linhas do triângulo de Pascal: ");
    scanf("%d", &numRows);

    printf("Triângulo de Pascal com %d linhas:\n", numRows);
    printPascalTriangle(numRows);

    return 0;
}

