#include <stdio.h>
int main(){

   printf(" \n*** Desáfio do Super Trunfo com Cartas, Versão Países ***\n");

   printf("\nÉ um jogo onde você terá duas Cartas, para cada uma delas, você irá definir as informações sobre as cidades.\n");

   printf("\n As informações necessárias são:\n");
   printf("→ Estado: Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
   printf("→ Código da Carta: Letra do estado,mais um número de 01 a 04\n");
   printf("→ Nome da Cidade\n");
   printf("→ População: O número de habitantes da cidade\n");
   printf("→ rea (em km²)\n");
   printf("→ PIB: O Produto Interno Bruto da cidade\n");
   printf("→ Número de Pontos turísticos: Que a cidade possui\n");

   printf("\nAgora é contigo, boa sorte!\n");

    char estado[3];  /*Uma letra de 'A' a 'H' (representando um dos oitos estados)*/ 
    char codigo[3];   /*Código da carta: A letra do estado mais um número de 01 a 04*/
    char cidade[60];  /*Nome da cidade*/
    int populacao;   /* O número de habitantes da cidade*/
    float area;     /*A área da cidade em quilômetros quadrados*/
    float pib;     /*O produto interno bruto da cidade*/
    int numero;   /*A quantidade de pontos turísticos na cidade*/
    float densidade;  //densidade populacional;
    float capita;     // pib per capita;
 
    printf("\nCarta 1:\n"); /*Carta 1*/

    printf("Estado: ");
    scanf(" %2s", estado);

    printf("Código: ");
    scanf(" %2s", codigo);

    printf("Cidade: ");
    scanf(" %s", cidade);

    printf("População: ");
    scanf(" %d", &populacao);

   printf("Área: ");
   scanf("%f",&area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Número de pontos turísticos: ");
  scanf("%d", &numero);

  densidade = (float) populacao / area;
  capita = pib / (float) populacao;

    char estado2[3];  /*Uma letra de 'A' a 'H' (representando um dos oitos estados)*/ 
    char codigo2[3]; /*Código da carta: A letra do estado mais um número de 01 a 04*/
    char cidade2[60]; /*Nome da cidade*/
    int populacao2;  /* O número de habitantes da cidade*/
    float area2;    /*A área da cidade em quilômetros quadrados*/
    float pib2;    /*O produto interno bruto da cidade*/
    int numero2;  /*A quantidade de pontos turísticos na cidade*/
    float densidade2; //densidade populacional;
    float capita2;   //pib per capita;

    printf("\nCarta 2:\n"); /*Carta 2*/

  printf("Estado: ");
  scanf(" %2s", estado2);

  printf("Código: ");
  scanf(" %2s", codigo2);

  printf("Cidade: ");
  scanf(" %s", cidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Números de Pontos Turísticos: ");
  scanf("%d", &numero2);
  
  densidade2 = (float) populacao2 / area2;
  capita2 = pib / (float) populacao2;

  printf("\nCarta 1:\n");

  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Números de Pontos Turísticos: %d\n", numero);
  printf("A Densidade Populacional é: %.2f por hab/km²\n", densidade);
  printf("PIB Per Capita: %.2f em reais\n", capita);

  printf("\nCarta 2:\n");

  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Números de Pontos Turísticos: %d\n", numero2);
  printf("A Densidade Populacional: %.2f por hab/km²\n", densidade2);
  printf("PIB Per Capita: %.2f em reais\n", capita2);


  return 0;
  
}
