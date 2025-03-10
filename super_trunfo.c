#include <stdio.h>

int main(){
    printf("***Super Trunfo***\n");
    char estado1 [50] = "Minas Gerais";
    char codigo1 [5] = "A01";
    char cidade1 [50] = "Belo Horizonte";
    int populacao1 = 2315560;
    float area1 = 331.3;
    float PIB1 = 49000000000; 
    int pontosturisticos1 = 28;
    float densidadepopulacional1 = (float) populacao1 / area1;
    float pibpercapita1 = (float) PIB1 / populacao1;

    printf(" \n");
    printf("Carta 1\n\n");

    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %F\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("densidade populacional: %.2f\n", densidadepopulacional1);
    printf("PIB percapita: %.2f\n", pibpercapita1);

    char estado2 [50] = "Flórida";
    char codigo2 [5] = "B01";
    char cidade2 [50] = "Orlando";
    int populacao2 = 2509454;
    float area2 = 261.5;
    float PIB2 = 121000000000;
    int pontosturisticos2 = 100;
    float densidadepopulacional2 = (float) populacao2 / area2;
    float pibpercapita2 = (float) PIB2 / populacao2;

    printf(" \n");
    printf("Carta 2\n\n");

    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidadepopulacional2);
    printf("pib per capita: %.2f\n", pibpercapita2);

}