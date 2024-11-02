#include <stdio.h>
/*
  O método da ordenação por seleção é um algoritmo simples.

  O algoritmo é iterativo e parte do princípio que a sequência não está ordenada e que todos os elementos da sequência
  estão fora de sua posição.

  Na primeira iteração, o algoritmo analisa a sequência S = s1, s2, ..., sn e determina o menor elemento
  desta sequência. Seja sk = s’1 este elemento. Em seguida, o algoritmo troca s’1 com s1.
  Obtendo a sequência S = s’1, s2, ..., s1, ..., sn.

  Na segunda iteração, como s’1 é o menor elemento, s’1 está na posição correta. Ou seja, s’1 é o primeiro elemento
  da sequência ordenada. Nesta iteração, o algoritmo irá determinar o menor elemento entre
  s2, ..., s1, ..., sn, que será o segundo menor elemento da sequência ordenada. Seja sj o menor elemento entre
  s2, ..., s1, ..., sn, seja s’2 = sj. Trocando sj = s’2 com s2, temos a sequência
  s’1, s’2, s3 ..., s1, ..., s2, ..., sn. Ao término da segunda iteração, s’1, s’2 correspondem aos dois primeiros
  termos da sequência ordenada.
*/

int TAMANHO = 6;

/*
  A complexidade computacional do algoritmo é O(n2). Este fato pode ser provado analisando o número de iteração e a
  quantidade de operações por iteração. O primeiro passo para a análise é determinar a operação fundamental
  do algoritmo. A cada iteração, necessitamos o valor mínimo de uma sequência de n elementos. A operação básica para
  isto é a comparação.

  Na primeira iteração, temos que determinar o menor elemento de uma sequência de n elementos. Para isto, é necessário
  realizar n comparações. Na segunda iteração, temos que determinar o menor elemento de uma sequência de n-1 elementos,
  e assim por diante.

  Podemos melhorar a estabilidade do algoritmo realizando a execução em dois passos: No primeiro, elege-se o
  elemento mínimo e, no segundo passo, realiza-se a troca com o elemento na posição i.
*/
void SelectionSort(int *vetor) {
  int i, j, aux, minimo, posicao_minimo;

  for(i = 0; i < (TAMANHO - 1); i++) {
    minimo = vetor[i];
    posicao_minimo = i;
    for(j = i+1; j < TAMANHO; j++) {
      if(minimo > vetor[j]) {
        minimo = vetor[j];
        posicao_minimo = j;
      }
    }
    if(posicao_minimo != i) {
      aux = vetor[posicao_minimo];
      vetor[posicao_minimo] = vetor[i];
      vetor[i] = aux;
    }
  }

}

int main(void) {
  int sequencia[6];
  sequencia[0] = 13;
  sequencia[1] = 25;
  sequencia[2] = 8;
  sequencia[3] = 19;
  sequencia[4] = 7;
  sequencia[5] = 52;

  for(int i = 0; i < 6; i++) {
    printf("Sequencia S_%d | Valor: %d\n", i, sequencia[i]);
  }

  SelectionSort(sequencia);
  printf("\nSequencia apos ordenacao: \n");

  for(int i = 0; i < 6; i++) {
    printf("Sequencia S_%d | Valor: %d\n", i, sequencia[i]);
  }

  return 0;
}