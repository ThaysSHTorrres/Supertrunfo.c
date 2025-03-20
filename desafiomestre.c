#include <stdio.h>

typedef struct {
    char nome[50];
    int estado;
    int codigo;
    unsigned long int populacao; // Usando unsigned long int para população
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular a densidade populacional
void calcular_densidade(Carta *carta) {
    carta->densidade_populacional = (float)carta->populacao / carta->area;
}

// Função para calcular o PIB per capita
void calcular_pib_per_capita(Carta *carta) {
    carta->pib_per_capita = carta->pib / carta->populacao;
}

// Função para calcular o Super Poder
void calcular_super_poder(Carta *carta) {
    carta->super_poder = (float)carta->populacao + carta->area + carta->pib + carta->pontos_turisticos +
                         (1 / carta->densidade_populacional); // Inverso da densidade
}

// Função para comparar as cartas
void comparar_cartas(Carta carta1, Carta carta2) {
    printf("Comparação de Cartas:\n");

    // Comparar População
    printf("População: ");
    printf("Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);

    // Comparar Área
    printf("Área: ");
    printf("Carta 1 venceu (%d)\n", carta1.area > carta2.area);

    // Comparar PIB
    printf("PIB: ");
    printf("Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);

    // Comparar Pontos Turísticos
    printf("Pontos Turísticos: ");
    printf("Carta 1 venceu (%d)\n", carta1.pontos_turisticos > carta2.pontos_turisticos);

    // Comparar Densidade Populacional
    printf("Densidade Populacional: ");
    printf("Carta 2 venceu (%d)\n", carta1.densidade_populacional > carta2.densidade_populacional);

    // Comparar PIB per Capita
    printf("PIB per Capita: ");
    printf("Carta 1 venceu (%d)\n", carta1.pib_per_capita > carta2.pib_per_capita);

    // Comparar Super Poder
    printf("Super Poder: ");
    printf("Carta 1 venceu (%d)\n", carta1.super_poder > carta2.super_poder);
}

int main() {
    Carta carta1, carta2;

    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Nome: ");
    scanf(" %[^\n]s", carta1.nome);
    printf("Estado: ");
    scanf("%d", &carta1.estado);
    printf("Código: ");
    scanf("%d", &carta1.codigo);
    printf("População: ");
    scanf("%lu", &carta1.populacao); // Usando %lu para unsigned long int
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Entrada de dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome: ");
    scanf(" %[^\n]s", carta2.nome);
    printf("Estado: ");
    scanf("%d", &carta2.estado);
    printf("Código: ");
    scanf("%d", &carta2.codigo);
    printf("População: ");
    scanf("%lu", &carta2.populacao); // Usando %lu para unsigned long int
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Calcular os valores para as duas cartas
    calcular_densidade(&carta1);
    calcular_densidade(&carta2);
    calcular_pib_per_capita(&carta1);
    calcular_pib_per_capita(&carta2);
    calcular_super_poder(&carta1);
    calcular_super_poder(&carta2);

    // Comparar as cartas
    comparar_cartas(carta1, carta2);

    return 0;
}
