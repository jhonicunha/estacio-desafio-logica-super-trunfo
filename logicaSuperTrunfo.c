#include <stdio.h>

// Desafio Lógica Super Trunfo - Nível Mestre - Versão Final

int main() {
    // Variáveis da Carta 1
    char estado_carta1;
    char codigo_carta1[20];
    char nome_cidade_carta1[20];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontosTuristicos_carta1;
    float densidade_populacional_carta1;
    float pib_per_capita_carta1;

    // Variaveis da Carta 2
    char estado_carta2;
    char codigo_carta2[10];
    char nome_cidade_carta2[20];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontosTuristicos_carta2;
    float densidade_populacional_carta2;
    float pib_per_capita_carta2;

    // Variáveis para a lógica do Nível Mestre
    int escolha1, escolha2;
    float valor_attr1_carta1, valor_attr2_carta1;
    float valor_attr1_carta2, valor_attr2_carta2;
    float soma_carta1, soma_carta2;

    //  Impressao e Scan no console para cadastrar as cartas
    printf("|---------------------------------------|\n");
    printf("|\t   BEM-VINDO AO SUPER-TRUNFO    |\n");
    printf("|---------------------------------------|\n");

    printf("\n\tCadastre suas cartas\n");

    //  Cadastro da Carta 1 via console
    printf("CADASTRO DA CARTA 1\n");
    printf("Estado da cidade (Uma letra de A a H):\n");
    scanf(" %c", &estado_carta1);
    printf("Codigo da cidade (Um numero de 01 a 04):\n");
    scanf(" %s", codigo_carta1);
    printf("Nome da cidade:\n");
    scanf(" %s", nome_cidade_carta1);
    printf("Populacao:\n");
    scanf(" %d", &populacao_carta1);
    printf("Area (em km2):\n");
    scanf(" %f", &area_carta1);
    printf("PIB (em bilhoes):\n");
    scanf(" %f", &pib_carta1);
    printf("Pontos turisticos:\n");
    scanf(" %d", &pontosTuristicos_carta1);

    // Cadastro da Carta 2 via console
    printf("\nCADASTRO DA CARTA 2\n");
    printf("Estado da cidade (Uma letra de A a H):\n");
    scanf(" %c", &estado_carta2);
    printf("Codigo da cidade (Um numero de 01 a 04):\n");
    scanf(" %s", codigo_carta2);
    printf("Nome da cidade:\n");
    scanf(" %s", nome_cidade_carta2);
    printf("Populacao:\n");
    scanf(" %d", &populacao_carta2);
    printf("Area(km2):\n");
    scanf(" %f", &area_carta2);
    printf("PIB (em bilhoes):\n");
    scanf(" %f", &pib_carta2);
    printf("Pontos turisticos:\n");
    scanf(" %d", &pontosTuristicos_carta2);

    // Cálculos de Densidade Populacional e PIB per Capita Carta 1
    densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = pib_carta1 / (float)populacao_carta1;

    // Cálculos de Densidade Populacional e PIB per Capita Carta 2
    densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = pib_carta2 / (float)populacao_carta2;

    //  Imprimir em tela as informacoes da Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Codigo: %c%s\n", estado_carta1, codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade_carta1);
    printf("Populacao: %d\n", populacao_carta1);
    printf("Area: %.2f km²\n", area_carta1);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos_carta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta1);

    //  Imprimir em tela as informacoes da Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Codigo: %c%s\n", estado_carta2, codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade_carta2);
    printf("Populacao: %d\n", populacao_carta2);
    printf("Area: %.2f km²\n", area_carta2);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos_carta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta2);

    printf("\n--- ESCOLHA SEU ATRIBUTO PARA A BATALHA ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha uma opcao (1-5): ");
    scanf("%d", &escolha1);

    printf("\n--- ESCOLHA O SEGUNDO ATRIBUTO (diferente do primeiro) ---\n");
    printf("Escolha uma opcao (1-5): ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
    } else {
        // Switch para o primeiro atributo
        switch (escolha1) {
            case 1: valor_attr1_carta1 = (float)populacao_carta1; valor_attr1_carta2 = (float)populacao_carta2; break;
            case 2: valor_attr1_carta1 = area_carta1; valor_attr1_carta2 = area_carta2; break;
            case 3: valor_attr1_carta1 = pib_carta1; valor_attr1_carta2 = pib_carta2; break;
            case 4: valor_attr1_carta1 = (float)pontosTuristicos_carta1; valor_attr1_carta2 = (float)pontosTuristicos_carta2; break;
            case 5: valor_attr1_carta1 = densidade_populacional_carta1; valor_attr1_carta2 = densidade_populacional_carta2; break;
            default: printf("Primeira escolha invalida!\n"); return 1;
        }

        // Switch para o segundo atributo
        switch (escolha2) {
            case 1: valor_attr2_carta1 = (float)populacao_carta1; valor_attr2_carta2 = (float)populacao_carta2; break;
            case 2: valor_attr2_carta1 = area_carta1; valor_attr2_carta2 = area_carta2; break;
            case 3: valor_attr2_carta1 = pib_carta1; valor_attr2_carta2 = pib_carta2; break;
            case 4: valor_attr2_carta1 = (float)pontosTuristicos_carta1; valor_attr2_carta2 = (float)pontosTuristicos_carta2; break;
            case 5: valor_attr2_carta1 = densidade_populacional_carta1; valor_attr2_carta2 = densidade_populacional_carta2; break;
            default: printf("Segunda escolha invalida!\n"); return 1;
        }
    }
    // Calcular a soma dos atributos para cada carta
    soma_carta1 = valor_attr1_carta1 + valor_attr2_carta1;
    soma_carta2 = valor_attr1_carta2 + valor_attr2_carta2;

    // Comparar as somas e determinar o vencedor
    if (soma_carta1 == soma_carta2) {
        printf("VENCEDOR: Empate na soma dos atributos!\n");
    } else {
        char* nome_vencedor = (soma_carta1 > soma_carta2) ? nome_cidade_carta1 : nome_cidade_carta2;
        printf("VENCEDOR: A carta (%s) venceu com a maior soma!\n", nome_vencedor);
    }

    return 0;
}