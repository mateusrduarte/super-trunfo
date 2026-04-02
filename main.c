#include <stdio.h>

int main(int argc, char const *argv[]) {
  // Variavel usada para identificar qual carta esta sendo cadastrada.
  int carta = 1;
  char estado;
  char codigo[3];
  char nomeCidade[50];
  int populacao;
  double area;
  double pib;
  int numeroPontosTuristicos;

  // Cadastro da primeira carta.
  printf("\nCadastrando a Carta %d\n", carta);
  printf("Qual o estado da carta %d?\n", carta);
  scanf("%c\n", &estado);

  printf("Qual o codigo da carta %d?\n", carta);
  scanf("%3s", &codigo);

  printf("Qual o nome da cidade da carta %d?\n", carta);
  scanf("%49[^\n]", &nomeCidade);

  printf("Qual a população da cidade?\n");
  scanf("%d", &populacao);

  printf("Qual a área da cidade?\n");
  scanf("%f", &area);

  printf("Qual é o PIB da cidade?\n");
  scanf("%f", &pib);

  printf("Qual o número de pontos turisticos da cidade?\n");
  scanf("%d", &numeroPontosTuristicos);

  printf("\nCarta %d cadastrada com sucesso:\n", carta);
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2lfkm2\n", area);
  printf("PIB: %.2lf\n", pib);
  printf("Pontos turisticos: %d\n\n", numeroPontosTuristicos);

  // Reaproveita as mesmas variaveis para ler os dados da segunda carta.
  carta = 2;

  printf("\nCadastrando a Carta %d\n", carta);
  printf("Qual o estado da carta %d?\n", carta);
  scanf("%c\n", &estado);

  printf("Qual o codigo da carta %d?\n", carta);
  scanf("%3s", &codigo);

  printf("Qual o nome da cidade da carta %d?\n", carta);
  scanf("%49[^\n]", &nomeCidade);

  printf("Qual a população da cidade?\n");
  scanf("%d", &populacao);

  printf("Qual a área da cidade?\n");
  scanf("%f", &area);

  printf("Qual é o PIB da cidade?\n");
  scanf("%f", &pib);

  printf("Qual o número de pontos turisticos da cidade?\n");
  scanf("%d", &numeroPontosTuristicos);

  printf("\nCarta %d cadastrada com sucesso:\n", carta);
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2lfkm2\n", area);
  printf("PIB: %.2lf\n", pib);
  printf("Pontos turisticos: %d\n\n", numeroPontosTuristicos);

  return 0;
}
