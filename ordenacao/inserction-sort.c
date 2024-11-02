#include <stdio.h>
/*
  O método de ordenação da inserção é um algoritmo simples e eficiente para listas “quase” ordenadas.

  O princípio de funcionamento do algoritmo é dividir a lista em duas partes:

  - Os elementos já ordenados.
  - Os elementos a ordenar.

  Inicialmente, a parte da lista que contém os elementos já ordenados é o primeiro elemento
  (uma lista unitária é sempre uma lista ordenada). Em seguida, devemos inserir o primeiro elemento da lista não
  ordenada (segundo elemento da lista na primeira iteração) na posição correta do segmento já ordenado da sequência.
  O processo é repetido até que não tenhamos mais elementos na lista não ordenada.
*/

int TAMANHO = 6;

/*
  Vamos analisar a execução do algoritmo através de um exemplo. Seja a sequência: 16, 8, 20, 18, 9, 2.

  Etapa 01
    Na primeira iteração, analisamos o primeiro elemento da sequência não ordenada colocando-o na sua posição correta.
    Assim, passamos a ter “8, 16”, que é a sequência ordenada, e “20, 18, 9, 2”, que é a sequência não ordenada.

  Etapa 02
    Na segunda iteração, vamos colocar o elemento “20” na posição correta que, por coincidência, já está posicionado.
    Sendo assim, passamos a ter “8, 16, 20” como sequência ordenada e “18, 9, 2” como não ordenada.

  Etapa 03
    Na terceira iteração, analisamos a chave “18”, colocando-a na sua posição correta na sequência
    ordenada “8, 16, 18, 20”. Restando “9, 2” como não ordenada.

  Etapa 04
    Na quarta iteração, analisamos “9”, obtendo “8, 9, 16, 18, 20” e “2”.
    Na última iteração, a chave “2” é colocada em sua posição, terminando a execução.

  Assim como os outros, o algoritmo é estável, não recursivo e com complexidade de espaço de O(n).
*/
void InsertionSort(int *vetor) {
  int i, j, aux;

  for(i = 0; i < (TAMANHO - 1); i++) {
    j = i + 1;
    while(vetor[j-1] > vetor[j] && j > 0) {
      aux = vetor[j-1];
      vetor[j-1] = vetor[j];
      vetor[j] = aux;
      j--;
    }
  }
}

int main(void) {
  int sequencia[6];
  sequencia[0] = 16;
  sequencia[1] = 8;
  sequencia[2] = 20;
  sequencia[3] = 18;
  sequencia[4] = 9;
  sequencia[5] = 2;

  for(int i = 0; i < 6; i++) {
    printf("Sequencia S_%d | Valor: %d\n", i, sequencia[i]);
  }

  InsertionSort(sequencia);
  printf("\nSequencia apos ordenacao: \n");

  for(int i = 0; i < 6; i++) {
    printf("Sequencia S_%d | Valor: %d\n", i, sequencia[i]);
  }

  return 0;
}