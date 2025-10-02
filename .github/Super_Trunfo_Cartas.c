#include <stdio.h>
#include <stdlib.h>

int main(){

   printf(" \n*** Desáfio do Super Trunfo com Cartas, Versão Países ***\n");

   printf("\nÉ um jogo onde você terá duas Cartas, para cada uma delas, você irá definir as informações sobre as cidades.\n");

   printf("\n As informações necessárias são:\n");
   printf("→ Nome do País:\n");
   printf("→ Estado: Apenas aabreviação. EX: SP\n");
   printf("→ Nome da Cidade\n");
   printf("→ População\n");
   printf("→ Area: Coloque o valor total.\n");
   printf("→ PIB: O Produto Interno Bruto da cidade.\n");
   printf("→ Número de Pontos turísticos\n");

   printf("\n No final do jogo, o programa irá lhe dizer qual carta foi a vencedora, repassando os seguintes valores:(1) para quem venceu, e (0) para quem perdeu.\n");

   printf("\nAgora é contigo, boa sorte!\n");

   //Declarando as variáveis das Cartas
    char nomePais[100];  
    char estado[3];    
    char cidade[70];                             
    unsigned long int populacao;                
    float area;                     
    float pib;                     
    int numero;                    
    float densidade;              
    float capita;                  
    float segundadensidade; 
    float segundacapita;
    float densidadeinversa;                             
    float Superpoder;

    char nomePais2[100];  
    char estado2[3];                          
    char cidade2[70];              
    unsigned long int populacao2;  
    float area2;                  
    float pib2;                    
    int numero2;                  
    float densidade2;            
    float capita2;              
    float segundadensidade2;
    float segundacapita2;
    float densidadeinversa2;
    float Superpoder2;


   //Exibição das informações e leituras

    printf("\nCarta 1:\n"); /*Carta 1*/

    printf("País: ");
    scanf(" %s", nomePais);

    printf("Estado: ");
    scanf(" %2s", estado);

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
  
   
 printf("\nCarta 2:\n"); /*Carta 2*/

  printf("País: ");
  scanf(" %s", nomePais2);

  printf("Estado: ");
  scanf(" %2s", estado2);

  printf("Cidade: ");
  scanf(" %s", cidade2);

  printf("População: ");
  scanf("%lu", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  //Calculando a Densidade Populacional
  densidade2 = populacao2 / area2;

  printf("PIB: ");
  scanf("%f", &pib2);

  //Calculando capita
   capita2 = pib2 / populacao2;

  printf("Números de Pontos Turísticos: ");
  scanf("%d", &numero2);

// armazenamento da densidade populacional e o per capita segunda vez
  segundadensidade2 = populacao2 / area2;
  segundacapita2 = pib2 / populacao2  ; 

  //Inverso da densidade populacional
  densidadeinversa2 = area2 / populacao2;
  
 // Soma de todas as informações 
 Superpoder2 = populacao2 + area2 + pib2 + (float) numero2 + capita2 + densidadeinversa2;

 //exibir as informaçoes das cartas
  printf("\nCarta 1:\n");
  printf("País: %s\n", nomePais);
  printf("Estado: %s\n", estado);
  printf("Cidade: %s\n", cidade);
  printf("População: %lu\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Números de Pontos Turísticos: %d\n", numero);
  printf("A Densidade Populacional é: %.2f por hab/km²\n", densidade);
  printf("PIB Per Capita: %.2f em reais\n", capita);

  printf("\nCarta 2:\n");
  printf("País: %s\n", nomePais2);
  printf("Estado: %s\n", estado2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Números de Pontos Turísticos: %d\n", numero2);
  printf("A Densidade Populacional: %.2f por hab/km²\n", densidade2);
  printf("PIB Per Capita: %.2f em reais\n", capita2);

//menu de comparação 
int opcao;

printf("\n### Comparação de Cartas ###\n");
printf("Escolha qual alternativa quer comparar entres as cartas:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB \n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
  printf("População:\n");

  if (populacao > populacao2)
  {
    printf("Carta 1 (%s) - População: %lu\n",nomePais, populacao);
    printf("Carta 2 (%s) - População: %lu\n",nomePais2, populacao2);
    printf("Carta 1 Venceu!\n");
  }else if(populacao2 > populacao){
    printf("Carta 2 (%s) - População: %lu \n",nomePais2, populacao2);
    printf("Carta 1 (%s) - População: %lu\n",nomePais, populacao);
    printf("Carta 2 Venceu!\n");
  }else{
    printf("Carta 1 (%s) - População: %lu -  Carta 2 (%s) - População: %lu - Empataram!\n",nomePais, populacao, nomePais2, populacao2);
  }
  break;
case 2:
 printf("Área:\n");

  if (area > area2)
  {
   printf("Carta 1 (%s) - Área: %f\n", nomePais, area);
   printf("Carta 2 (%s) - Área: %f\n", nomePais2, area2);
   printf(" Carta 1 Venceu");
  } else if ( area2> area){
    printf("Carta 2 (%s) - Área: %f\n", nomePais2, area2);
    printf("Carta 1 (%s) - Área: %f\n", nomePais, area);
    printf(" Carta 2 Venceu");
  }else{
     printf("Carta 1 (%s) - Área: %f - Carta 2 (%s) - Área: %f - Empatou!\n", nomePais, area,nomePais2, area2);
  }
  break;
case 3:
  printf("PIB:\n");

  if (pib > pib2)
  {
    printf("Carta 1 (%s) - PIB: %f\n", nomePais, pib);
    printf("Carta 2 (%s) - PIB: %f\n", nomePais2, pib2);
    printf(" Carta 1 Venceu");
  } else if(pib2 > pib){
    printf("Carta 2 (%s) - PIB: %f\n", nomePais2,pib2);
    printf("Carta 1 (%s) -  PIB: %f\n", nomePais, pib);
    printf("Carta 2 Venceu!");
  }else{
     printf("Carta 1 (%s) - PIB: %f - Carta 2 (%s) - PIB: %f - Empatou!\n", nomePais, pib,nomePais2, pib2);
  }
  break;
case 4:
  printf("Números de pontos turísticos:\n");

  if (numero > numero2)
  {
    printf("Carta 1 (%s) - Pontos Turísticos: %d\n", nomePais2,numero);
    printf("Carta 2 (%s) - Pontos Turísticos: %d\n", nomePais, numero2);
    printf("Carta 1 Venceu!");
  } else if(numero2 > numero){
    printf("Carta 2 (%s) - Pontos Turísticos: %d\n", nomePais2,numero2);
    printf("Carta 1 (%s) -  Pontos Turísticos: %d\n", nomePais, numero);
    printf("Carta 2 Venceu!");
  } else{
    printf("Carta 1 (%s) - PIB: %f - Carta 2 (%s) - PIB: %f - Empatou!\n", nomePais, pib ,nomePais2, pib2);
  }
  break;
case 5:
 printf("Densidade demográfiaca:\n");
 if (densidade < densidade2)
 {
  printf("Carta 1 (%s) - Densidade Demográfica: %f\n", nomePais2, densidade);
  printf("Carta 2 (%s) - Densidade Demográfica: %f\n", nomePais, densidade2);
  printf("Carta 1 Venceu!");
 }else if(densidade2 < densidade){
  printf("Carta 2 (%s) - Densidade Demográfica: %f\n", nomePais2, densidade2);
  printf("Carta 1 (%s) - Densidade Demográfica: %f\n", nomePais, densidade);
  printf("Carta 2 Venceu!");
 } else{
  printf("Carta 1 (%s) - PIB: %f - Carta 2 (%s) - Densidade: %f - Empatou!\n", nomePais, densidade ,nomePais2 , densidade2);

 }
  break;
default:
    printf("Alternativa inválida!\n");
  break;
}

printf(" \n ### Fim de jogo, mandou muito bem!!😉🫡 ###\n");

  return 0;
  
}
