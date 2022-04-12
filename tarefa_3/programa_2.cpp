#include <ctype.h>

#include <iostream>

using namespace std;

int main() {
  string input;
  string uppercase;

  cin >> input;

  for (auto& character : input) {
    character = toupper(character);

    uppercase += character;
  }

  cout << input << endl;

  return 0;
}