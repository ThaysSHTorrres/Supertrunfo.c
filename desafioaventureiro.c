#include <stdio.h>

int main() {
    // Definindo variáveis para as duas cidades
    char estado1[30], estado2[30], cidade1[50], cidade2[50];
    int codigo_carta1, codigo_carta2;
    float populacao1, populacao2, area1, area2, pib1, pib2, densidade_pop1, densidade_pop2, pib_per_capita1, pib_per_capita2;
    int pontos_turisticos1, pontos_turisticos2;

    // Leitura das informações para a cidade 1
    printf("Digite as informações para a primeira cidade:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da Carta: ");
    scanf("%d", &codigo_carta1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%f", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura das informações para a cidade 2
    printf("\nDigite as informações para a segunda cidade:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da Carta: ");
    scanf("%d", &codigo_carta2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%f", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional e PIB per Capita para a cidade 1
    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cálculo da Densidade Populacional e PIB per Capita para a cidade 2
    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibindo os resultados formatados para a cidade 1
    printf("\nResultados para a cidade %s - %s:\n", cidade1, estado1);
    printf("Código da Carta: %d\n", codigo_carta1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    // Exibindo os resultados formatados para a cidade 2
    printf("\nResultados para a cidade %s - %s:\n", cidade2, estado2);
    printf("Código da Carta: %d\n", codigo_carta2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;
}
