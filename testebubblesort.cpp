#include <stdio.h>

int main() 
{
    int i, j, num, resp;

    printf("Quantos numeros voce quer ordenar? ");
    
    // Verifica se a leitura do número de elementos foi bem-sucedida e se é positivo.
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Erro: Numero de elementos invalido ou nao fornecido.\n");
        return 1;
    }

    // Declara o Vetor de Tamanho Variável (VLA)
    int vetor[num];

    // --- LEITURA DO VETOR ---
    for (i = 0; i < num; i++) {
        printf("Digite o %d numero: ", i + 1);
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Erro na leitura do numero.\n");
            return 1;
        }
    }

    // --- ORDENAÇÃO (Bubble Sort) ---
    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                resp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = resp;
            }
        }
    }

    // --- IMPRESSÃO DO VETOR ORDENADO ---
    printf("\n--- Vetor Ordenado ---\n");
    for (i = 0; i < num; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}