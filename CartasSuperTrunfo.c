# include <stdio.h>

  int main(){
  
  printf("Desafio Super Trunfo \n");
  printf("Novo commit \n");

  
    
    char estado[100];
    char codigo[5];

    char nome[50];
    int populacao,pontos_turisticos;

    float area,pib;


    char estado2[100];
    char codigo2[5];

    char nome2[50];
    int populacao2, pontos_turisticos2;

    float area2,pib2;

  printf("Carta 1:\n");

  printf("Estado (A-H): \n " );
  scanf("%s",&estado);

  printf("Codigo da Carta (A1):\n");
  scanf("%s", &codigo);

  printf("Nome da cidade:\n");
  scanf("%s", &nome);

  printf("Populacao:\n");
  scanf("%d", &populacao);

  printf("Pontos Turisticos:\n");
  scanf("%d", &pontos_turisticos);

  printf("Area:\n");
  scanf("%f", &area);

  printf("PIB:\n");
  scanf("%f", &pib);


  printf("Carta 2:\n" );

  printf("Estado (A-H):\n");
  scanf("%s", &estado2);

  printf("Codigo da Carta (B2):\n");
  scanf("%s", &codigo2);

  printf("Nome da Cidade:\n");
  scanf("%s", &nome2);

  printf("Populacao:\n");
  scanf("%d", &populacao2);

  printf("Pontos Turisticos:\n");
  scanf("%d", &pontos_turisticos2);

  printf("Area:\n");
  scanf("%f", &area2);

  printf("PIB:\n");
  scanf("%f", &pib2);


  printf("Carta 1:\n");
  printf("Estado: %s \n", estado);
  printf("Codigo da Carta: %s \n", codigo);
  printf("Nome da Cidade: %s \n", nome);
  printf("Populacao: %d \n", populacao);
  printf("Pontos Turisticos: %d \n", pontos_turisticos);
  printf("Area: %f \n", area);
  printf("PIB: %f \n", pib);


  printf("Carta 2:\n");
  printf("Estado: %s \n", estado2);
  printf("Codigo da Carta: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", nome2);
  printf("Populacao: %d \n", populacao2);
  printf("Pontos Turisticos: %d \n", pontos_turisticos2);
  printf("Area: %f \n", area2);
  printf("PIB: %f \n", pib2);

  
  return 0;


  }