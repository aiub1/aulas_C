#include <stdio.h>
#include <locale.h>

#define NUM_ALUNOS 5
#define NUM_DISCIPLINAS 3

void encontrarNotasMaisAltas(const int notas[][NUM_DISCIPLINAS], int notasMaisAltas[]) {
    int i, j;

    for (j = 0; j < NUM_DISCIPLINAS; j++) {
        int maxNota = notas[0][j];

        for (i = 1; i < NUM_ALUNOS; i++) {
            if (notas[i][j] > maxNota) {
                maxNota = notas[i][j];
            }
        }

        notasMaisAltas[j] = maxNota;
    }
}

void imprimirNotasMaisAltas(const int notasMaisAltas[]) {
    int j;

    printf("Notas mais altas em cada disciplina:\n");
    for (j = 0; j < NUM_DISCIPLINAS; j++) {
        printf("Disciplina %d: %d\n", j + 1, notasMaisAltas[j]);
    }
}

int main() {
    int notas[NUM_ALUNOS][NUM_DISCIPLINAS];
    int notasMaisAltas[NUM_DISCIPLINAS];
    int i, j;

    setlocale(LC_ALL, "Portuguese");

    // Ler as notas de cada aluno em cada disciplina
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (j = 0; j < NUM_DISCIPLINAS; j++) {
            printf("Nota da disciplina %d: ", j + 1);
            scanf("%d", &notas[i][j]);
        }
        printf("\n");
    }

    encontrarNotasMaisAltas(notas, notasMaisAltas);
    imprimirNotasMaisAltas(notasMaisAltas);

    return 0;
}

