#include <stdio.h>

void trocar(int v1, int v2) {
  int aux = v1;
  v1 = v2;
  v2 = aux;
}

/*
  Sendo assim, ao executar o programa:
  1- O programa principal declara duas variáveis inteiras, v1 e v2, que recebem
    os valores 5 e 10, respectivamente.
  2- O programa principal invoca a sub-rotina troca() com dois argumentos, o
    valor da variável v1 e o valor da variável v2 - troca(5, 10).
  3- A sub-rotina troca() recebe os valores nos seus parâmetros, x e y -
    troca(5,10).
  4- A sub-rotina executa os comandos: Variável local aux recebe o valor do
    parâmetro x, x recebe o valor do parâmetro y, e y recebe o valor da variável
    aux, ficando as variáveis com os seguintes valores: aux = 5, x = 10 e y = 5.


  Essa forma de relacionamento do programa principal com a sub-rotina chamamos
  de passagem por valor . Nela, é passada realmente uma cópia do valor indicado
  na chamada do procedimento ou função. Se alterarmos o conteúdo da variável
  recebida como parâmetro, alteraremos a cópia do valor original e, portanto,
  o original não é modificado.
*/
int main() {
  int x = 17, y = 21;
  printf("---Antes da troca ---\nVariavel x: %d  | Variavel y: %d\n", x, y);

  trocar(x, y);
  printf("---Depois da troca ---\nVariavel x: %d  | Variavel y: %d\n", x, y);

  return 0;
}