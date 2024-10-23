#include <stdio.h>
#define MAX 4

/*
  A ideia desse algoritmo é implementar uma fila sequencial em um array, de forma
  que o array fique virtualmente "circular". Isso significa que após atingido a
  última casa do array, e tendo posições livres no inicio do array(fila), ele
  será adicionado ao inicio, porém, mantendo a ordem de execução da fila e não
  quebrando a regra FIFO das filas.
  First In, First out.
*/

static int FIM_FILA = -1;
static int INICIO_FILA = -1;

// Verificação se a lista ainda não foi inicializada
int isEmpty(void) {
  return (INICIO_FILA == -1);
}

// Verificação se a lista está cheia
int isFull(void) {
  return ((FIM_FILA + 1) % MAX == INICIO_FILA);
}

// Adicionar um elemento na fila
int push(int *vet, int valor) {
  // Se está cheia
  if(isFull()) {
    printf("Falha na insercao! A fila esta cheia.\n");
    return 0;
  }

  // Se for o primeiro elemento
  if(isEmpty()) {
    INICIO_FILA = 0;
  }

  // Caso tudo OK, prosseguir com o enqueue
  FIM_FILA = (FIM_FILA + 1) % MAX;
  vet[FIM_FILA] = valor;
  return 1;
}

int unshift(int *vet) {
  if(isEmpty()) {
    printf("Erro na remocao! A fila esta vazia.\n");
    return -1;
  }

  int valor = vet[INICIO_FILA];

  // Se a fila ficar vazia após o unshift
  if(INICIO_FILA == FIM_FILA) {
    INICIO_FILA = -1; FIM_FILA = -1;
  } else {
    INICIO_FILA = (INICIO_FILA + 1) % MAX;
  }

  return valor;
}

int main(void) {
  int vetor[MAX];
  push(vetor, 12);
  push(vetor, 5);
  push(vetor, 94);
  printf("Valor do elemento do inicio da fila: %d\n", vetor[INICIO_FILA]);

  push(vetor, 33);

  unshift(vetor);
  printf("Valor do elemento do inicio da fila: %d\n", vetor[INICIO_FILA]);
  push(vetor, 10);
  printf("Valor do elemento do inicio da fila: %d\n", vetor[INICIO_FILA]);

  for(int i = 0; i < MAX; i++) {
    printf("Posicao: %d  |  Valor: %d\n", i, vetor[i]);
  }

  return 0;
}