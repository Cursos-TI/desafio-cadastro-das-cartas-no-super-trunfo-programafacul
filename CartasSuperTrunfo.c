#include <stdio.h>

typedef struct {
    char estado[50];
    int codigo;
    char nomeCidade[50];
    int populacao;
    float area;
    double pib;
    int pontosTuristicos;
    int densidadePopulacional;
    int pibPerCapita;
    float SuperPoder;

} Carta;

int main() {
    Carta carta1, carta2;

    printf("=== Cadastro de Carta 1 ===\n");

    printf("Digite o Estado: ");
    scanf(" %[^\n]", carta1.estado);

    printf("Digite o Código da Cidade: ");
    scanf("%d", &carta1.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a População: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &carta1.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);



    printf("=== Cadastro de Carta 2 ===\n");

    printf("Digite o Estado: ");
    scanf(" %[^\n]", carta2.estado);

    printf("Digite o Código da Cidade: ");
    scanf("%d", &carta2.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a População: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &carta2.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);


    // Cálculos

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao; 

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;  

    carta1.SuperPoder = carta1.populacao + carta1.area + carta1.pib * 100 + carta1.pontosTuristicos + carta1.densidadePopulacional;
   
    carta2.SuperPoder = carta2.populacao + carta2.area + carta2.pib * 100 + carta2.pontosTuristicos + carta2.densidadePopulacional;


    // Saída formatada
   
    printf ("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %d\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2lf bilhões\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %d habitantes por km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %d\n", carta1.pibPerCapita);
    printf("O SuperPoder e: %.2lf\n", carta1.SuperPoder);


    printf ("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %d\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2lf bilhões\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %d habitantes por km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %d\n", carta2.pibPerCapita);
    printf("O SuperPoder e: %.2lf\n", carta2.SuperPoder);


    // Comparaçao de Cartas

    printf("\n--- Comparaçao de Cartas ---\n");

    printf("\n--- Populaçao: ---\n ");
   
    printf("carta %d venceu!\n", (carta1.populacao > carta2.populacao));
    
    printf("\n--- Pib per Capital:---\n ");

    printf("Carta %d venceu!\n", (carta1.pibPerCapita > carta2.pibPerCapita) );


    printf("\n--- Superpoder: ----\n ");
   
    printf("Carta %d vence  no SuperPoder!\n", (carta1.SuperPoder > carta2.SuperPoder) );





    return 0;
}
