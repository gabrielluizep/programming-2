#include <iostream>

using namespace std;

const string table[3][3] = {
    {"Tempo bom, ventos quentes e secos", "Tempo bom, ventos de leste frescos",
     "Tempo bom, ventos de sul a sudeste"},
    {"Tempo mudando para bom, ventos de leste",
     "Tempo incerto, ventos variaveis",
     "Chuva provavel, ventos de sul a sudeste"},
    {"Tempo instavel, aproximacao de frente",
     "Frente quente, com chuvas provaveis",
     "Chuvas abundantes e ventos de sul a sudeste fortes"}};

int convert(string option) {
  if (option == "subindo")
    return 0;
  else if (option == "estacionario")
    return 1;
  else if (option == "baixando")
    return 2;
  else
    return -1;
}

int main() {
  string input;

  int barometer, thermometer;

  cout << "Barometro: ";
  cin >> input;

  barometer = convert(input);

  if (barometer == -1) {
    cout << "Valor inválido" << endl;
    return 0;
  }

  cout << "Termometro: ";
  cin >> input;

  thermometer = convert(input);

  if (thermometer == -1) {
    cout << "Valor inválido" << endl;
    return 0;
  }

  cout << table[barometer][thermometer];

  return 0;
}
