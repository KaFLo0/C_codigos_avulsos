#include <stdio.h>
#include "arvore_binaria.c"

int busca_arvore(Arvore *tree, int chave) {
  if(tree->chave == chave) {
    return 1; // Chave encontrada
  }else if(chave < tree->chave) {
    if(tree->esquerda == NULL) {
      return 0; // Chave não encontrada
    }else {
      return busca_arvore(tree->esquerda, chave);
    }
  }else if(tree->direita == NULL) {
    return 0; // Chave não encontrada
  }else {
    return busca_arvore(tree->direita, chave);
  }
}

int main(void) {
  Arvore *tree = criar(1);
  adicionar(tree, 2, 1);
  adicionar(tree, 3, 2);
  adicionar(tree->direita, 4, 1);
  adicionar(tree->direita, 5, 2);

  printf("%d ", busca_arvore(tree, 3));

  return 0;
}