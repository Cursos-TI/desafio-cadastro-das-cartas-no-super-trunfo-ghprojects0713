#include <stdio.h>

int main(){
    printf("Super Trunfo\n");
    char estado1 [50] = "Minas Gerais";
    char codigo1 [5] = "A01";
    char cidade1 [50] = "Belo Horizonte";
    int populacao1 = 2315560;
    float area1 = 331.3;
    float PIB1 = 49.000000000; 
    int pontosturisticos1 = 28;
    float densidadepopulacional1 = (float) populacao1 / area1;
    float pibpercapita1 = (float) PIB1 / populacao1;
    float superPoder1 = populacao1 + area1 + PIB1 + pontosturisticos1 + pibpercapita1 + 1 / densidadepopulacional1;

    printf(" \n");
    printf("Carta 1\n\n");

    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("população: 2315560\n", populacao1);
    printf("Área: %F\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("densidade populacional: %f\n", densidadepopulacional1);
    printf("PIB percapita: %f\n", pibpercapita1);
    printf("Super poder: %.2f\n", superPoder1);

    char estado2 [50] = "Flórida";
    char codigo2 [5] = "B01";
    char cidade2 [50] = "Orlando";
    int populacao2 = 2509454;
    float area2 = 261.5;
    float PIB2 = 121.000000000;
    int pontosturisticos2 = 100;
    float densidadepopulacional2 = (float) populacao2 / area2;
    float pibpercapita2 = (float) PIB2 / populacao2;
    float superPoder2 = populacao2 + area2 + PIB2 + pontosturisticos2 + pibpercapita2 + 1 / densidadepopulacional2;

    printf(" \n");
    printf("Carta 2\n\n");

    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %f\n", densidadepopulacional2);
    printf("Pib per capita: %f\n", pibpercapita2);
    printf("Super poder: %.2f\n\n", superPoder2);

    printf("A população de %s é maior que a população de %s? %d\n ",
                          cidade1,
                          cidade2,
                 (populacao1) > (populacao2));

    printf("A área de %s é maior que a área de %s? %d\n",
                          cidade1,
                          cidade2,
                      (area1) > (area2));

    printf("O PIB de %s é maior que o PIB de %s? %d\n",
                          cidade1,
                          cidade2,
                       (PIB1) > (PIB2));

    printf("O número de pontos turísticos de %s é maior que o de %s? %d\n",
                          cidade1,
                          cidade2,
          (pontosturisticos1) > (pontosturisticos2));

    printf("O PIB per capita de %s é maior que o de %s? %d\n",
                          cidade1,
                          cidade2,
              (pibpercapita1) > (pibpercapita2));

    printf("A densidade populacional de %s é maior que a de %s? %d\n",
                          cidade1,
                          cidade2,
     (densidadepopulacional1) > (densidadepopulacional2));

    printf("O super poder de %s é maior que o de %s? %d\n",
                          cidade1,
                          cidade2,
                (superPoder1) > (superPoder2));

    return 0;
}