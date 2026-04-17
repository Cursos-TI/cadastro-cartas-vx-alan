#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int populacao, numero;
    char estado;
    char nome [20];
    char codigo [4];
    float área, PIB, densidade, per_capita;
    char carta [5];
  // Área para entrada de dados
    
  
    printf ("Carta: \n");
    scanf ("%s", carta);

    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Codigo: \n");
    scanf("%s", codigo);

    printf("Nome da cidade: \n");
    scanf("%s", nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área(em Km²): \n");
    scanf("%f", &área);

    printf("PIB: \n");
    scanf("%e", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%i", &numero);

    densidade = (float)(populacao / área );
    
    per_capita = (float)(PIB / populacao );
  // Área para exibição dos dados da cidade

    printf("Carta: %s\n", carta);

    printf("Estado: %c\n", estado);

    printf("Codigo: %s\nNome da cidade: %s\n", codigo, nome);

    printf("População: %d\n", populacao);

    printf("Área(em Km²): %.2f\n", área);

    printf("PIB: %.2f\n", PIB);

    printf("Numero de Ponto Turístico: %i\n", numero);

    printf("Densidade Populacional: %d\n", densidade);

    printf("PIB per Capita: %d\n", per_capita);

    return 0;

  } 
