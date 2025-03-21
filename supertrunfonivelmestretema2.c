#include <stdio.h>

typedef struct {
    char nome[50];
    int area;            // Atributo 1: Área
    int populacao;       // Atributo 2: População
    int pib;             // Atributo 3: PIB
    int densidade;       // Atributo 4: Densidade demográfica
} Pais;

// Função para mostrar o menu de seleção de atributos
void exibirMenuDeAtributos() {
    printf("\nEscolha um atributo para comparar:\n");
    printf("1. Area\n");
    printf("2. População\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
}

// Função para exibir os resultados da comparação
void exibirResultado(Pais pais1, Pais pais2, int atributo1, int atributo2, int somaPais1, int somaPais2) {
    printf("\nResultado da Comparação:\n");
    printf("País 1: %s\n", pais1.nome);
    printf("País 2: %s\n", pais2.nome);
    
    printf("\nAtributo 1: ");
    switch(atributo1) {
        case 1: printf("Área: %d\n", pais1.area); break;
        case 2: printf("População: %d\n", pais1.populacao); break;
        case 3: printf("PIB: %d\n", pais1.pib); break;
        case 4: printf("Densidade Demográfica: %d\n", pais1.densidade); break;
    }
    
    printf("Atributo 2: ");
    switch(atributo2) {
        case 1: printf("Área: %d\n", pais2.area); break;
        case 2: printf("População: %d\n", pais2.populacao); break;
        case 3: printf("PIB: %d\n", pais2.pib); break;
        case 4: printf("Densidade Demográfica: %d\n", pais2.densidade); break;
    }
    
    printf("\nSoma dos Atributos para %s: %d\n", pais1.nome, somaPais1);
    printf("Soma dos Atributos para %s: %d\n", pais2.nome, somaPais2);

    if (somaPais1 > somaPais2) {
        printf("\nVencedor: %s\n", pais1.nome);
    } else if (somaPais1 < somaPais2) {
        printf("\nVencedor: %s\n", pais2.nome);
    } else {
        printf("\nEmpate!\n");
    }
}

int main() {
    Pais pais1 = {"Brasil", 8515767, 213993437, 2205, 25};  // Atributos para Brasil
    Pais pais2 = {"Alemanha", 357022, 83166711, 3846, 232}; // Atributos para Alemanha

    int atributo1, atributo2;

    // Exibir menu de seleção para o primeiro atributo
    exibirMenuDeAtributos();
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Garantir que o jogador não escolha o mesmo atributo duas vezes
    do {
        exibirMenuDeAtributos();
        printf("Escolha o segundo atributo: ");
        scanf("%d", &atributo2);
        if (atributo1 == atributo2) {
            printf("Você não pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
        }
    } while (atributo1 == atributo2);

    // Comparar os dois atributos para cada país
    int valorPais1_1 = (atributo1 == 1) ? pais1.area : (atributo1 == 2) ? pais1.populacao : (atributo1 == 3) ? pais1.pib : pais1.densidade;
    int valorPais2_1 = (atributo1 == 1) ? pais2.area : (atributo1 == 2) ? pais2.populacao : (atributo1 == 3) ? pais2.pib : pais2.densidade;

    int valorPais1_2 = (atributo2 == 1) ? pais1.area : (atributo2 == 2) ? pais1.populacao : (atributo2 == 3) ? pais1.pib : pais1.densidade;
    int valorPais2_2 = (atributo2 == 1) ? pais2.area : (atributo2 == 2) ? pais2.populacao : (atributo2 == 3) ? pais2.pib : pais2.densidade;

    // Verificar se deve vencer o maior valor ou o menor (para densidade)
    valorPais1_1 = (atributo1 == 4) ? (pais1.densidade < pais2.densidade ? pais1.densidade : pais2.densidade) : valorPais1_1;
    valorPais2_1 = (atributo2 == 4) ? (pais2.densidade < pais1.densidade ? pais2.densidade : pais1.densidade) : valorPais2_1;
    
    // Calcular a soma dos atributos para ambos os países
    int somaPais1 = valorPais1_1 + valorPais1_2;
    int somaPais2 = valorPais2_1 + valorPais2_2;

    // Exibir o resultado
    exibirResultado(pais1, pais2, atributo1, atributo2, somaPais1, somaPais2);

    return 0;
}
