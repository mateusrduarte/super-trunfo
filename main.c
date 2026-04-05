#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int carta1 = 1, carta2 = 2;
  char estado1[3] = "SP", estado2[3] = "RJ";
  char codigo1[4] = "A01", codigo2[4] = "B02";
  char nomeCidade1[50] = "Sao Paulo", nomeCidade2[50] = "Rio de Janeiro";
  unsigned long int populacao1 = 12300000, populacao2 = 6000000;
  double area1 = 1521.11, area2 = 1200.25;
  double pib1 = 699.28, pib2 = 300.50;
  int numeroPontosTuristicos1 = 50, numeroPontosTuristicos2 = 30;
  double densidadePopulacional1, densidadePopulacional2;
  double pibPerCapita1, pibPerCapita2;
  float superPoder1, superPoder2;
  int opcao;

  // Cadastro da primeira carta.
  // printf("\nQual carta sera cadastrada: ");
  // scanf("%d",&carta1);

  // printf("\nEstado: ");
  // scanf(" %2s",estado1);

  // printf("\nCodigo: ");
  // scanf("%3s",codigo1);

  // printf("\nNome da cidade: ");
  // scanf(" %49[^\n]",nomeCidade1);

  // printf("\nPopulacao: ");
  // scanf("%lu",&populacao1);

  // printf("\nArea: ");
  // scanf("%lf",&area1);

  // printf("\nPIB: ");
  // scanf("%lf",&pib1);

  // printf("\nNumero de pontos turisticos: ");
  // scanf("%d",&numeroPontosTuristicos1);

  // Calculando Densidade Populacional e PIB per Capita
  densidadePopulacional1 = (double) populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
  superPoder1 = (float) ((populacao1 + area1 + pib1 + numeroPontosTuristicos1 + pibPerCapita1) / densidadePopulacional1);

  printf("\nCarta %d cadastrada com sucesso:\n", carta1);
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", nomeCidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2lf km2\n", area1);
  printf("PIB: %.2lf bilhoes de reais\n", pib1);
  printf("Pontos turisticos: %d\n", numeroPontosTuristicos1);
  printf("Densidade Populacional: %.2lf hab/km2\n", densidadePopulacional1);
  printf("PIB per Capita: %.2lf reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);


  // Cadastro da segunda carta.
  // printf("\nQual carta sera cadastrada: ");
  // scanf("%d",&carta2);

  // printf("\nEstado: ");
  // scanf(" %2s",estado2);

  // printf("\nCodigo: ");
  // scanf("%3s",codigo2);

  // printf("\nNome da cidade: ");
  // scanf(" %49[^\n]",nomeCidade2);

  // printf("\nPopulacao: ");
  // scanf("%lu",&populacao2);

  // printf("\nArea: ");
  // scanf("%lf",&area2);

  // printf("\nPIB: ");
  // scanf("%lf",&pib2);

  // printf("\nNumero de pontos turisticos: ");
  // scanf("%d",&numeroPontosTuristicos2);

  // Calculando Densidade Populacional, PIB per Capita e Super Poder
  densidadePopulacional2 = (double) populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
  superPoder2 = (float) ((populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2) / densidadePopulacional2);

  printf("\nCarta %d cadastrada com sucesso:\n", carta2);
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2lf km2\n", area2);
  printf("PIB: %.2lf bilhoes de reais\n", pib2);
  printf("Pontos turisticos: %d\n", numeroPontosTuristicos2);
  printf("Densidade Populacional: %.2lf hab/km2\n", densidadePopulacional2);
  printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  system("pause");
  system("cls");

  printf("Super Trunfo\n");
  printf("Escolha um atributo para ser comparado:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per Capita\n");
  printf("7 - Super Poder\n-> ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Carta %d - Populacao: %lu\n", carta1, populacao1);
    printf("Carta %d - Populacao: %lu\n", carta2, populacao2);
    if (populacao1 > populacao2)
    {
      printf("A carta %d venceu!\n", carta1);
    }
    else if (populacao1 < populacao2)
    {
      printf("A carta %d venceu!\n", carta2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  case 2:
    printf("Carta %d - Area: %.2lf km2\n", carta1, area1);
    printf("Carta %d - Area: %.2lf km2\n", carta2, area2);
    if (area1 > area2)
    {
      printf("A carta %d venceu!\n", carta1);
    }
    else if (area1 < area2)
    {
      printf("A carta %d venceu!\n", carta2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  case 3:
    printf("Carta %d - PIB: %.2lf bilhões de reais\n", carta1, pib1);
    printf("Carta %d - PIB: %.2lf bilhões de reais\n", carta2, pib2);
    if (pib1 > pib2)
    {
      printf("A carta %d venceu!\n", carta1);
    }
    else if (pib1 < pib2)
    {
      printf("A carta %d venceu!\n", carta2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  case 4:
    printf("Carta %d - Pontos Turisticos: %d\n", carta1, numeroPontosTuristicos1);
    printf("Carta %d - Pontos Turisticos: %d\n", carta2, numeroPontosTuristicos2);
    if (numeroPontosTuristicos1 > numeroPontosTuristicos2)
    {
      printf("A carta %d venceu!\n", carta1);
    }
    else if (numeroPontosTuristicos1 < numeroPontosTuristicos2)
    {
      printf("A carta %d venceu!\n", carta2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  case 5:
    printf("Carta %d - Densidade Populacional: %.2lf hab/km2\n", carta1, densidadePopulacional1);
    printf("Carta %d - Densidade Populacional: %.2lf hab/km2\n", carta2, densidadePopulacional2);
    if (densidadePopulacional1 < densidadePopulacional2)
    {
      printf("A carta %d venceu!\n", carta1);
    }
    else if (densidadePopulacional1 > densidadePopulacional2)
    {
      printf("A carta %d venceu!\n", carta2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  case 6:
    printf("Carta %d - PIB per Capita: %.2lf reais\n", carta1, pibPerCapita1);
    printf("Carta %d - PIB per Capita: %.2lf reais\n", carta2, pibPerCapita2);
    if (pibPerCapita1 > pibPerCapita2)
    {
      printf("A carta %d venceu!\n", carta1);
    }
    else if (pibPerCapita1 < pibPerCapita2)
    {
      printf("A carta %d venceu!\n", carta2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  case 7:
    printf("Carta %d - Super Poder: %.2f\n", carta1, superPoder1);
    printf("Carta %d - Super Poder: %.2f\n", carta2, superPoder2);
    if (superPoder1 > superPoder2)
    {
      printf("A carta %d venceu!\n", carta1);
    }
    else if (superPoder1 < superPoder2)
    {
      printf("A carta %d venceu!\n", carta2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  default:
    printf("Opcao invalida!\n");
    break;
  }
  system("pause");

  return 0;
}
