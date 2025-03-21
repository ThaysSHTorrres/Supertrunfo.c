#include <stdio.h>
#include <string.h>

// Definindo a estrutura da carta
typedef struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para calcular a densidade populacional
float calcular_densidade_populacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcular_pib_per_capita(float pib, int populacao) {
    return pib / populacao;
}

// Função para exibir os dados de uma carta
void exibir_carta(Carta carta) {
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", calcular_densidade_populacional(carta.populacao, carta.area));
    printf("PIB per capita: %.2f\n", calcular_pib_per_capita(carta.pib, carta.populacao));
}

// Função para comparar duas cartas com base em um atributo escolhido
void comparar_cartas(Carta carta1, Carta carta2) {
    // Escolha do atributo para comparação (neste caso, População)
    char atributo_escolhido[] = "População";
    int valor_carta1 = carta1.populacao;
    int valor_carta2 = carta2.populacao;

    // Exibindo os dados das cartas
    printf("Comparação de cartas (Atributo: %s):\n", atributo_escolhido);
    printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, valor_carta1);
    printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, valor_carta2);

    // Comparando os valores do atributo escolhido
    if (valor_carta1 > valor_carta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (valor_carta1 < valor_carta2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: As cartas são iguais no atributo %s!\n", atributo_escolhido);
    }
}

int main() {
    // Cadastrando duas cartas pré-definidas
    Carta carta1 = {"São Paulo", "SP", "São Paulo", 12300000, 1521.11, 678.9, 300};
    Carta carta2 = {"Rio de Janeiro", "RJ", "Rio de Janeiro", 6000000, 1200.27, 450.5, 250};

    // Exibindo os dados das cartas
    printf("Carta 1:\n");
    exibir_carta(carta1);
    printf("\nCarta 2:\n");
    exibir_carta(carta2);
    printf("\n");

    // Comparando as cartas
    comparar_cartas(carta1, carta2);

    return 0;
}