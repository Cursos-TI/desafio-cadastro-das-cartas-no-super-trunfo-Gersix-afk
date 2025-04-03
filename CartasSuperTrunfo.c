#include <stdio.h>

int main() {
    // Definindo as variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2; // Usando unsigned long int para população
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Coletando dados da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê até a nova linha
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Coletando dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê até a nova linha
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculando a densidade populacional e PIB per capita para a primeira carta
    float densidadePopulacional1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1e9) / populacao1; // PIB em reais

    // Calculando a densidade populacional e PIB per capita para a segunda carta
    float densidadePopulacional2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1e9) / populacao2; // PIB em reais

    // Calculando o Super Poder para cada carta
    float superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    float superPoder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibindo os resultados das comparações
    printf("\nComparação de Cartas:\n");

    // Comparando População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    
    // Comparando Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    
    // Comparando PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    
    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    
    // Comparando Densidade Populacional (menor é melhor)
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 > densidadePopulacional2);
    
    // Comparando PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    
    // Comparando Super Poder
    printf("Super Poder: Carta 1 venceu (%d )\n", superPoder1 > superPoder2);

    return 0;
} 