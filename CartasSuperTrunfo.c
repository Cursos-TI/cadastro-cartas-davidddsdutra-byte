#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
            
              char estado1, estado2;
            char codigo1[4], codigo2[4];
            char cidade1[50], cidade2[50];
            int populaçao1, turistico1, populaçao2, turistico2, carta1, carta2;
            float area1, pib1, area2, pib2;

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
     scanf(" %[^\n]", &cidade1);
               printf("digite o nome da cidade 2: \n");
                     scanf(" %[^\n]", &cidade2);
     
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
     
  // Área para exibição dos dados da cidade
  
printf("======= Carta 1 =======\n \n");
  printf("carta: %d \n", carta1);
  printf("estado: %c \n", estado1);
  printf("codigo: %s\n", codigo1);
  printf("nome da cidade: %s \n", cidade1);
  printf("populaçao: %d \n", populaçao1);
  printf("area: %.2f km² \n", area1); 
  printf("pib: %.2f bilhões de reais \n", pib1); 
  printf("Número de Pontos Turísticos: %d \n\n", turistico1); 
  
  printf("======= Carta 2 =======\n \n");
  printf("carta: %d \n", carta2);
  printf("estado: %c \n", estado2);
  printf("codigo: %s\n", codigo2);
  printf("nome da cidade: %s \n", cidade2);
  printf("populaçao: %d \n", populaçao2);
  printf("area: %.2f km² \n", area2); 
  printf("pib: %.2f bilhões de reais \n", pib2); 
  printf("Número de Pontos Turísticos: %d \n", turistico2); 
return 0;
} 
