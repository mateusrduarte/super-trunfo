#include <stdio.h>

const char *nome_atributo(int atributo)
{
  switch (atributo)
  {
  case 1:
    return "Populacao";
  case 2:
    return "Area";
  case 3:
    return "PIB";
  case 4:
    return "Pontos Turisticos";
  case 5:
    return "Densidade Populacional";
  case 6:
    return "PIB per Capita";
  case 7:
    return "Super Poder";
  default:
    return "Atributo invalido";
  }
}

double valor_atributo(
  int atributo,
  unsigned long int populacao,
  double area,
  double pib,
  int numeroPontosTuristicos,
  double densidadePopulacional,
  double pibPerCapita,
  float superPoder)
{
  switch (atributo)
  {
  case 1:
    return (double) populacao;
  case 2:
    return area;
  case 3:
    return pib;
  case 4:
    return (double) numeroPontosTuristicos;
  case 5:
    return densidadePopulacional;
  case 6:
    return pibPerCapita;
  case 7:
    return (double) superPoder;
  default:
    return -1.0;
  }
}

int comparar_atributo(int atributo, double valor1, double valor2)
{
  return (valor1 == valor2) ? 0 : ((atributo == 5) ? (valor1 < valor2 ? 1 : -1) : (valor1 > valor2 ? 1 : -1));
}

void exibir_menu(int atributo_bloqueado)
{
  int opcao;

  printf("Escolha um atributo para comparar:\n");

  for (opcao = 1; opcao <= 7; opcao++)
  {
    if (opcao != atributo_bloqueado)
    {
      printf("%d - %s\n", opcao, nome_atributo(opcao));
    }
  }

  printf("-> ");
}

int main(void)
{
  int carta1 = 1, carta2 = 2;
  char estado1[3] = "SP", estado2[3] = "RJ";
  char nomeCidade1[50] = "Sao Paulo", nomeCidade2[50] = "Rio de Janeiro";
  unsigned long int populacao1 = 12300000, populacao2 = 6000000;
  double area1 = 1521.11, area2 = 1200.25;
  double pib1 = 699.28, pib2 = 300.50;
  int numeroPontosTuristicos1 = 50, numeroPontosTuristicos2 = 30;
  double densidadePopulacional1, densidadePopulacional2;
  double pibPerCapita1, pibPerCapita2;
  float superPoder1, superPoder2;
  int atributo1, atributo2;
  double valor1Carta1, valor1Carta2;
  double valor2Carta1, valor2Carta2;
  int resultado1, resultado2;
  double somaCarta1, somaCarta2;

  densidadePopulacional1 = (double) populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
  superPoder1 = (float) ((populacao1 + area1 + pib1 + numeroPontosTuristicos1 + pibPerCapita1) / densidadePopulacional1);

  densidadePopulacional2 = (double) populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
  superPoder2 = (float) ((populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2) / densidadePopulacional2);

  printf("Carta %d: %s (%s)\n", carta1, nomeCidade1, estado1);
  printf("Carta %d: %s (%s)\n\n", carta2, nomeCidade2, estado2);

  do
  {
    exibir_menu(0);
    scanf("%d", &atributo1);
  }
  while (atributo1 < 1 || atributo1 > 7);

  do
  {
    exibir_menu(atributo1);
    scanf("%d", &atributo2);
  }
  while (atributo2 < 1 || atributo2 > 7 || atributo2 == atributo1);

  valor1Carta1 = valor_atributo(atributo1, populacao1, area1, pib1, numeroPontosTuristicos1, densidadePopulacional1, pibPerCapita1, superPoder1);
  valor1Carta2 = valor_atributo(atributo1, populacao2, area2, pib2, numeroPontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);
  valor2Carta1 = valor_atributo(atributo2, populacao1, area1, pib1, numeroPontosTuristicos1, densidadePopulacional1, pibPerCapita1, superPoder1);
  valor2Carta2 = valor_atributo(atributo2, populacao2, area2, pib2, numeroPontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);

  resultado1 = comparar_atributo(atributo1, valor1Carta1, valor1Carta2);
  resultado2 = comparar_atributo(atributo2, valor2Carta1, valor2Carta2);
  somaCarta1 = valor1Carta1 + valor2Carta1;
  somaCarta2 = valor1Carta2 + valor2Carta2;

  printf("\nComparacao de cartas\n");
  printf("%s\n", nome_atributo(atributo1));
  printf("Carta %d - %s: %.2lf\n", carta1, nomeCidade1, valor1Carta1);
  printf("Carta %d - %s: %.2lf\n", carta2, nomeCidade2, valor1Carta2);
  printf("Resultado: %s\n\n", resultado1 == 0 ? "Empate" : (resultado1 > 0 ? nomeCidade1 : nomeCidade2));

  printf("%s\n", nome_atributo(atributo2));
  printf("Carta %d - %s: %.2lf\n", carta1, nomeCidade1, valor2Carta1);
  printf("Carta %d - %s: %.2lf\n", carta2, nomeCidade2, valor2Carta2);
  printf("Resultado: %s\n\n", resultado2 == 0 ? "Empate" : (resultado2 > 0 ? nomeCidade1 : nomeCidade2));

  printf("Soma dos atributos\n");
  printf("Carta %d - %s: %.2lf\n", carta1, nomeCidade1, somaCarta1);
  printf("Carta %d - %s: %.2lf\n", carta2, nomeCidade2, somaCarta2);

  if (somaCarta1 > somaCarta2)
  {
    printf("Resultado final: Carta %d (%s) venceu!\n", carta1, nomeCidade1);
  }
  else if (somaCarta1 < somaCarta2)
  {
    printf("Resultado final: Carta %d (%s) venceu!\n", carta2, nomeCidade2);
  }
  else
  {
    printf("Resultado final: Empate!\n");
  }

  return 0;
}
