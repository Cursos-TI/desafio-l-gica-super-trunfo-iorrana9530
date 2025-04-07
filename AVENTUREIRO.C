#include <stdio.h>

int main() {
    // Dados da Carta 1 - Brasil
    char nome1[] = "Brasil";
    int populacao1 = 211000000;
    float area1 = 8515767.0;
    float pib1 = 1.84;
    int pontosTuristicos1 = 10;
    float densidade1 = populacao1 / area1;

    // Dados da Carta 2 - Canadá
    char nome2[] = "Canadá";
    int populacao2 = 38000000;
    float area2 = 9984670.0;
    float pib2 = 1.64;
    int pontosTuristicos2 = 7;
    float densidade2 = populacao2 / area2;

    int opcao;

    // Menu interativo
    printf("===== SUPER TRUNFO: PAÍSES =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando: %s x %s\n", nome1, nome2);

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", nome1, area1);
            printf("%s: %.2f\n", nome2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nome2); // Canadá tem maior área
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB (em trilhões de dólares)\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", nome1, pontosTuristicos1);
            printf("%s: %d\n", nome2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (habitantes/km²)\n");
            printf("%s: %.2f\n", nome1, densidade1);
            printf("%s: %.2f\n", nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", nome1); // menor densidade vence
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
    }

    return 0;
}