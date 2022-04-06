#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  float input = stof(argv[1]);

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
  cedula_20000 ? cout << "R$ 200: " << cedula_20000 << " " : cout << "";
  cedula_10000 ? cout << "R$ 100: " << cedula_10000 << " " : cout << "";
  cedula_5000 ? cout << "R$ 50: " << cedula_5000 << " " : cout << "";
  cedula_2000 ? cout << "R$ 20: " << cedula_2000 << " " : cout << "";
  cedula_1000 ? cout << "R$ 10: " << cedula_1000 << " " : cout << "";
  cedula_500 ? cout << "R$ 5: " << cedula_500 << " " : cout << "";
  cedula_200 ? cout << "R$ 2: " << cedula_200 << " " : cout << "";
  cedula_100 ? cout << "R$ 1: " << cedula_100 << " " : cout << "";
  cedula_50 ? cout << "R$ 0,50: " << cedula_50 << " " : cout << "";
  cedula_25 ? cout << "R$ 0,25: " << cedula_25 << " " : cout << "";
  cedula_10 ? cout << "R$ 0,10: " << cedula_10 << " " : cout << "";
  cedula_5 ? cout << "R$ 0,05: " << cedula_5 << " " : cout << "";
  cedula_1 ? cout << "R$ 0,01: " << cedula_1 << " " : cout << "";

  return 0;
}
