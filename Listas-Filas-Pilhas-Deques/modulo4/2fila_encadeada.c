#include <stdio.h>
#include <stdlib.h>

struct fila {
  int valor;
  struct fila *prox;
};
typedef struct fila Fila;

Fila *INICIO_FILA = NULL;
Fila *FIM_FILA = NULL;

int isEmpty(void) {
  return (INICIO_FILA == NULL);
}

int push(int valor) {
  Fila *elemento = (Fila *) malloc(sizeof(Fila));
  if(elemento == NULL) {
    return 0;
  }
  elemento->valor = valor;
  elemento->prox = NULL;

  // Se a fila está vazia
  if(isEmpty()) {
    INICIO_FILA = elemento;
    FIM_FILA = elemento;
  }else {
    FIM_FILA->prox = elemento;
    FIM_FILA = elemento;
  }
  return 1;
}

int unshift(void) {
  if(isEmpty()) {
    printf("Erro! A fila esta vazia.\n");
    return 0;
  }

  Fila *aux = INICIO_FILA;
  int valor_recuperado = INICIO_FILA->valor;
  INICIO_FILA = INICIO_FILA->prox;

  // Se a fila ficou vazia após o unshift
  if(INICIO_FILA == NULL) {
    FIM_FILA = NULL;
  }

  free(aux);

  return valor_recuperado;
}

void printqueue(void) {
  Fila *aux = INICIO_FILA;
  int i = 0;
  while(aux != NULL) {
    printf("Item: %d  |  Valor: %d\n", i, aux->valor);
    aux = aux->prox;
    i++;
  }
}

int main(void) {
  push(10);
  push(7);
  push(43);
  push(65);
  push(79);

  printf("Valor do elemento do inicio da fila: %d\n", INICIO_FILA->valor);
  int removido = unshift();
  if(removido != 0) {
    printf("Valor do elemento removido: %d\n", removido);
  }else {
    printf("A fila esta vazia!\n");
  }

  push(21);
  removido = unshift();
  if(removido != 0) {
    printf("Valor do elemento removido: %d\n", removido);
  }else {
    printf("A fila esta vazia!\n");
  }

  printqueue();

  return 0;
}