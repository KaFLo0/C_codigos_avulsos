#include <stdio.h>

/*
  Esqueleto da função declarada para não haver erros durante a compilação,
  com sua implementação abaixo da função main()

  Com isso, separamos a declaração da implementação, permitindo que ela possa
  vir em qualquer lugar do código (antes ou depois de qualquer outra função).
*/
void imprime(int numero);
/*
  Além disso, um programa que declara todas as funções antes de usá-las tende a ser mais claro,
  pois o programador já sabe qual o conjunto de funções que ele pode usar, sem se preocupar com
  a forma como elas foram implementadas (ou sequer como elas foram desenvolvidas, caso o código
  esteja sendo desenvolvido por uma equipe).
*/

/*
  São estruturas que agrupam um conjunto de comandos, que são executados quando o procedimento
  é chamado, ou seja, procedimentos em linguagem C são funções do tipo void.
*/
int main(void) {
  int x = 21;

  /* Para invocarmos um procedimento, devemos utilizá-lo como utilizaríamos qualquer outro comando, ou seja: */
  imprime(x);

  return 0;
}

// Por exemplo, o procedimento a seguir imprime o número que for passado para ele como parâmetro
void imprime(int numero) {
  /*
    Ao se ignorar o valor de retorno de uma função e, para esta chamada, ela será equivalente a um procedimento.
  */
  printf("Numero: %d\n", numero);
}