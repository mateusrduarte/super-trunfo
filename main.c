#include <stdio.h>

int main(void) {
  // Variavel usada para identificar qual carta esta sendo cadastrada.
  int carta1, carta2;
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nomeCidade1[50], nomeCidade2[50];
  unsigned long int populacao1, populacao2;
  double area1, area2;
  double pib1, pib2;
  int numeroPontosTuristicos1, numeroPontosTuristicos2;
  double densidadePopulacional1, densidadePopulacional2;
  double pibPerCapita1, pibPerCapita2;
  float superPoder1, superPoder2;

  // Cadastro da primeira carta.
  printf("\nQual carta sera cadastrada: ");
  scanf("%d",&carta1);

  printf("\nEstado: ");
  scanf(" %c",&estado1);

  printf("\nCodigo: ");
  scanf("%3s",codigo1);

  printf("\nNome da cidade: ");
  scanf(" %49[^\n]",nomeCidade1);

  printf("\nPopulacao: ");
  scanf("%lu",&populacao1);

  printf("\nArea: ");
  scanf("%lf",&area1);

  printf("\nPIB: ");
  scanf("%lf",&pib1);

  printf("\nNumero de pontos turisticos: ");
  scanf("%d",&numeroPontosTuristicos1);

  // Calculando Densidade Populacional e PIB per Capita
  densidadePopulacional1 = (double) populacao1 / area1;
  pibPerCapita1 = (double) (pib1 * 1000000000.0) / populacao1;
  superPoder1 = (float) (populacao1 + area1 + pib1 + numeroPontosTuristicos1 + pibPerCapita1) / densidadePopulacional1;

  printf("\nCarta %d cadastrada com sucesso:\n", carta1);
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", nomeCidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2lfkm2\n", area1);
  printf("PIB: %.2lf bilhoes de reais\n", pib1);
  printf("Pontos turisticos: %d\n", numeroPontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);


  // Cadastro da segunda carta.
  printf("\nQual carta sera cadastrada: ");
  scanf("%d",&carta2);

  printf("\nEstado: ");
  scanf(" %c",&estado2);

  printf("\nCodigo: ");
  scanf("%3s",codigo2);

  printf("\nNome da cidade: ");
  scanf(" %49[^\n]",nomeCidade2);

  printf("\nPopulacao: ");
  scanf("%lu",&populacao2);

  printf("\nArea: ");
  scanf("%lf",&area2);

  printf("\nPIB: ");
  scanf("%lf",&pib2);

  printf("\nNumero de pontos turisticos: ");
  scanf("%d",&numeroPontosTuristicos2);

  // Calculando Densidade Populacional, PIB per Capita e Super Poder
  densidadePopulacional2 = (double) populacao2 / area2;
  pibPerCapita2 = (double) (pib2 * 1000000000.0) / populacao2;
  superPoder2 = (float) (populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2) / densidadePopulacional2;

  printf("\nCarta %d cadastrada com sucesso:\n", carta2);
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2lfkm2\n", area2);
  printf("PIB: %.2lf bilhoes de reais\n", pib2);
  printf("Pontos turisticos: %d\n", numeroPontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  // Batalha de Cartas no Super Trunfo
  printf("\n\nResultado\n");
  printf("Populacao: %d\n", populacao1 > populacao2);
  printf("Area: %d\n", area1 > area2);
  printf("PIB: %d\n", pib1 > pib2);
  printf("Pontos turisticos: %d\n", numeroPontosTuristicos1 > numeroPontosTuristicos2);
  printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
  printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
  printf("Super Poder: %d\n", superPoder1 > superPoder2);


  return 0;
}
