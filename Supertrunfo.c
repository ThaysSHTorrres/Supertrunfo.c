#include <stdio.h>

#define MAX_NOME_CIDADE 100
#define MAX_CODIGO_CARTA 5

// Estrutura para armazenar as informações de uma carta
typedef struct {
    char estado;              // Estado (letra de A a H)
    char codigo_carta[MAX_CODIGO_CARTA];  // Código da carta (ex: A01, B03)
    char nome_cidade[MAX_NOME_CIDADE];    // Nome da cidade
    int populacao;            // População
    float area;               // Área em km²
    float pib;                // PIB
    int pontos_turisticos;    // Número de pontos turísticos
} Carta;

// Função para ler os dados de uma carta
void lerCarta(Carta *carta) {
    printf("\nDigite os dados da carta:\n");

    // Estado
    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta->estado); // O espaço antes do %c é para consumir o caractere de nova linha (enter) anterior

    // Código da carta
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", carta->codigo_carta);

    // Nome da cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta->nome_cidade); // Lê a linha inteira incluindo espaços

    // População
    printf("População: ");
    scanf("%d", &carta->populacao);

    // Área
    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    // PIB
    printf("PIB: ");
    scanf("%f", &carta->pib);

    // Pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta *carta) {
    printf("\nDados da carta:\n");
    printf("Estado: %c\n", carta->estado);
    printf("Código da Carta: %s\n", carta->codigo_carta);
    printf("Nome da Cidade: %s\n", carta->nome_cidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f\n", carta->pib);
    printf("Pontos Turísticos: %d\n", carta->pontos_turisticos);
}

int main() {
    Carta carta1, carta2;

    // Ler os dados das duas cartas
    printf("Insira os dados da primeira carta:\n");
    lerCarta(&carta1);
    printf("\nInsira os dados da segunda carta:\n");
    lerCarta(&carta2);

    // Exibir os dados das duas cartas
    printf("\nDados da Primeira Carta:\n");
    exibirCarta(&carta1);

    printf("\nDados da Segunda Carta:\n");
    exibirCarta(&carta2);

    return 0;
}