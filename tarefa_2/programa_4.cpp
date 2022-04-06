#include <math.h>

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int min = 1;
  int max = 99;

  string user_input;

  for (int i = 1; i < 7; i++) {
    int mean = ceil((min + max) / 2);

    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
    cout << "(min + max) / 2: " << ceil((min + max) / 2) << endl;

    cout << "mean: " << mean << endl;

    cin >> user_input;

    if (user_input == "<") {
      max = mean - 1;
    } else if (user_input == ">") {
      min = mean + 1;
    } else if (user_input == "=") {
      cout << i << " tentativas" << endl;
      break;
    }
  }

  return 0;
}
