#include <stdio.h>
#include <stdlib.h>

struct pilha {
  int valor;
  struct pilha *prox;
};
typedef struct pilha Pilha;

static Pilha *topo = NULL;

int push(int numero) {
  Pilha *novo_elemento = (Pilha *) calloc(1, sizeof(Pilha));
  if(novo_elemento == NULL) {
    return 0;
  }

  // O elemento não pré-existindo, adicionar o requisitado
  novo_elemento->valor = numero;
  novo_elemento->prox = topo;
  topo = novo_elemento;
  return 1;
}

int pop(void) {
  if(topo == NULL) {
    return -1;
  }

  int elemento_recuperado = topo->valor;
  Pilha *aux = topo;
  topo = topo->prox;
  free(aux);
  return elemento_recuperado;
}

void imprimirPilha(void) {
  Pilha *atual = topo;
  while (atual != NULL) {
    printf("%d\n", atual->valor);
    atual = atual->prox;
  }
}

int main(void) {
  push(1);
  push(5);
  push(20);
  push(6);

  int elemento = pop();
  if (elemento != -1) {
    printf("Elemento removido: %d\n", elemento);
  } else {
    printf("A pilha esta vazia.\n");
  }

  printf("Topo da pilha agora: ");
  if (topo != NULL) {
    printf("%d\n", topo->valor);
  } else {
    printf("A pilha esta vazia.\n");
  }

  printf("Elementos restantes na pilha:\n");
  imprimirPilha();

  return 0;
}