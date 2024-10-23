#include <stdio.h>

int main(void) {
  /* Atribuindo as variáveis */
  int ** ponteiro_indirecao_mult; // Este é um ponteiro PARA um ponteiro do tipo int
  int * ponteiro; // Este é um ponteiro para um int
  int x = 10; // Variável que será apontada

  ponteiro_indirecao_mult = &ponteiro; // Indicando que o nosso Ponteiro irá apontar para o ponteiro
  ponteiro = &x; // Indicando que o ponteiro agora está apontando para o 'x'

  *ponteiro = 30;
  **ponteiro_indirecao_mult = 50;

  printf("%d\n", **ponteiro_indirecao_mult);
  printf("%d\n", *ponteiro);
  printf("%p\n", ponteiro_indirecao_mult); // Por estar apontando para o 'ponteiro', ele vai imprimir o endereço do 'ponteiro'
  printf("%p\n", ponteiro);
  printf("%p", &x);

  return 0;
}