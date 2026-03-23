#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
            int opçao;


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


  // Desenvolvendo a Lógica do Jogo

        printf("==================== comparações carta vencedora ====================\n\n");
        
    if (superpoder1 > superpoder2){
        printf("Carta 1 é a vencedora!\n");
    }else {
        printf("Carta 2 é a vencedora!\n");
    }
    if (populaçao1 > populaçao2){
        printf("Carta 1 tem a maior populaçao que carta 2: VENCEU!!\n");     
    }else {
        printf("Carta 2 tem a maior populaçao que carta 1: VENCEU!!\n");
    }
    if (area1 > area2){
        printf("Carta 1 tem a maior AREA que carta 2: VENCEU!!\n");     
    }else {
        printf("Carta 2 tem a maior AREA que carta 1: VENCEU!!\n");
    }
    if (pib1 > pib2){
        printf("Carta 1 tem o maior PIB que carta 2: VENCEU!!\n");     
    }else {
        printf("Carta 2 tem o maior PIB que carta 1: VENCEU!!\n");
    }
    if (turistico1 > turistico2){
        printf("Carta 1 tem mais pontos turísticos que carta 2: VENCEU!!\n");     
    }else {
        printf("Carta 2 tem mais pontos turísticos que carta 1: VENCEU!!\n");
    }
    if (densidade1 > densidade2){
        printf("Carta 1 tem a maior Densidade Populacional que carta 2: VENCEU!!\n");     
    }else {
        printf("Carta 2 tem a maior Densidade Populacional que carta 1: VENCEU!!\n");
    }
    if (pibpercapita1 > pibpercapita2){
        printf("Carta 1 tem o maior PIB per Capita que carta 2: VENCEU!!\n\n");     
    }else {
        printf("Carta 2 tem o maior PIB per Capita que carta 1: VENCEU!!\n\n");
    }
    
    // Área para o jogador escolher o atributo para comparação

    printf("### Escolha o atributo para comparação: ###\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("0 - sair\n");
    printf("Opção: ");
    scanf("%d", &opçao);

    printf("\n#### RESULTADO DA RODADA ####\n\n");

    switch (opçao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu hab/km² | %s: %lu hab/km²\n", cidade1, populaçao1, cidade2, populaçao2);
            if (populaçao1 > populaçao2) printf("Vencedor: %s\n\n", cidade1);
            else if (populaçao2 > populaçao1) printf("Vencedor: %s\n\n", cidade2);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²| %s: %.2f km²\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) printf("Vencedor: %s\n\n", cidade1);
            else if (area2 > area1) printf("Vencedor: %s\n\n", cidade2);
            else printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais | %s: %.2f bilhões de reais\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n\n", cidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n\n", cidade2);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d | %s: %d\n", cidade1, turistico1, cidade2, turistico2);
            if (turistico1 > turistico2) printf("Vencedor: %s\n\n", cidade1);
            else if (turistico2 > turistico1) printf("Vencedor: %s\n\n", cidade2);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f | %s: %.2f\n ", cidade1, area1, cidade2, area2);
            if (densidade1 < densidade2) printf("Vencedor: %s (Menor densidade)\n\n", cidade1);
            else if (densidade2 < densidade1) printf("Vencedor: %s (Menor densidade)\n\n", cidade2);
            else printf("Empate!\n");
            break;
        case 0:
      printf("Saindo...\n");
      break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    // Implementando Comparações Avançadas com Atributos Múltiplos
    // NIVEL MESTRE

