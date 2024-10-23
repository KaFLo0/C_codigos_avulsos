#include <stdio.h>

/*
  A sub-rotina troca() possui nos seus parâmetros os ponteiros *v1 e *v2,
  responsáveis em receber o endereço de memória das variáveis x e y.
*/
void trocar(int *v1, int *v2) {
  if(v1 != NULL && v2 != NULL) {
    /* Note que a variável aux continua a ser declarada do tipo int,
    pois seu propósito é armazenar um dos valores e não endereço.*/
    int aux = *v1;
    *v1 = *v2;
    *v2 = aux;
  }
}

/*
  Sendo assim, ao executar o programa:
  1 - O programa principal declara as variáveis x e y, que recebem os
    valores 17 e 21, respectivamente (x=17 e y=21).
  2 - O programa principal invoca a sub-rotina troca(), que passa por referência
    o endereço de memória das variáveis x e y, por exemplo:
    troca(6487580, 6487576).
  3 - A sub-rotina troca() recebe os endereços de memória das variáveis x e y
    nos seus parâmetros *v1 e *v2 (void troca(6487580, 6487576)).

  4 - Os ponteiros *v1 e *v2, parâmetros da sub-rotina, agora estão com os
    endereços das variáveis x e y.
  5 - A variável aux, declarada localmente na sub-rotina, recebe o valor da
    variável x, apontada pelo ponteiro *v1 (aux = 17).
  6 - O valor armazenado no endereço de memória apontado por *v1 é trocado
    pelo valor armazenado no endereço de memória apontado pelo *v2.
  7 - O valor armazenado no endereço de memória apontado por *v2 é trocado
    pelo valor da variável aux.
*/
int main() {
  int x = 17, y = 21;
  printf("---Antes da troca ---\nVariavel x: %d  | Variavel y: %d\n", x, y);

  /*
    A sub-rotina troca() é invocada, e nos seus argumentos, no lugar dos valores
    das variáveis x e y, encontramos o endereço de memória das variáveis ao
    se usar o operador “&”.
  */
  trocar(&x, &y);
  printf("---Depois da troca ---\nVariavel x: %d  | Variavel y: %d\n", x, y);

  return 0;
}