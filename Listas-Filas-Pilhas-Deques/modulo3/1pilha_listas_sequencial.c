#include <stdio.h>

static int topo = -1;
static int MAX_PILHA = 3;

int push(int *vet, int valor) {
  if(topo < (MAX_PILHA - 1)) {
    topo ++;
    vet[topo] = valor;
    return 1;
  } else {
    return 0;
  }
}

int pop(int *vet) {
  if(topo >= 0) {
    int valor_recuperado = vet[topo];
    topo--;
    return valor_recuperado;
  } else {
    return -1;
  }
}

int main(void) {
  int vetor[3];
  push(vetor, 1);
  push(vetor, 2);
  push(vetor, 3);

  if(push(vetor, 4) == 0) {
    printf("Erro, pilha ja esta cheia!\n");
  }

  // printf("Pop: %d\n", pop(vetor));
  // printf("Pop: %d\n", pop(vetor));
  // printf("Pop: %d\n", pop(vetor));
  printf("Pop: %d\n", pop(vetor));

  for(int i = 0; i <= topo; i++) {
    printf("%d\n", vetor[i]);
  }

  return 0;
}