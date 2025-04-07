#include <stdio.h>

// Função para exibir o menu de atributos
void mostrarMenu(int bloqueado) {
    printf("Escolha um atributo:\n");
    if (bloqueado != 1) printf("1 - População\n");
    if (bloqueado != 2) printf("2 - Área\n");
    if (bloqueado != 3) printf("3 - PIB\n");
    if (bloqueado != 4) printf("4 - Pontos Turísticos\n");
    if (bloqueado != 5) printf("5 - Densidade Demográfica\n");
}

int main() {
    // Carta 1 - Brasil
    char nome1[] = "Brasil";
    int populacao1 = 211000000;
    float area1 = 8515767.0;
    float pib1 = 1.84;
    int pontos1 = 10;
    float densidade1 = populacao1 / area1;

    // Carta 2 - Canadá
    char nome2[] = "Canadá";
    int populacao2 = 38000000;
    float area2 = 9984670.0;
    float pib2 = 1.64;
    int pontos2 = 7;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor2_carta1 = 0;
    float valor1_carta2 = 0, valor2_carta2 = 0;
    float soma1 = 0, soma2 = 0;

    // Primeiro menu
    printf("===== SUPER TRUNFO AVANÇADO =====\n\n");
    mostrarMenu(0);
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida. Encerrando programa.\n");
        return 1;
    }

    // Segundo menu (sem repetir o primeiro atributo)
    printf("\nAgora escolha o segundo atributo:\n");
    mostrarMenu(atributo1);
    printf("Digite o número do segundo atributo: ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opção inválida. Encerrando programa.\n");
        return 1;
    }

    // Função para pegar o valor de cada atributo
    for (int i = 1; i <= 5; i++) {
        float v1 = 0, v2 = 0;
        switch (i) {
            case 1: v1 = populacao1; v2 = populacao2; break;
            case 2: v1 = area1; v2 = area2; break;
            case 3: v1 = pib1; v2 = pib2; break;
            case 4: v1 = pontos1; v2 = pontos2; break;
            case 5: v1 = densidade1; v2 = densidade2; break;
        }

        if (i == atributo1) {
            valor1_carta1 = v1;
            valor1_carta2 = v2;
        }
        if (i == atributo2) {
            valor2_carta1 = v1;
            valor2_carta2 = v2;
        }
    }

    // Exibir valores dos atributos
    printf("\n=== Comparando %s x %s ===\n", nome1, nome2);
    printf("Atributo 1: %d\n", atributo1);
    printf("%s: %.2f | %s: %.2f\n", nome1, valor1_carta1, nome2, valor1_carta2);

    printf("Atributo 2: %d\n", atributo2);
    printf("%s: %.2f | %s: %.2f\n", nome1, valor2_carta1, nome2, valor2_carta2);

    // Comparações usando operador ternário e regra da densidade (menor vence)
    float parcial1 = (atributo1 == 5) ? ((valor1_carta1 < valor1_carta2) ? 1 : 0) : ((valor1_carta1 > valor1_carta2) ? 1 : 0);
    float parcial2 = (atributo2 == 5) ? ((valor2_carta1 < valor2_carta2) ? 1 : 0) : ((valor2_carta1 > valor2_carta2) ? 1 : 0);

    // Soma total (valor bruto, não pontos)
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Resultado
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    if (soma1 > soma2) {
        printf("🏆 Vencedor: %s\n", nome1);
    } else if (soma2 > soma1) {
        printf("🏆 Vencedor: %s\n", nome2);
    } else {
        printf("🤝 Empate!\n");
    }
    printf("\n=== Fim do jogo! Obrigado por jogar! ===\n");

    return 0;
}
