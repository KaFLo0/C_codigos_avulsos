//Programa 1
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  i = 123;
  /*
    O primeiro argumento da função printf() corresponde a um arranjo de
    caracteres (string), que são tratados da seguinte forma:

    - Caracteres ordinários que são copiados para o fluxo de saída.
    - Caracteres de especificação de conversões.
  */
  printf("%d\n", i); // Valor int na base 10
  printf("%x\n", i); // Valor int na base 16

  return 0;
}