#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string input = argv[1];
  string new_string = "";

  int start_index = 0;
  while (input[start_index] == ' ') {
    start_index++;
  }

  int end_index = input.size();
  while (input[end_index] == ' ') {
    end_index--;
  }

  for (int i = start_index; i < end_index; i++) {
    if (input[i] != ' ') {
      new_string += input[i];
    } else if (input[i + 1] != ' ') {
      new_string += ' ';
    }
  }
  cout << new_string << endl;

  return 0;
}
