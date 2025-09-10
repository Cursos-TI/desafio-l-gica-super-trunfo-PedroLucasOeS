#include <stdio.h>
#include <string.h>

int main() {
    // Cartas pré-cadastradas
    char pais1[100] = "Brasil";
    char pais2[100] = "Argentina";

    int populacao1 = 213000000, populacao2 = 45300000;
    float area1 = 8515767.0, area2 = 2780400.0;
    float pib1 = 14440.0, pib2 = 488.0; // bilhões 
    int pontos1 = 60, pontos2 = 30;

    // Cálculo da densidade
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int escolha1, escolha2;

    // ==== MENU PRINCIPAL ====
    printf("===== Super Trunfo - Escolha os atributos =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    // ==== MENU PARA O SEGUNDO ATRIBUTO ====
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    // Exibe opções exceto a já escolhida
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos Turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade Demográfica\n");

    printf("Escolha: ");
    scanf("%d", &escolha2);

    // ==== VALORES DOS ATRIBUTOS ESCOLHIDOS ====
    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;

    // Primeiro atributo
    switch (escolha1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Segundo atributo
    switch (escolha2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // ==== COMPARAÇÃO DOS ATRIBUTOS ====
    printf("\n===== Comparação =====\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    // Comparação atributo 1
    printf("Atributo 1: ");
    if (escolha1 == 1) printf("População\n");
    if (escolha1 == 2) printf("Área\n");
    if (escolha1 == 3) printf("PIB\n");
    if (escolha1 == 4) printf("Pontos Turísticos\n");
    if (escolha1 == 5) printf("Densidade Demográfica\n");

    printf("%s: %.2f\n", pais1, valor1_c1);
    printf("%s: %.2f\n", pais2, valor1_c2);
    printf("Resultado: %s venceu!\n\n", 
           (escolha1 == 5) ? ((valor1_c1 < valor1_c2) ? pais1 : (valor1_c2 < valor1_c1 ? pais2 : "Empate"))
                           : ((valor1_c1 > valor1_c2) ? pais1 : (valor1_c2 > valor1_c1 ? pais2 : "Empate")));

    // Comparação atributo 2
    printf("Atributo 2: ");
    if (escolha2 == 1) printf("População\n");
    if (escolha2 == 2) printf("Área\n");
    if (escolha2 == 3) printf("PIB\n");
    if (escolha2 == 4) printf("Pontos Turísticos\n");
    if (escolha2 == 5) printf("Densidade Demográfica\n");

    printf("%s: %.2f\n", pais1, valor2_c1);
    printf("%s: %.2f\n", pais2, valor2_c2);
    printf("Resultado: %s venceu!\n\n", 
           (escolha2 == 5) ? ((valor2_c1 < valor2_c2) ? pais1 : (valor2_c2 < valor2_c1 ? pais2 : "Empate"))
                           : ((valor2_c1 > valor2_c2) ? pais1 : (valor2_c2 > valor2_c1 ? pais2 : "Empate")));

    // ==== SOMA FINAL ====
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    printf("Resultado Final: %s\n", 
           (soma1 > soma2) ? pais1 : (soma2 > soma1 ? pais2 : "Empate"));

    return 0;
}

