#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //variaveis da carta 1
char estado1[5];
char codigo1[5];
char cidade1[10];
int populacao1;
float area1;
float pib1;
int turistico1;
//variaveis da carta 2
char estado2;
char codigo2[5];
char cidade2[10];
int populacao2;
float area2;
float pib2;
int turistico2;
  // Área para entrada de dados
printf("Vamos criar duas cartas\nPrimeira carta\nDigite o estado da primeira carta: ");
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

  // Área para exibição dos dados da cidade
printf("Primeira carta:\nEstado:%s\nCodigo:%s\nCidade:%s\n", estado1, codigo1, cidade1);
return 0;
} 