int atributo1, atributo2;
    float valor1, valor2, valor01, valor02;
    float soma1, soma2;
    char *vencedor_1, *vencedor_2, *vencedor_final;

    printf("\n### Escolha o primeiro atributo para comparação: ###\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Menu para o segundo atributo
    printf("\n### Escolha o segundo atributo para comparação (diferente do primeiro): ###\n");
    switch (atributo1) {
        case 1:
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            break;
        case 2:
            printf("1 - População\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            break;
        case 3:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            break;
        case 4:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            break;
        case 5:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("6 - PIB per Capita\n");
            break;
        case 6:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            break;
        default:
            printf("Opção inválida para primeiro atributo.\n");
            return 0;
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    switch (atributo1) {
        case 1: 
               valor1 = populaçao1; valor2 = populaçao2; 
        break;
        case 2: 
               valor1 = area1; valor2 = area2; 
        break;
        case 3: 
               valor1 = pib1; valor2 = pib2; 
        break;
        case 4: 
               valor1 = turistico1; valor2 = turistico2; 
        break;
        case 5: 
               valor1 = densidade1; valor2 = densidade2; 
        break;
        case 6: 
               valor1 = pibpercapita1; valor2 = pibpercapita2; 
        break;
    }
    switch (atributo2) {
        case 1: 
               valor01 = populaçao1; valor02 = populaçao2; 
        break;
        case 2: 
               valor01= area1; valor02 = area2; 
        break;
        case 3: 
               valor01= pib1; valor02 = pib2; 
        break;
        case 4: 
               valor01= turistico1; valor02 = turistico2; 
        break;
        case 5: 
               valor01= densidade1; valor02 = densidade2; 
        break;
        case 6: 
               valor01= pibpercapita1; valor02 = pibpercapita2; 
        break;
    }

    
    if (atributo1 == 5) {
        
        vencedor_1 = (valor1 < valor2) ? cidade1 : ((valor2 < valor1) ? cidade2 : "Empate");
    } else {
        
        vencedor_1 = (valor1 > valor2) ? cidade1 : ((valor2 > valor1) ? cidade2 : "Empate");
    }

    
    if (atributo2 == 5) {
        
        vencedor_2 = (valor01 < valor02) ? cidade1 : ((valor02 < valor01) ? cidade2 : "Empate");
    } else {
        
        vencedor_2 = (valor01 > valor02) ? cidade1 : ((valor02 > valor01) ? cidade2 : "Empate");
    }

    // Calcular somas
    soma1 = valor1 + valor01;
    soma2 = valor2 + valor02;

    // Comparar somas
    if (soma1 > soma2) {
        vencedor_final = cidade1;
    } else if (soma2 > soma1) {
        vencedor_final = cidade2;
    } else {
        vencedor_final = "Empate";
    }

    
    printf("\n#### RESULTADO DA COMPARAÇÃO AVANÇADA ####\n\n");
    printf("Países: %s vs %s\n\n", cidade1, cidade2);

    char *nome_1, *nome_2;


    switch (atributo1) {
        case 1: 
               nome_1 = "População"; 
               break;
        case 2:  
               nome_1 = "Área"; 
               break;
        case 3: 
               nome_1 = "PIB"; 
               break;
        case 4: 
               nome_1 = "Pontos Turísticos"; 
               break;
        case 5: 
               nome_1 = "Densidade Populacional"; 
               break;
        case 6: 
               nome_1 = "PIB per Capita"; 
               break;
    }
    switch (atributo2) {
        case 1: 
               nome_2 = "População"; 
               break;
        case 2: 
               nome_2 = "Área"; 
               break;
        case 3: 
               nome_2 = "PIB"; 
               break;
        case 4: 
               nome_2 = "Pontos Turísticos"; 
               break;
        case 5: 
               nome_2 = "Densidade Populacional"; 
               break;
        case 6: 
               nome_2 = "PIB per Capita"; 
               break;
    }

    printf("Atributos escolhidos: %s e %s\n\n", nome_1, nome_2);

    printf("%s - %s: ", cidade1, nome_1);
    if (atributo1 == 1) printf("%.0f", valor1);
    else printf("%.2f", valor1);
    printf(" | %s - %s: ", cidade2, nome_1);
    if (atributo1 == 1) printf("%.0f", valor2);
    else printf("%.2f", valor2);
    printf("\nVencedor do atributo %s: %s\n\n", nome_1, vencedor_1);

    printf("%s - %s: ", cidade1, nome_2);
    if (atributo2 == 1) printf("%.0f", valor01);
    else printf("%.2f", valor01);
    printf(" | %s - %s: ", cidade2, nome_2);
    if (atributo2 == 1) printf("%.0f", valor02);
    else printf("%.2f", valor02);
    printf("\nVencedor do atributo %s: %s\n\n", nome_2, vencedor_2);

    printf("Soma dos atributos para %s: %.2f\n", cidade1, soma1);
    printf("Soma dos atributos para %s: %.2f\n", cidade2, soma2);
    printf("Vencedor final: %s\n", vencedor_final);

    return 0;
} 
