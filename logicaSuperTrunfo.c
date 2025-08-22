#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado2);

    printf("Código (ex: B02): ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ----------------------------
    // Menu interativo
    // ----------------------------
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - PIB per Capita\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparação de cartas:\n");
    switch(opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s (%c): %lu habitantes\n", cidade1, estado1, populacao1);
            printf("%s (%c): %lu habitantes\n", cidade2, estado2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área (km²)\n");
            printf("%s (%c): %.2f km²\n", cidade1, estado1, area1);
            printf("%s (%c): %.2f km²\n", cidade2, estado2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB (em bilhões)\n");
            printf("%s (%c): %.2f bi\n", cidade1, estado1, pib1);
            printf("%s (%c): %.2f bi\n", cidade2, estado2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4: // PIB per Capita
            printf("Atributo: PIB per Capita\n");
            printf("%s (%c): %.2f\n", cidade1, estado1, pibPerCapita1);
            printf("%s (%c): %.2f\n", cidade2, estado2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2)
                printf("Vencedor: %s\n", cidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade (regra invertida: menor vence)
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            printf("%s (%c): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("%s (%c): %.2f hab/km²\n", cidade2, estado2, densidade2);

            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s (%c): %d\n", cidade1, estado1, pontosTuristicos1);
            printf("%s (%c): %d\n", cidade2, estado2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
