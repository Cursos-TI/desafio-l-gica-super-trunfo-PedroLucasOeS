#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Cadastro fixo das cartas que usei no exemplo 
    char pais1[100] = "Brasil";
    char pais2[100] = "Argentina";

    int populacao1 = 213000000, populacao2 = 45300000;
    float area1 = 8515767.0, area2 = 2780400.0;
    float pib1 = 14440.0, pib2 = 488.0; // em bilhões 
    int pontos1 = 60, pontos2 = 30;

    // Cálculo da densidade demográfica
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int escolha;

    // Menu interativo
    printf("===== Menu de Comparação =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    printf("\nComparação entre %s e %s\n", pais1, pais2);

    switch (escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de dólares\n", pais1, pib1);
            printf("%s: %.2f bilhões de dólares\n", pais2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", pais1, pontos1);
            printf("%s: %d pontos\n", pais2, pontos2);
            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.4f hab/km²\n", pais1, densidade1);
            printf("%s: %.4f hab/km²\n", pais2, densidade2);

            // Aqui a regra é invertida: menor densidade vence
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}

