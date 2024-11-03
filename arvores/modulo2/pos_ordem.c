#include <stdio.h>
#include "arvore_binaria.c"
/*
    A
  /   \
  B     C
      /  \
      D   E
*/

/*
  Consiste em se percorrer em pós-ordem a subárvore esquerda, depois percorrer
  em pós-ordem a subárvore direita e, finalmente, visitar o nó.
*/
void pos_ordem(Arvore *tree) {
  if(tree->esquerda != NULL) {
    pos_ordem(tree->esquerda); // percorre recursivamente em pós-ordem a subárvore esquerda
  }

  if(tree->direita != NULL) {
    pos_ordem(tree->direita); // percorre recursivamente em pós-ordem a subárvore direita
  }

  printf("%c ", tree->chave);
}

int main(void) {
  Arvore *tree = criar('A');
  adicionar(tree, 'B', 1);
  adicionar(tree, 'C', 2);
  adicionar(tree->direita, 'D', 1);
  adicionar(tree->direita, 'E', 2);

  // Saída esperada: B D E C A
  pos_ordem(tree);

  return 0;
}