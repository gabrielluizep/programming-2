#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[]) {
  string input;

  queue<string> q;

  do {
    cout << ">";
    cin >> input;

    if (input == "sair") {
      return 0;
    } else if (input == "?") {
      cout << q.front() << endl;
      q.pop();
    } else {
      q.push(input);
    }
  } while (q.size() != 0);

  return 0;
}
