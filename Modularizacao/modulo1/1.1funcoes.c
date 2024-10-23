#include <stdio.h>
#include <math.h>

/*
  As funções são procedimentos que retornam um único valor ao final de sua execução.

  No exemplo abaixo, apresentamos alguns casos, como as funções sqrt(), scanf() e printf(),
  que calculam a raiz quadrada, leem um número da entrada padrão e imprimem um valor na saída padrão.
*/
int main(void) {
  float x = 0, y = 0;

  // printf()
  printf("Digite um numero para calculo da raiz quadrada: ");
  // scanf()
  scanf("%f", &y);
  // sqrt()
  x = sqrt(y);
  // printf()
  printf("Raiz quadrada de %.2f eh igual a: %.2f\n", y, x);

  return 0;
}