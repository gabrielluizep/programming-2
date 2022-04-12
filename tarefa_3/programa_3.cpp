#include <iostream>

using namespace std;

int main() {
  string input;

  getline(cin, input);

  int char_count = input.size();
  int word_count = 0;

  int space_index = 0;
  int char_index = 0;

  while (char_index != string::npos) {
    char_index = input.find_first_not_of(" ", space_index);

    if (char_index != string::npos) word_count++;

    space_index = input.find_first_of(" ", char_index);
  }

  cout << word_count << endl;
  cout << char_count << endl;

  return 0;
}
