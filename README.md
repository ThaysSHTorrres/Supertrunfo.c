# Super Trunfo - Comparação de Cartas de Países

Este projeto implementa um jogo de Super Trunfo onde o jogador pode comparar cartas de países com base em atributos numéricos, como Área, População, PIB e Densidade Demográfica. O programa permite ao jogador escolher dois atributos para a comparação e decide o vencedor com base na soma dos valores desses atributos. A comparação leva em consideração a exceção da Densidade Demográfica, onde o valor menor vence.

## Requisitos

- Um compilador C (como GCC).
- Sistema operacional Linux, macOS ou Windows com suporte a compilação C.

## Funcionalidades

- Escolha de dois atributos para comparar entre duas cartas de países.
- Lógica para comparar os valores dos atributos, considerando a exceção da Densidade Demográfica.
- Exibição clara dos resultados, com o nome dos países, valores dos atributos, soma dos atributos e o vencedor.
- Tratamento de empates quando as somas dos atributos são iguais.
- Menus interativos e dinâmicos para escolher os atributos.

## Estrutura do Código

O código é estruturado de forma modular com as seguintes partes principais:
- **Estrutura `Pais`:** Define os atributos de cada país.
- **Função `exibirMenuDeAtributos`:** Exibe o menu de atributos.
- **Função `exibirResultado`:** Exibe os resultados da comparação entre as cartas.
- **Lógica de Comparação:** Usa `switch` e operador ternário para comparar os atributos.

## Instruções para Compilação e Execução

### 1. Compilar o Programa

Para compilar o programa, siga as instruções abaixo dependendo do seu sistema operacional:

#### Em Linux ou macOS

1. Abra o terminal.
2. Navegue até o diretório onde o arquivo `super_trunfo.c` está localizado.
3. Execute o comando para compilar o código:

   ```bash
   gcc -o super_trunfo super_trunfo.c
