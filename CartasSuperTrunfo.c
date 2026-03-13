#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
            
              char estado1, estado2;
            char codigo1[4], codigo2[4];
            char cidade1[50], cidade2[50];
            int turistico1, turistico2, carta1, carta2;
            unsigned long int populaçao1, populaçao2;
            float area1, pib1, area2, pib2;
            float densidade1 = (float) populaçao1 / area1; 
            float densidade2 = (float) populaçao2 / area2;
            float pibpercapita1 = pib1 / populaçao1;
            float pibpercapita2 = pib2 / populaçao2;
            float superpoder1, superpoder2;



  // Área para entrada de dados
     
  printf("*** Criando as Cartas do Super Trunfo *** \n \n");

        printf("digite o numero da carta 1: \n");
     scanf(" %d", &carta1);
               printf("digite o numero da carta 2: \n");
                     scanf(" %d", &carta2);
     
        printf("digite uma letra do estado 1: \n");
     scanf(" %c", &estado1);
               printf("digite uma letra do estado 2: \n");
                     scanf(" %c", &estado2);
     
     
       printf("digite o codigo da carta 1: \n");
     scanf("%3s", codigo1);
               printf("digite o codigo da carta 2: \n");
                     scanf("%3s", codigo2);
     
       printf("digite o nome da cidade 1: \n");
     scanf(" %[^\n]", cidade1);
               printf("digite o nome da cidade 2: \n");
                     scanf(" %[^\n]", cidade2);
     
       printf("digite o numero de populaçao dessa cidade 1: \n");
     scanf(" %d", &populaçao1);
               printf("digite o numero de populaçao dessa cidade 2: \n");
                     scanf(" %d", &populaçao2);
     
       printf("digite a area da cidade em km² 1: \n");
     scanf(" %f", &area1);
               printf("digite a area da cidade em km² 2: \n");
                     scanf(" %f", &area2);

       printf("digite o Produto Interno Bruto da cidade 1: \n");
     scanf(" %f", &pib1);
               printf("digite o Produto Interno Bruto da cidade 2: \n");
                     scanf(" %f", &pib2);
     
     
       printf("digite quantidade de pontos turísticos na cidade 1: \n");
     scanf(" %d", &turistico1);
               printf("digite quantidade de pontos turísticos na cidade 2: \n");
                     scanf(" %d", &turistico2);
     
       printf("Digite a Densidade Populacional da carta 1: \n");
     scanf("%f", &densidade1);
               printf("Digite a Densidade Populacional da carta 2: \n");
                     scanf("%f", &densidade2);

       printf("Digite o PIB per Capita da carta 1: \n");
     scanf("%f", &pibpercapita1);
               printf("Digite o PIB per Capita da carta 2: \n");
     scanf("%f", &pibpercapita2);
     
     
// CALCULANDO      

      densidade1 = (float)populaçao1 / area1;
      densidade2 = (float)populaçao2 / area2;
      pibpercapita1 = pib1 / populaçao1;
      pibpercapita2 = pib2 / populaçao2;
      superpoder1 = populaçao1 + area1 + pib1 + turistico1 + pibpercapita1 + (1 / densidade1);
      superpoder2 = populaçao2 + area2 + pib2 + turistico2 + pibpercapita2 + (1 / densidade2);                 

     


  // Área para exibição dos dados da cidade
  
printf("======= Carta 1 =======\n \n");
  printf("carta: %d \n", carta1);
  printf("estado: %c \n", estado1);
  printf("codigo: %s\n", codigo1);
  printf("nome da cidade: %s \n", cidade1);
  printf("populaçao: %d \n", populaçao1);
  printf("area: %.2f km² \n", area1); 
  printf("pib: %.2f bilhões de reais \n", pib1); 
  printf("Número de Pontos Turísticos: %d \n", turistico1); 
  printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
  printf("PIB per Capita: %.2f reais \n\n", pibpercapita1);
  
  printf("======= Carta 2 =======\n \n");
  printf("carta: %d \n", carta2);
  printf("estado: %c \n", estado2);
  printf("codigo: %s\n", codigo2);
  printf("nome da cidade: %s \n", cidade2);
  printf("populaçao: %d \n", populaçao2);
  printf("area: %.2f km² \n", area2); 
  printf("pib: %.2f bilhões de reais \n", pib2); 
  printf("Número de Pontos Turísticos: %d \n", turistico2);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
  printf("PIB per Capita: %.2f reais \n\n", pibpercapita2);


  // Coparaçoa das cartas

        printf("==================== comparações entre as cartas ====================\n\n");
          
    printf("Populacao: Carta 1 venceu (%d)\n", populaçao1 > populaçao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", turistico1 > turistico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);    




return 0;
} 
