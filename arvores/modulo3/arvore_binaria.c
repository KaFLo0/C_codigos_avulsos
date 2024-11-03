#include <stdio.h>
#include <stdlib.h>

/*
  Arquivo representando uma arvore binaria com operacoes simples implementadas.
  Assim fica melhor de desenvolver os exemplos dos proximos arquivos.
*/
struct arvore {
  int chave;
  struct arvore *esquerda;
  struct arvore *direita;
};
typedef struct arvore Arvore;

Arvore* criar(int valor) {
  Arvore *tree = malloc(sizeof(Arvore));
  tree->chave = valor;
  tree->esquerda = NULL;
  tree->direita = NULL;
  return tree;
}

/*
  @param tree: A struct tipo Arvore
  @param valor: Valor da chave
  @param posicao: Posicao do nó em relacao ao nó pai.  1 - Esquerda | 2 - Direita
*/
void adicionar(Arvore *tree, int valor, int posicao) {
  Arvore *aux = criar(valor);
  if(posicao == 1) {
    tree->esquerda = aux;
  } else if(posicao == 2) {
    tree->direita = aux;
  }
}