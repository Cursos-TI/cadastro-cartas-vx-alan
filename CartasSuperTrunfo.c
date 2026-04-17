#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int populacao, numero;
    char estado;
    char nome [50];
    char codigo [10];
    float area, PIB, densidade, per_capita;
    char carta [10];
  // Área para entrada de dados
    
  
    printf ("Carta: \n");
    scanf ("%s", carta);

    printf("Estado: \n");
    scanf(" %c", &estado);

    printf("Codigo: \n");
    scanf("%s", codigo);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área(em Km²): \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%i", &numero);

    densidade = (float) populacao / area;
    
    per_capita = PIB / populacao;
  // Área para exibição dos dados da cidade

    printf("Carta: %s\n", carta);

    printf("Estado: %c\n", estado);

    printf("Codigo: %s\nNome da cidade: %s\n", codigo, nome);

    printf("População: %d\n", populacao);

    printf("Área(em Km²): %.2f\n", area);

    printf("PIB: %.2f\n", PIB);

    printf("Numero de Pontos Turísticos: %i\n", numero);

    printf("Densidade Populacional: %.2f\n", densidade);

    printf("PIB per Capita: %.2f\n", per_capita);

    return 0;

  } 
