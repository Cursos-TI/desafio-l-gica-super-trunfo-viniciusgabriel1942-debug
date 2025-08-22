#include <stdio.h>

int main() {
    // Carta 1
    char estado1, codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
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
    char estado2, codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
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
    // Escolha de atributos
    // ----------------------------
    int opcao1, opcao2;
    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - PIB per Capita\n5 - Densidade Demográfica\n6 - Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o SEGUNDO atributo para comparação (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != opcao1) {
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - PIB per Capita\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
                case 6: printf("6 - Pontos Turísticos\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    // ----------------------------
    // Função inline para comparar
    // ----------------------------
    void comparar(int atributo) {
        switch(atributo) {
            case 1: // População
                printf("\n[Atributo: População]\n");
                printf("%s (%c): %lu | %s (%c): %lu\n",
                       cidade1, estado1, populacao1, cidade2, estado2, populacao2);
                printf("Resultado: %s\n", (populacao1 > populacao2) ? cidade1 :
                                          (populacao2 > populacao1) ? cidade2 : "Empate!");
                break;

            case 2: // Área
                printf("\n[Atributo: Área]\n");
                printf("%s (%c): %.2f km² | %s (%c): %.2f km²\n",
                       cidade1, estado1, area1, cidade2, estado2, area2);
                printf("Resultado: %s\n", (area1 > area2) ? cidade1 :
                                          (area2 > area1) ? cidade2 : "Empate!");
                break;

            case 3: // PIB
                printf("\n[Atributo: PIB]\n");
                printf("%s (%c): %.2f bi | %s (%c): %.2f bi\n",
                       cidade1, estado1, pib1, cidade2, estado2, pib2);
                printf("Resultado: %s\n", (pib1 > pib2) ? cidade1 :
                                          (pib2 > pib1) ? cidade2 : "Empate!");
                break;

            case 4: // PIB per Capita
                printf("\n[Atributo: PIB per Capita]\n");
                printf("%s (%c): %.2f | %s (%c): %.2f\n",
                       cidade1, estado1, pibPerCapita1, cidade2, estado2, pibPerCapita2);
                printf("Resultado: %s\n", (pibPerCapita1 > pibPerCapita2) ? cidade1 :
                                          (pibPerCapita2 > pibPerCapita1) ? cidade2 : "Empate!");
                break;

            case 5: // Densidade (menor vence)
                printf("\n[Atributo: Densidade Demográfica]\n");
                printf("%s (%c): %.2f hab/km² | %s (%c): %.2f hab/km²\n",
                       cidade1, estado1, densidade1, cidade2, estado2, densidade2);
                printf("Resultado: %s\n", (densidade1 < densidade2) ? cidade1 :
                                          (densidade2 < densidade1) ? cidade2 : "Empate!");
                break;

            case 6: // Pontos turísticos
                printf("\n[Atributo: Pontos Turísticos]\n");
                printf("%s (%c): %d | %s (%c): %d\n",
                       cidade1, estado1, pontosTuristicos1, cidade2, estado2, pontosTuristicos2);
                printf("Resultado: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? cidade1 :
                                          (pontosTuristicos2 > pontosTuristicos1) ? cidade2 : "Empate!");
                break;
        }
    }

    // Comparar os dois atributos escolhidos
    comparar(opcao1);
    comparar(opcao2);

    return 0;
}