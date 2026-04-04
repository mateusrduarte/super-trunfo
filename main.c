#include <stdio.h>

int main(int argc, char const *argv[]) {
  // Variavel usada para identificar qual carta esta sendo cadastrada.
  int carta = 1;
  char estado;
  char codigo[4];
  char nomeCidade[50];
  int populacao;
  double area;
  double pib;
  int numeroPontosTuristicos;
  double densidadePopulacional;
  double pibPerCapita;

  // Cadastro da carta.
  printf("\nQuala carta será cadastrada: ");
  scanf("%d",&carta);

  printf("\nEstado: ");
  scanf(" %c",&estado);

  printf("\nCodigo: ");
  scanf("%3s",codigo);

  printf("\nNome da cidade: ");
  scanf(" %49[^\n]",nomeCidade);

  printf("\nPopulação: ");
  scanf("%d",&populacao);

  printf("\nÁrea: ");
  scanf("%lf",&area);

  printf("\nPIB: ");
  scanf("%lf",&pib);

  printf("\nNúmero de pontos turisticos: ");
  scanf("%d",&numeroPontosTuristicos);

  // Calculando Densidade Populacional e PIB per Capita
  densidadePopulacional = (double) populacao / area;
  pibPerCapita = (double) (pib * 1000000000.0) / populacao;

  printf("\nCarta %d cadastrada com sucesso:\n", carta);
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2lfkm2\n", area);
  printf("PIB: %.2lf bilhões de reais \n", pib);
  printf("Pontos turisticos: %d\n", numeroPontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita);

  return 0;
}
