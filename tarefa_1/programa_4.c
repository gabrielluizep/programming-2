#include <stdio.h>

int main() {
  printf("Adivinho\n\n 0 - Não\n 1 - Sim\n\n");

  int min = 0;
  int max = 100;

  int guessed = 0;
  int answer;

  int input;

  for (int i = 0; (i < 7) || (guessed == 1); i++) {
    int mean = (min + max) / 2;

    printf("Seu número é %d? ", mean);
    scanf("%d", &guessed);

    if (guessed == 1) {
      answer = mean;
      break;
    }

    printf("Seu número é maior? ");
    scanf("%d", &input);

    if (input == 1) {
      min = mean;
    } else {
      max = mean;
    }
  }

  printf("\n\nAnswer %d\n", answer);

  return 0;
}
