#include <stdio.h>
#include "arvore_binaria.c"
/*
  Consiste em se visitar o nó, percorrer em pré-ordem a subárvore esquerda e,
  depois, percorrer em pré-ordem a subárvore direita.
*/
void pre_ordem(Arvore *tree) {
  printf("%c ", tree->chave); // visita o nó

  if(tree->esquerda != NULL) {
    pre_ordem(tree->esquerda); // percorre recursivamente em pré-ordem a subárvore esquerda
  }

  if(tree->direita != NULL) {
    pre_ordem(tree->direita); // percorre recursivamente em pré-ordem a subárvore direita
  }
}

int main(void) {
  Arvore *tree = criar('A');
  adicionar(tree, 'B', 1);
  adicionar(tree, 'C', 2);
  adicionar(tree->direita, 'D', 1);
  adicionar(tree->direita, 'E', 2);

  // Saída esperada: A B C D E
  /*
      A
    /   \
   B     C
        /  \
        D   E
  */
  pre_ordem(tree);

  return 0;
}