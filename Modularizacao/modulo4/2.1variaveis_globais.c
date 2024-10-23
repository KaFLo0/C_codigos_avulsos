#include <stdio.h>

/*
  As variáveis globais são declaradas fora da sub-rotina. São acessíveis em
  todos os escopos, em qualquer ponto de um programa, mesmo em outros módulos.

  Podem, portanto, ser usadas ou modificadas por qualquer sub-rotina do programa
  onde estão declaradas. Em outras palavras, as variáveis globais estão
  disponíveis durante toda a execução do programa.

  O valor de uma variável global ao longo do ciclo de vida do programa é sempre válido.
*/
int num3;

int main () {
  int num1, num2;
  num1 = 10;;
  num2 = 20;
  num3 = num1 + num2;
  printf("%d + %d = %d", num1, num2, num3);

  return(0);
}