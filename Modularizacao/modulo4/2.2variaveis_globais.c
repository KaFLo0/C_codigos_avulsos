#include <stdio.h>

int num = 20;

/*
  Em um programa, as variáveis locais e as globais podem ter o mesmo
  identificador, isto é, o mesmo nome. Porém, dentro de uma sub-rotina,
  as variáveis locais sobrepõem o valor das globais.

  No Programa, apresentado a seguir, encontramos uma declaração de variável
  global e variável local com o mesmo nome nas linhas 3 e 17, respectivamente,
  que é a variável num.
*/
int main () {
  int num;
  num = 10;
  printf("O valor da variavel num dentro da main: %d", num);

  return 0;
}