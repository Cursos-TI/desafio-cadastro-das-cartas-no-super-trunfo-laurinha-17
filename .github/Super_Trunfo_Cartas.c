#include <stdio.h>
int main(){

   printf("Desáfio do Super Trunfo com Cartas, Versão Países\n");

   printf("É um jogo onde você terá duas Cartas, para cada uma delas, você irá definir as informações sobre as cidades.\n");

   printf(" As informações necessárias são:\n");
   printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
   printf("Código da Carta: Letra do estado,mais um número de 01 a 04\n");
   printf("Nome da Cidade\n");
   printf("População: O número de habitantes da cidade\n");
   printf("rea (em km²)\n");
   printf("PIB: O Produto Interno Bruto da cidade\n");
   printf("Número de Pontos turísticos: Que a cidade possui\n");

   printf("\nAgora é contigo, boa sorte!\n");

    char estado[3];  /*Uma letra de 'A' a 'H' (representando um dos oitos estados)*/ 
    char codigo[3];   /*Código da carta: A letra do estado mais um número de 01 a 04*/
    char cidade[60];  /*Nome da cidade*/
    int populacao;   /* O número de habitantes da cidade*/
    float area;     /*A área da cidade em quilômetros quadrados*/
    float pib;     /*O produto interno bruto da cidade*/
    int numero;   /*A quantidade de pontos turísticos na cidade*/
 
 
    printf("Carta 1:\n"); /*Carta 1*/

    printf("Estado: ");
    scanf(" %2s", estado);

    printf("Código: ");
    scanf(" %3s", codigo);

    printf("Cidade:");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

   printf("Área: ");
   scanf("%f",&area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Número de pontos turísticos: ");
  scanf("%d", &numero);

    char Estado[3];  /*Uma letra de 'A' a 'H' (representando um dos oitos estados)*/ 
    char Codigo[3]; /*Código da carta: A letra do estado mais um número de 01 a 04*/
    char Cidade[60]; /*Nome da cidade*/
    int Populacao;  /* O número de habitantes da cidade*/
    float Area;    /*A área da cidade em quilômetros quadrados*/
    float Pib;    /*O produto interno bruto da cidade*/
    int Numero;  /*A quantidade de pontos turísticos na cidade*/

    printf("\nCarta 2:\n"); /*Carta 2*/

  printf("Estado: ");
  scanf(" %2s", Estado);

  printf("Código: ");
  scanf("%3s", Codigo);

  printf("Cidade: ");
  scanf(" %s", Cidade);

  printf("População: ");
  scanf("%d", &Populacao);

  printf("Área: ");
  scanf("%f", &Area);

  printf("PIB: ");
  scanf("%f", &Pib);

  printf("Números de Pontos Turísticos: ");
  scanf("%d", &Numero);


  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Números de Pontos Turísticos: %d\n", numero);

  printf("\nCarta 2:\n");
  printf("Estado: %s\n", Estado);
  printf("Código: %s\n", Codigo);
  printf("Cidade: %s\n", Cidade);
  printf("População: %d\n", Populacao);
  printf("Área: %.2f km²\n", Area);
  printf("PIB: %.2f bilhões de reais\n", Pib);
  printf("Números de Pontos Turísticos: %d\n", Numero);

  return 0;
  
}
