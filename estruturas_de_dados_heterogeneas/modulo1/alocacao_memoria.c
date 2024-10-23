#include <stdio.h>

static int a = 0; // Variável global, alocação estática

void incrementa(void) {
  int b = 0; // Variável local, alocação automática
  static int c = 0; // Variável local, alocação estática

  printf("a: %d, b: %d, c: %d\n", a, b ,c);
  a++;
  b++;
  c++;
}

int main(void) {
  for(int i = 0; i < 5; i++) {
    incrementa();
  }

  return 0;
}