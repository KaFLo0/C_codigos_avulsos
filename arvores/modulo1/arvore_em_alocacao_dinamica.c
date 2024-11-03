#include <stdio.h>
#include <stdlib.h>

struct noh {
  int chave;
  struct noh *filho_esq;
  struct noh *filho_meio;
  struct noh *filho_dir;
};
typedef struct noh Noh;

/* Pra que que eu fui inventar de fazer arvore ternaria? */
Noh* criar(int valor) {
  Noh *nodulo = malloc(sizeof(Noh));
  nodulo->chave = valor;
  nodulo->filho_esq = NULL;
  nodulo->filho_meio = NULL;
  nodulo->filho_dir = NULL;
  return nodulo;
}

/*
  @param posicao: Valores: 1 para esquerda | 2 para meio | 3 para direita
*/
void adicionar(Noh *nodulo, int valor, int posicao) {
  Noh *aux = criar(valor);
  if(posicao == 1) {
    nodulo->filho_esq = aux;
  } else if(posicao == 2) {
    nodulo->filho_meio = aux;
  } else if(posicao == 3) {
    nodulo->filho_dir = aux;
  } else {
    printf("Posicao invalida.\n");
  }
}

void printArvore(Noh *nodulo, int nivel) {
  if (nodulo == NULL) {
    return;
  }

  // Printando o nó atual com indentação
  for (int i = 0; i < nivel; i++) {
    printf("    "); // Indentação para representar o nível
  }
  printf("|-- %d\n", nodulo->chave);
  
  // Printando cada filho recursivamente, com um incremento no nível
  if (nodulo->filho_esq != NULL) {
    printArvore(nodulo->filho_esq, nivel + 1);
  }
  if (nodulo->filho_meio != NULL) {
    printArvore(nodulo->filho_meio, nivel + 1);
  }
  if (nodulo->filho_dir != NULL) {
    printArvore(nodulo->filho_dir, nivel + 1);
  }
}

int main(void) {
  Noh *arvore = criar(2);
  adicionar(arvore, 3, 1);
  adicionar(arvore, 5, 2);
  adicionar(arvore, 7, 3);
  adicionar(arvore->filho_esq, 11, 1);
  adicionar(arvore->filho_esq, 13, 2);
  adicionar(arvore->filho_esq, 17, 3);
  adicionar(arvore->filho_meio, 19, 1);
  adicionar(arvore->filho_meio, 23, 2);
  adicionar(arvore->filho_meio, 29, 3);
  adicionar(arvore->filho_dir, 31, 1);
  adicionar(arvore->filho_dir, 37, 2);
  adicionar(arvore->filho_dir, 41, 3);
  printArvore(arvore, 0);

  return 0;
}