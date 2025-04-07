#include <stdio.h>
  // Estutrura para representa uma carta

  typedef struct {
  char estado[50];
    char codigo[20];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;


// Função para calcular Densidade Populacional e PIB per capita
void calcularIndicadores(Carta *c) {
    if (c->area > 0 && c->populacao > 0) {
        c->densidadePopulacional = c->populacao / c->area;
        c->pibPerCapita = c->pib / c->populacao;
    } else {
        c->densidadePopulacional = 0;
        c->pibPerCapita = 0;
    }
}

// Função para imprimir os dados da carta
void imprimirCarta(Carta c) {
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidadePopulacional);
    printf("PIB per capita: %.2f\n", c.pibPerCapita);
    printf("-------------------------------------\n");
}

int main() {
    // Cadastro das duas cartas (dados pré-definidos)
    Carta carta1 = {"São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 2300000.00, 15};
    Carta carta2 = {"Rio de Janeiro", "RJ01", "Rio de Janeiro", 6700000, 1182.30, 400000.00, 12};

    // Calcular indicadores das duas cartas
    calcularIndicadores(&carta1);
    calcularIndicadores(&carta2);

     // Imprimir cartas
     printf("=== Carta 1 ===\n");
     imprimirCarta(carta1);
     printf("=== Carta 2 ===\n");
     imprimirCarta(carta2);

      // Comparação (Escolha do atributo: População)
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;