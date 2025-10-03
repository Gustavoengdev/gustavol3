#include <stdio.h>
#include <string.h> // Incluído por boa prática, embora não estritamente necessário

// 1. Definição da estrutura antes do main, com nome de campo corrigido
struct teste
{
    char nome[40];
    char profissao[50];
    int tempo_de_casa; // Corrigido de 'temppodecasa'
};

int main(){

    // 2. Declaração da variável 'gugu'
    struct teste gugu;

    printf("\nDigite seu nome: ");
    // fgets inclui o '\n' na string, a menos que o buffer seja preenchido
    fgets(gugu.nome, 40, stdin);

    printf("\nDigite sua profissão: ");
    fgets(gugu.profissao, 50, stdin);

    // 3. Ponto e vírgula adicionado
    printf("\n Digite seu tempo de casa: ");
        scanf("%d", &gugu.tempo_de_casa);

    // O fgets lê a nova linha, então precisamos removê-la para a saída ficar limpa
    // Esta não é a única forma, mas é uma maneira simples:

    // Substitui a primeira ocorrência de '\n' por '\0' (terminador de string)
    gugu.nome[strcspn(gugu.nome, "\n")] = 0;
    gugu.profissao[strcspn(gugu.profissao, "\n")] = 0;

    printf("\n--- Dados Informados ---\n");
    printf("Nome: %s\n", gugu.nome);
    printf("Profissão: %s\n", gugu.profissao);
    printf("Tempo de casa: %d anos\n", gugu.tempo_de_casa);

    return 0;
}