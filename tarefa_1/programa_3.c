#include <stdio.h>

int main() {
  float input;

  printf("Calculadora de troco\n\n");

  printf("insira o valor da compra: ");

  scanf("%f", &input);

  int total = (int)(input * 100);

  int cedula_20000 = 0;
  int cedula_10000 = 0;
  int cedula_5000 = 0;
  int cedula_2000 = 0;
  int cedula_1000 = 0;
  int cedula_500 = 0;
  int cedula_200 = 0;
  int cedula_100 = 0;
  int cedula_50 = 0;
  int cedula_25 = 0;
  int cedula_10 = 0;
  int cedula_5 = 0;
  int cedula_1 = 0;

  printf("%d\n", total);

  while (total != 0) {
    if (total >= 20000) {
      cedula_20000++;
      total -= 20000;
    } else if (total >= 10000) {
      cedula_10000++;
      total -= 10000;
    } else if (total >= 5000) {
      cedula_5000++;
      total -= 5000;
    } else if (total >= 2000) {
      cedula_2000++;
      total -= 2000;
    } else if (total >= 1000) {
      cedula_1000++;
      total -= 1000;
    } else if (total >= 500) {
      cedula_500++;
      total -= 500;
    } else if (total >= 200) {
      cedula_200++;
      total -= 200;
    } else if (total >= 100) {
      cedula_100++;
      total -= 100;
    } else if (total >= 50) {
      cedula_50++;
      total -= 50;
    } else if (total >= 25) {
      cedula_25++;
      total -= 25;
    } else if (total >= 10) {
      cedula_10++;
      total -= 10;
    } else if (total >= 5) {
      cedula_5++;
      total -= 5;
    } else if (total >= 1) {
      cedula_1++;
      total -= 1;
    }
  }
  printf("Cédulas de R$200,00 : %d\n", cedula_20000);
  printf("Cédulas de R$100,00 : %d\n", cedula_10000);
  printf("Cédulas de R$50,00  : %d\n", cedula_5000);
  printf("Cédulas de R$20,00  : %d\n", cedula_2000);
  printf("Cédulas de R$10,00  : %d\n", cedula_1000);
  printf("Cédulas de R$5,00   : %d\n", cedula_500);
  printf("Cédulas de R$2,00   : %d\n", cedula_200);
  printf("Moedas de R$1,00    : %d\n", cedula_100);
  printf("Moedas de R$0,50    : %d\n", cedula_50);
  printf("Moedas de R$0,25    : %d\n", cedula_25);
  printf("Moedas de R$0,10    : %d\n", cedula_10);
  printf("Moedas de R$0,05    : %d\n", cedula_5);
  printf("Moedas de R$0,01    : %d\n", cedula_1);

  return 0;
}
