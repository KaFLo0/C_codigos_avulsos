#include <stdio.h>
#include <stdlib.h>

// Tabela para simular um registro encadeado
struct tabelaInt {
  int valor;
};
typedef struct tabelaInt tabela;

/*
  Vou tentar seguir de cabeça o exemplo da aula:
    1 - Vai ter uma chave de identificação na struct
    2 - Vai ter uma struct que seria algo como um registro genérico(objeto)
    3 - Vai ter um ponteiro para o próximo elemento
*/
struct no {
  int chave;
  tabela elemento_tab;
  struct no *proximo;
};
typedef struct no No;

No *search(No *No_cabeca, No **aux, int chave) {
    No *atual = No_cabeca -> proximo;
    *aux = No_cabeca;
    while(atual != NULL) {
      if(atual->chave == chave) {
        return atual; // Elemento encontrado
      }

      *aux = atual;
      atual = atual -> proximo;
    }
    return NULL; // Elemento não encontrado
}

/*
  O novo nó recebe os valores a serem inseridos. Esse nó, corresponde até esse ponto a um espaço
  de memória preenchido com os novos valores, mas sem qualquer ligação com a lista.

  O campo “proximo” do novo nó (“novo_no”) deve apontar para a mesma região de
  memória que é apontada por “proximo” em “anterior”.

  O próximo passo consiste em fazer o campo “proximo” de “anterior” apontar para “novo_no”. Em outras palavras,
  teremos inserido “novo_no” entre o nó “anterior” e aquele apontado pelo seu campo proximo.
*/
int add(No *No_cabeca, tabela novoElemento, int chave) {
  No *aux, *anterior = NULL;
  No *Novo_no = (No *) calloc(1, sizeof(No));
  if(Novo_no == NULL) {
    return 0; // Falha na alocação de memória
  }

  // Verifica se a chave já existe na lista
  aux = search(No_cabeca, &anterior, chave);
  if(aux != NULL) {
    free(Novo_no); // Libera a memória do novo nó alocado, pois a chave já existe
    return 0; // Falha: chave duplicada
  }

  // Preencher os dados do novo Nó
  Novo_no ->elemento_tab = novoElemento;
  Novo_no ->chave = chave;

  if(anterior == NULL) {
    Novo_no ->proximo = No_cabeca->proximo;
    No_cabeca->proximo = Novo_no;
  } else {
    Novo_no->proximo = anterior->proximo;
    anterior->proximo = Novo_no;
  }

  return 1;
}

// Excluir o último elemento da lista
int pop(No *No_cabeca) {
  // Verifica se a lista está vazia
  if(No_cabeca->proximo == NULL) {
    return 0; // A lista está vazia
  }

  No *atual = No_cabeca->proximo;
  No *anterior = No_cabeca;

  // Percorrer até o último nó(elemento)
  while(atual->proximo != NULL) {
    anterior = atual;
    atual = atual->proximo;
  }

  // Se só há um nó na lista (após o nó-cabeça)
  if(anterior == No_cabeca) {
    No_cabeca->proximo = NULL;
  } else {
    anterior->proximo = NULL;
  }

  free(atual);
  return 1;
}

// Imprimir a lista
void printlist(No *lista) {
  No *atual = lista->proximo;
  while(atual != NULL) {
    printf("Chave: %d, Valor: %d\n", atual->chave, atual->elemento_tab.valor);
    atual = atual->proximo;
  }
}

int main(void) {
  No *lista = (No *) calloc(1, sizeof(No));
  lista->proximo = NULL;

  tabela elem1 = {10};
  tabela elem2 = {20};
  tabela elem3 = {30};
  tabela elem4 = {40};

  add(lista, elem1, 1);
  add(lista, elem2, 2);
  add(lista, elem3, 3);
  add(lista, elem4, 4);

  printlist(lista);
  printf("\n\n\n");

  pop(lista);
  pop(lista);
  printlist(lista);

  return 0;
}