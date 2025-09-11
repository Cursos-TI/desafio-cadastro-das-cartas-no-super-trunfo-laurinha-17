#include <stdio.h>
int main(){

   printf(" \n*** Desáfio do Super Trunfo com Cartas, Versão Países ***\n");

   printf("\nÉ um jogo onde você terá duas Cartas, para cada uma delas, você irá definir as informações sobre as cidades.\n");

   printf("\n As informações necessárias são:\n");
   printf("→ Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
   printf("→ Código da Carta: Letra do estado, mais um número de 1 a 4.\n");
   printf("→ Nome da Cidade.\n");
   printf("→ População: O número de habitantes da cidade.\n");
   printf("→ Area: Coloque o valor total.\n");
   printf("→ PIB: O Produto Interno Bruto da cidade.\n");
   printf("→ Número de Pontos turísticos: Que a cidade possui.\n");

   printf("\n No final do jogo, o programa irá lhe dizer qual carta foi a vencedora, repassando os seguintes valores:(1) para quem venceu, e (0) para quem perdeu.\n");

   printf("\nAgora é contigo, boa sorte!\n");

    char estado[3];                  /*Uma letra de 'A' a 'H' (representando um dos oitos estados)*/ 
    char codigo[3];                 /*Código da carta: A letra do estado mais um número de 01 a 04*/
    char cidade[60];                /*Nome da cidade*/
    unsigned long int populacao;   /* O número de habitantes da cidade*/
    float area;                     /*A área da cidade em quilômetros quadrados*/
    float pib;                     /*O produto interno bruto da cidade*/
    int numero;                    /*A quantidade de pontos turísticos na cidade*/
    float densidade;               //densidade populacional;
    float capita;                  
    float segundadensidade; 
    float segundacapita;
    float densidadeinversa;                             
    float Superpoder;


   //Exibição das informações e leitura

    printf("\nCarta 1:\n"); /*Carta 1*/

    printf("Estado: ");
    scanf(" %2s", estado);

    printf("Código: ");
    scanf(" %2s", codigo);

    printf("Cidade: ");
    scanf(" %s", cidade);

    printf("População: ");
    scanf(" %lu", &populacao);

   printf("Área: ");
   scanf("%f",&area);

  // Calcula a densidade
  densidade = populacao / area;

  printf("PIB: ");
  scanf("%f", &pib);

  //calculo do pib
  capita = pib / populacao;
   
  printf("Número de pontos turísticos: ");
  scanf("%d", &numero);
  
  // armazenamento da densidade populacional e o per capita segunda vez
  segundadensidade = populacao / area;
  segundacapita = pib / populacao; 

  //Inverso da densidade populacional
  densidadeinversa = area / populacao;

 // Soma de todas as informações 
 Superpoder = populacao + area + pib + (float) numero + capita + densidadeinversa;
  
    char estado2[3];               /*Uma letra de 'A' a 'H' (representando um dos oitos estados)*/ 
    char codigo2[3];               /*Código da carta: A letra do estado mais um número de 01 a 04*/
    char cidade2[60];              /*Nome da cidade*/
    unsigned long int populacao2;  /* O número de habitantes da cidade*/
    float area2;                   /*A área da cidade em quilômetros quadrados*/
    float pib2;                    /*O produto interno bruto da cidade*/
    int numero2;                  /*A quantidade de pontos turísticos na cidade*/
    float densidade2;            //densidade populacional;
    float capita2;              //pib per capita;
    float segundadensidade2;
    float segundacapita2;
    float densidadeinversa2;
    float Superpoder2;

 printf("\nCarta 2:\n"); /*Carta 2*/

  printf("Estado: ");
  scanf(" %2s", estado2);

  printf("Código: ");
  scanf(" %2s", codigo2);

  printf("Cidade: ");
  scanf(" %s", cidade2);

  printf("População: ");
  scanf("%lu", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Números de Pontos Turísticos: ");
  scanf("%d", &numero2);
  
  //calculando a segunda vez
  densidade2 = populacao2 / area2;
  capita2 = pib2 / populacao2;

// armazenamento da densidade populacional e o per capita segunda vez
  segundadensidade2 = populacao2 / area2;
  segundacapita2 = pib2 / populacao2; 

  //Inverso da densidade populacional
  densidadeinversa2 = area2 / populacao2;
  
 // Soma de todas as informações 
 Superpoder2 = populacao2 + area2 + pib2 + (float) numero2 + capita2 + densidadeinversa2;

  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %lu\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Números de Pontos Turísticos: %d\n", numero);
  printf("A Densidade Populacional é: %.2f por hab/km²\n", densidade);
  printf("PIB Per Capita: %.2f em reais\n", capita);

  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Números de Pontos Turísticos: %d\n", numero2);
  printf("A Densidade Populacional: %.2f por hab/km²\n", densidade2);
  printf("PIB Per Capita: %.2f em reais\n", capita2);

//comparação das cartas

populacao > populacao2;
area > area2;
 pib > pib2;
 numero > numero2;
densidade2 < densidade;
capita2 > capita;
Superpoder > Superpoder2;

printf("\n Comparação das cartas:\n");
printf("População: Carta 1 venceu %d\n",populacao > populacao2);
printf("Área: Carta 1 venceu %d\n", area > area2 );
printf("PIB: Carta 2 venceu %d\n", pib2 > pib);
printf("Pontos Turísticos: Carta 1 venceu %d\n", numero > numero2 );
printf("Densidade Populacional: Carta 2 venceu %d\n", densidade2 < densidade);
printf("PIB per Capita: Carta 2 venceu %d\n", capita2 > capita);
printf("Super Poder: Carta 1 venceu %d\n", Superpoder > Superpoder2);

printf(" \nFim de jogo, mandou muito bem!!😉🫡\n");

  return 0;
  
}
