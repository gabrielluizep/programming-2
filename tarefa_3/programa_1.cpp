#include <iostream>

using namespace std;

int main() {
  string input = "coisa";
  string inverted;

  cin >> input;

  for (int i = input.size() - 1, j = 0; i >= 0; i--, j++) {
    inverted += input[i];
  }

  cout << inverted << endl;

  return 0;
}