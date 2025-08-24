#include <stdio.h>

// Desafio Super Trunfo - Nível Novato

int main() {
    // Variáveis da Carta 1
    char estado_carta1[10];
    char codigo_carta1[20];
    char nome_cidade_carta1[20];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontosTuristicos_carta1;

    // Variaveis da Carta 2
    char estado_carta2[10];
    char codigo_carta2[10];
    char nome_cidade_carta2[20];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontosTuristicos_carta2;

    //  Impressao e Scan no console para cadastrar as cartas
    printf("|---------------------------------------|\n");
    printf("|\t     BEM-VINDO AO SUPER-TRUNFO       |\n");
    printf("|---------------------------------------|\n");

    printf("\n\tCadastre suas cartas\n");

    //  Cadastro da Carta 1 via console
    printf("CADASTRO DA CARTA 1\n");
    printf("Estado da cidade (Uma letra de A a H):\n");
    scanf(" %s", estado_carta1);
    printf("Codigo da cidade (Um numero de 01 a 04):\n");
    scanf(" %s", codigo_carta1);
    printf("Nome da cidade:\n");
    scanf(" %s", nome_cidade_carta1);
    printf("Populacao:\n");
    scanf(" %u", &populacao_carta1);
    printf("Area (em km²):\n");
    scanf(" %f", &area_carta1);
    printf("Pib (em bilhoes de reais):\n");
    scanf(" %f", &pib_carta1);
    printf("Pontos turisticos:\n");
    scanf(" %u", &pontosTuristicos_carta1);

    // Cadastro da Carta 2 via console
    printf("\nCADASTRO DA CARTA 2\n");
    printf("Estado da cidade (Uma letra de A a H):\n");
    scanf(" %s", estado_carta2);
    printf("Codigo da cidade (Um número de 01 a 04):\n");
    scanf(" %s", codigo_carta2);
    printf("Nome da cidade:\n");
    scanf(" %s", nome_cidade_carta2);
    printf("População:\n");
    scanf(" %u", &populacao_carta2);
    printf("Area(km²):\n");
    scanf(" %f", &area_carta2);
    printf("Pib:\n");
    scanf(" %f", &pib_carta2);
    printf("Pontos turisticos:\n");
    scanf(" %u", &pontosTuristicos_carta2);

    //  Imprimir em tela as informacoes da Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado_carta1);
    printf("Codigo: %s%s\n", estado_carta1, codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade_carta1);
    printf("Populacao: %u\n", populacao_carta1);
    printf("Area: %.2f km²\n", area_carta1);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta1);
    printf("Pontos Turisticos: %u\n", pontosTuristicos_carta1);

    //  Imprimir em tela as informacoes da Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado_carta2);
    printf("Codigo: %s%s\n", estado_carta2, codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade_carta2);
    printf("Populacao: %u\n", populacao_carta2);
    printf("Area: %.2f km²\n", area_carta2);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta2);
    printf("Pontos Turisticos: %u\n", pontosTuristicos_carta2);

    return 0;
}
