#include <stdio.h>
#include <string.h>

int main() {
  printf("Normalizador de texto\n\n");

  char input[100];
  printf("Insira o texto a ser normalizado: ");
  fgets(input, 100, stdin);

  char new_string[100] = "";

  int start_index = 0;
  while (input[start_index] == ' ') {
    start_index++;
  }

  int end_index = strlen(input) - 1;
  while (input[end_index] == ' ') {
    end_index--;
  }

  for (int i = start_index; i < end_index; i++) {
    if (input[i] != ' ') {
      new_string[strlen(new_string)] = input[i];
    } else if (input[i + 1] != ' ') {
      new_string[strlen(new_string)] = ' ';
    }
  }

  printf("%s\n", new_string);

  return 0;
}