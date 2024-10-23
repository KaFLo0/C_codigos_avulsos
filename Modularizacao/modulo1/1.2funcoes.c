#include <stdio.h>

/*
  No exemplo a seguir, identificamos a função soma() que realiza a soma de dois
  valores, que são passados por parâmetro:
*/
int soma(int a, int b) {
  /*
    A expressão contida dentro do comando return é chamada de valor de retorno,
    e corresponde à resposta de uma determinada função. Esse comando é sempre o
    último a ser executado por uma função, e nada após ele será executado.

    Quando utilizado, o comando return informa ao sistema operacional se o
    programa funcionou corretamente ou não. O padrão é que um programa retorne
    zero caso tenha funcionado corretamente, ou qualquer outro valor caso contrário.
  */
  return (a + b);
}

// (Ex 1) -> Faz parte do Exemplo 1 | (Ex 2) -> Faz parte do Exemplo 2
int main(void) {
  int x = 15, y = 6;
  int resultado = 0;  // Apague este comentário para testar! (Ex 1)

  /*
    (Ex 1)Uma forma clássica de realizarmos a invocação (ou chamada)
    de uma função é atribuindo o seu valor a uma variável.
  */
  resultado = soma(x, y);  // Apague este comentário para testar! (Ex 1)

  /*
    (Ex 2)Na verdade, podemos invocar uma função em qualquer lugar onde faríamos a
    leitura de uma variável, mas nunca a escrita. Vejamos o exemplo a seguir
  */
  printf("Resultado da soma de %d e %d: %d", x, y, resultado);  // Apague este comentário para testar! (Ex 1)
  // printf("Soma de x e y: %d", soma(x, y));  // Apague este comentário para testar! (Ex 2)

  return 0;
}