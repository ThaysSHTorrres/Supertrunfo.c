using System;

class Program
{
    struct CartaPais
    {
        public string Nome;
        public int Populacao;
        public float Area;
        public float PIB;
        public int PontosTuristicos;
        public float DensidadeDemografica;
    }

    static void Main(string[] args)
    {
        // Exemplo de cartas pré-cadastradas
        CartaPais carta1 = new CartaPais
        {
            Nome = "Brasil",
            Populacao = 213993437,
            Area = 8515767.049f,
            PIB = 1.445f,
            PontosTuristicos = 15,
            DensidadeDemografica = 25.13f
        };

        CartaPais carta2 = new CartaPais
        {
            Nome = "Argentina",
            Populacao = 45195777,
            Area = 2780400f,
            PIB = 0.445f,
            PontosTuristicos = 10,
            DensidadeDemografica = 16.25f
        };

        // Menu interativo
        Console.WriteLine("Escolha o atributo para comparar as cartas:");
        Console.WriteLine("1 - População");
        Console.WriteLine("2 - Área");
        Console.WriteLine("3 - PIB");
        Console.WriteLine("4 - Número de Pontos Turísticos");
        Console.WriteLine("5 - Densidade Demográfica");
        Console.Write("Opção: ");
        int opcao = int.Parse(Console.ReadLine());

        // Comparação de atributos
        switch (opcao)
        {
            case 1:
                CompararAtributo(carta1, carta2, "População", carta1.Populacao, carta2.Populacao);
                break;
            case 2:
                CompararAtributo(carta1, carta2, "Área", carta1.Area, carta2.Area);
                break;
            case 3:
                CompararAtributo(carta1, carta2, "PIB", carta1.PIB, carta2.PIB);
                break;
            case 4:
                CompararAtributo(carta1, carta2, "Número de Pontos Turísticos", carta1.PontosTuristicos, carta2.PontosTuristicos);
                break;
            case 5:
                CompararAtributo(carta1, carta2, "Densidade Demográfica", carta1.DensidadeDemografica, carta2.DensidadeDemografica, true);
                break;
            default:
                Console.WriteLine("Opção inválida!");
                break;
        }
    }

    static void CompararAtributo(CartaPais carta1, CartaPais carta2, string atributo, float valor1, float valor2, bool inverter = false)
    {
        Console.WriteLine($"\nComparando {atributo} entre {carta1.Nome} e {carta2.Nome}:");
        Console.WriteLine($"{carta1.Nome}: {valor1}");
        Console.WriteLine($"{carta2.Nome}: {valor2}");

        if (inverter)
        {
            if (valor1 < valor2)
                Console.WriteLine($"{carta1.Nome} vence com menor {atributo}!");
            else if (valor1 > valor2)
                Console.WriteLine($"{carta2.Nome} vence com menor {atributo}!");
            else
                Console.WriteLine("Empate!");
        }
        else
        {
            if (valor1 > valor2)
                Console.WriteLine($"{carta1.Nome} vence com maior {atributo}!");
            else if (valor1 < valor2)
                Console.WriteLine($"{carta2.Nome} vence com maior {atributo}!");
            else
                Console.WriteLine("Empate!");
        }
    }
}