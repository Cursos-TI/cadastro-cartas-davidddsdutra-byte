#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
            
              char estado;
            char codigo[10];
            char cidade[50];
            int populaçao, turistico, carta;
            float area, pib;

  // Área para entrada de dados

        printf("digite o numero da carta: \n");
     scanf(" %d", &carta);
     printf("carta: %d \n", carta);
     
        printf("digite uma letra do estado: \n");
     scanf(" %c", &estado);
     printf("estado: %c \n", estado);
     
       printf("digite o codigo da carta: \n");
     scanf(" %3s", codigo);
     printf("codigo: %s \n", codigo);
     
       printf("digite o nome da cidade: \n");
     scanf(" %[^\n]", cidade);
     printf("nome da cidade: %s \n", cidade);

       printf("digite o numero de populaçao dessa cidade: \n");
     scanf(" %d", &populaçao);
     printf("populaçao: %d \n", populaçao); 
     
       printf("digite a area da cidade em km²: \n");
     scanf(" %f", &area);
     printf("area: %.2f km² \n", area);  

       printf("digite o Produto Interno Bruto da cidade: \n");
     scanf("%f", &pib);
     printf("pib: %.2f bilhões de reais \n", pib); 
     
       printf("digite quantidade de pontos turísticos na cidade: \n");
     scanf("%d", &turistico);
     printf("Número de Pontos Turísticos: %d \n", turistico);  

  // Área para exibição dos dados da cidade

  printf("carta: %d \n", carta);
  printf("estado: %c \n", estado);
  printf("codigo: %s \n", codigo);
  printf("nome da cidade: %s \n", cidade);
  printf("populaçao: %d \n", populaçao);
  printf("area: %.2f km² \n", area); 
  printf("pib: %.2f bilhões de reais \n", pib); 
  printf("Número de Pontos Turísticos: %d \n", turistico); 
return 0;
} 
