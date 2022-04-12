#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  string input = argv[1];

  while (input[0] == ' ') input.erase(0, 1);

  while (input[input.size() - 1] == ' ') input.erase(input.size() - 1, 1);

  int first_slash = input.find_first_of("/");
  int second_slash = input.find_first_of("/", first_slash + 1);

  if ((first_slash == 1 || first_slash == 2) &&
      (second_slash == first_slash + 2 || second_slash == first_slash + 3)) {
    int day = stoi(input.substr(0, first_slash));
    int month =
        stoi(input.substr(first_slash + 1, second_slash - first_slash - 1));
    int year = stoi(input.substr(second_slash + 1));

    if (day > 0 && day <= 31 && month > 0 && month <= 12 && year > 0 &&
        year <= 9999) {
      cout << input << endl;

      return 0;
    }
  }

  cout << "data invalida" << endl;

  return 0;
}
