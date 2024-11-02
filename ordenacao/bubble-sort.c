#include <stdio.h>
/*
  Seja S = s1, s2, ..., sn uma sequência de números inteiros distintos. Uma forma de verificar se a sequência S está
  ordenada é realizar o seguinte conjunto de operações: Para 1  i < n verificar se si < si+1, caso isto ocorra, para
  todos os valores de i, a sequência está ordenada.

  Por exemplo, para a sequência S = s1 = 10, s2 = 12, s3 = 15, s4 = 20, s5 = 25, temos que s1 < s2, s2 < s3, s4 < s5.
  Por esta razão, podemos afirmar que a sequência está ordenada.
*/

int TAMANHO = 5;

/*
  A ideia do método da bolha é explorar esta propriedade com o objetivo de ordenar o vetor.

  No exemplo acima, S = s1 = 10, s2 = 12, s3 = 15, s4 = 20, s5 = 25, realizamos uma iteração, ou seja, todas
  as comparações, e verificamos que a propriedade é válida para todo par de elementos adjacentes. Isto garante a
  ordenação da sequência. De fato, se si < si+1 e si+1 < si+2 então si < si+2, ou seja, a comparação é transitiva e
  assim se garante que a relação é válida para qualquer par da sequência si < sj, se i < j.

  O método da bolha explora esta propriedade realizando a troca de posição caso a comparação
  entre elementos adjacentes falhe.
*/
void BubbleSort(int *vetor) {
  int troca = 1; int i = 0; int aux;
  while(troca) {
    troca = 0;
    while(i < (TAMANHO - 1)) {
      if(vetor[i] > vetor[i+1]) {
        aux = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = aux;
        troca = 1;
      }
      i++;
    }
    i = 0;
  }
}

int main(void) {
  int sequencia[5];
  sequencia[0] = 15;
  sequencia[1] = 20;
  sequencia[2] = 8;
  sequencia[3] = 16;
  sequencia[4] = 40;

  for(int i = 0; i < 5; i++) {
    printf("Sequencia S_%d | Valor: %d\n", i, sequencia[i]);
  }

  BubbleSort(sequencia);
  printf("\nSequencia apos ordenacao: \n");

  for(int i = 0; i < 5; i++) {
    printf("Sequencia S_%d | Valor: %d\n", i, sequencia[i]);
  }

  return 0;
}