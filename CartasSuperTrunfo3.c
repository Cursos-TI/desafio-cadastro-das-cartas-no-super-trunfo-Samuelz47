#include <stdio.h>
#include <string.h> // incluindo a biblioteca string.h para pegar os nomes compostos de cidades
int main() {
    char estado1, cidade1[30];
    float area1, pib1;
    int turisticos1, cod1; // Usei código como um inteiro e irei pegar apenas a parte numérica, visto que eu estava tendo problemas na hora de printar as duas funções como char
    char estado2, cidade2[30];
    float area2, pib2;
    int turisticos2, cod2;
    unsigned long int pop1, pop2;

    printf("Digite a letra do estado da carta 1:\n");
    scanf(" %c", &estado1);
    printf("Digite apenas código numérico da carta 1:\n");
    scanf("%d", &cod1);
    printf("Digite o nome da cidade da carta 1: \n");
    getchar(); // Limpa o '\n' antes de fgets()
    fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o '\n' capturado pelo fgets() 
    printf("Digite a população da carta 1:\n");
    scanf("%u", &pop1);
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
    scanf("%u", &pop2);
    printf("Digite a área em km da carta 2:\n");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões da carta 2:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2:\n");
    scanf("%d", &turisticos2);
    printf("\n");

    float Densidade2 = (float) pop2 / area2 ;
    float PIBPC2 = (float) pib2 * 1000000000 / pop2 ;

    long double SuperP1 = (long double) pop1 + area1 + pib1 + turisticos1 + PIBPC1 - Densidade1;
    long double SuperP2 = (long double) pop2 + area2 + pib2 + turisticos2 + PIBPC2 - Densidade2;

    int comppop = pop1 > pop2;
    int cartapop = (comppop - 2) * -1;

    printf("População: Carta %d venceu (%d)\n", cartapop, comppop);

    int comparea = area1 > area2;
    int cartaarea = (comparea - 2) * -1;

    printf("Area: Carta %d venceu (%d)\n", cartaarea, comparea);

    int comppib = pib1 > pib2;
    int cartapib = (comppib - 2) * -1;

    printf("PIB: Carta %d venceu (%d)\n", cartapib, comppib);

    int compturisticos = turisticos1 > turisticos2;
    int cartaturisticos = (compturisticos - 2) * -1;

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", cartaturisticos, compturisticos);

    int compPIBPC = PIBPC1 > PIBPC2;
    int cartaPIBPC = (compPIBPC - 2) * -1;

    printf("PIB per Capita: Carta %d venceu (%d)\n", cartaPIBPC, compPIBPC);

    int compdens = Densidade1 < Densidade2;
    int cartadens = (compdens - 2) * -1;

    printf("Densidado Populacional: Carta %d venceu (%d)\n", cartadens, compdens);

    int compSuperP = SuperP1 > SuperP2;
    int cartaSuperP = (compSuperP - 2) * -1;

    printf("Super Poder: Carta %d venceu (%d)\n", cartaSuperP, compSuperP);


    return 0;
}