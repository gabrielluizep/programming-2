#include <stdio.h>

const char table[3][3][100] = {
    {"Tempo bom, ventos quentes e secos", "Tempo bom, ventos de leste frescos",
     "Tempo bom, ventos de sul a sudeste"},
    {"Tempo mudando para bom, ventos variáveis",
     "Tempo incentos, ventos variáveis",
     "Chuva provável, ventos de sul a sudeste"},
    {"Tempo instável, aproximação de frente",
     "Frente quente com chuvas prováveis",
     "Chuvas abundates e ventos de sul a sudoeste fortes"}};

int main() {
  int barometer;
  int thermometer;

  printf(
      "Previsor de tempo\n\n Valores para as medições:\n1 - Subindo\n2 - "
      "Descendo\n3 - Estacionário\n\n");

  printf("Insira a situação analisada no barômetro: ");
  do {
    scanf(" %d", &barometer);
  } while (barometer < 1 || barometer > 3);

  printf("Insira a situação analisada no termômetro: ");
  do {
    scanf(" %d", &thermometer);
  } while (barometer < 1 || barometer > 3);

  printf("\n");

  puts(table[barometer - 1][thermometer - 1]);

  return 0;
}
