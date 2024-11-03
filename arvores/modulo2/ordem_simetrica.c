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
  Consiste em se percorrer em ordem simétrica a subárvore esquerda, depois se
  visitar o nó e finalmente se percorrer em ordem simétrica a subárvore direita.
*/
void ordem_simetrica(Arvore *tree) {
  if(tree->esquerda != NULL) {
    ordem_simetrica(tree->esquerda);
  }
  printf("%c ", tree->chave);
  if(tree->direita != NULL) {
    ordem_simetrica(tree->direita);
  }
}

int main(void) {
  Arvore *tree = criar('A');
  adicionar(tree, 'B', 1);
  adicionar(tree, 'C', 2);
  adicionar(tree->direita, 'D', 1);
  adicionar(tree->direita, 'E', 2);

  // Saída esperada: B A D C E
  ordem_simetrica(tree);

  return 0;
}