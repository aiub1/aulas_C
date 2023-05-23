#include <stdio.h>
#include <locale.h>

#define NUM_VENDEDORES 5
#define NUM_PRODUTOS 3

void calcularVendasTotais(const int vendas[][NUM_PRODUTOS], int vendasTotaisVendedor[], int vendasTotaisProduto[]) {
    int i, j;

    // Inicializar as vendas totais
    for (i = 0; i < NUM_VENDEDORES; i++) {
        vendasTotaisVendedor[i] = 0;
    }

    for (j = 0; j < NUM_PRODUTOS; j++) {
        vendasTotaisProduto[j] = 0;
    }

    // Calcular as vendas totais de cada vendedor e de cada produto
    for (i = 0; i < NUM_VENDEDORES; i++) {
        for (j = 0; j < NUM_PRODUTOS; j++) {
            vendasTotaisVendedor[i] += vendas[i][j];
            vendasTotaisProduto[j] += vendas[i][j];
        }
    }
}

void imprimirVendasTotais(const int vendasTotaisVendedor[], const int vendasTotaisProduto[]) {
    int i;

    printf("Vendas totais de cada vendedor:\n");
    for (i = 0; i < NUM_VENDEDORES; i++) {
        printf("Vendedor %d: %d\n", i + 1, vendasTotaisVendedor[i]);
    }

    printf("\nVendas totais de cada produto:\n");
    for (i = 0; i < NUM_PRODUTOS; i++) {
        printf("Produto %d: %d\n", i + 1, vendasTotaisProduto[i]);
    }
}

int main() {
    int vendas[NUM_VENDEDORES][NUM_PRODUTOS];
    int vendasTotaisVendedor[NUM_VENDEDORES];
    int vendasTotaisProduto[NUM_PRODUTOS];
    int i, j;

    setlocale(LC_ALL, "Portuguese");

    // Preencher as vendas de cada vendedor
    for (i = 0; i < NUM_VENDEDORES; i++) {
        printf("Digite as vendas do vendedor %d:\n", i + 1);
        for (j = 0; j < NUM_PRODUTOS; j++) {
            printf("Vendas do produto %d: ", j + 1);
            scanf("%d", &vendas[i][j]);
        }
        printf("\n");
    }

    calcularVendasTotais(vendas, vendasTotaisVendedor, vendasTotaisProduto);
    imprimirVendasTotais(vendasTotaisVendedor, vendasTotaisProduto);

    return 0;
}

