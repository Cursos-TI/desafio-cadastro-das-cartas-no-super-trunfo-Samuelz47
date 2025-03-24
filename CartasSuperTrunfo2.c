#include <stdio.h>
#include <string.h> // incluindo a biblioteca string.h para pegar os nomes compostos de cidades
int main() {
    char estado1, cidade1[30];
    float area1, pib1;
    int pop1, turisticos1, cod1; // Usei código como um inteiro e irei pegar apenas a parte numérica, visto que eu estava tendo problemas na hora de printar as duas funções como char
    char estado2, cidade2[30];
    float area2, pib2;
    int pop2, turisticos2, cod2;

    printf("Digite a letra do estado da carta 1:\n");
    scanf(" %c", &estado1);
    printf("Digite apenas código numérico da carta 1:\n");
    scanf("%d", &cod1);
    printf("Digite o nome da cidade da carta 1: \n");
    getchar(); // Limpa o '\n' antes de fgets()
    fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o '\n' capturado pelo fgets()
    printf("Digite a população da carta 1:\n");
    scanf("%d", &pop1);
    printf("Digite a área em km da carta 1:\n");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões da carta 1:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1:\n");
    scanf("%d", &turisticos1);

    float Densidade1 = (float) pop1 / area1 ;
    float PIBPC1 = (float) pib1 * 1000000000 / pop1 ;
    
    printf("\nDigite a letra do estado da carta 2:\n");
    scanf(" %c", &estado2);
    printf("Digite apenas código numérico da carta 2:\n");
    scanf("%d", &cod2);
    printf("Digite o nome da cidade da carta 2: \n");
    getchar();
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("Digite a população da carta 2:\n");
    scanf("%d", &pop2);
    printf("Digite a área em km da carta 2:\n");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões da carta 2:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2:\n");
    scanf("%d", &turisticos2);
    printf("\n");

    float Densidade2 = (float) pop2 / area2 ;
    float PIBPC2 = (float) pib2 * 1000000000 / pop2 ;

    printf("Carta 1:\nEstado: %c\nCódigo: %c%d\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n\n", estado1, estado1, cod1, cidade1, pop1, area1, pib1, turisticos1, Densidade1, PIBPC1);
    printf("Carta 2:\nEstado: %c\nCódigo: %c%d\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n\n", estado2, estado2, cod2, cidade2, pop2, area2, pib2, turisticos2, Densidade2, PIBPC2);

    return 0;
}