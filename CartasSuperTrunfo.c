#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

//variaveis da carta 1
char estado1[10];
char codigo1[10];
char cidade1[10];
int populacao1;
float area1;
float pib1;
int turistico1;
float densidadepopu1;
float pibcapita1;

//variaveis da carta 2
char estado2[10];
char codigo2[10];
char cidade2[10];
int populacao2;
float area2;
float pib2;
int turistico2;
float densidadepopu2;
float pibcapita2;

  // Área para entrada de dados
printf("Vamos criar duas cartas\n*** Primeira carta ***\nDigite o estado da primeira carta: ");
scanf("%s", estado1);
printf("Agora digite o codigo da carta: ");
scanf("%s", codigo1);
printf("Agora digite a cidade: ");
scanf("%s", cidade1);
printf("Agora digite a população: ");
scanf("%d", &populacao1);
printf("Agora digite a area: ");
scanf("%f", &area1);
printf("Agora digite o pib: ");
scanf("%f", &pib1);
printf("Agora digite a quantidade de pontos turísticos: ");
scanf("%d", &turistico1);

//secunda carta
printf("\n*** Segunda carta ***\nDigite o Estado da Segunda carta: ");
scanf("%s", estado2);
printf("Agora digite o codigo da carta: ");
scanf("%s", codigo2);
printf("Agora digite a cidade: ");
scanf("%s", cidade2);
printf("Agora digite a população: ");
scanf("%d", &populacao2);
printf("Agora digite a área: ");
scanf("%f", &area2);
printf("Agora digite o pib: ");
scanf("%f", &pib2);
printf("Agora digite a quantidade de pontos turísticos: ");
scanf("%d", &turistico2);

float densidadepopu1 = (float) populacao1 / area1;
float pibcapita1 = (float) populacao1 / area1;

float densidadepopu2 = (float) populacao2 / area2;
float pibcapita2 = (float) populacao2 / area2;

// Área para exibição dos dados da cidade
printf("\n*** Primeira Carta ***\n");
printf("Estado:%s\nCodigo:%s\nCidade:%s\n", estado1, codigo1, cidade1);
printf("População:%d\nÁrea:%.3fkm²\nPib:%.3f Bilhões de Reais\nPontos Turísticos:%d\n",populacao1, area1, pib1, turistico1);
printf("Densidade Populacional: %.3f hab/Km²\nPIB per Capita: %.3f Reais\n",densidadepopu1,pibcapita1);

//Mostrando os dados da secunda carta
printf("\n*** Segunda Carta ***\n");
printf("\nEstado:%s\nCodigo:%s\nCidade:%s\n", estado2, codigo2, cidade2);
printf("População:%d\nÁrea:%.3fkm²\nPib:%.3f Bilhões de Reais\nPontos Turísticos:%d\n",populacao2, area2, pib2, turistico2);
printf("Densidade Populacional: %.3f hab/Km²\nPIB per Capita: %.3f Reais\n",densidadepopu2,pibcapita2);

return 0;
} 
