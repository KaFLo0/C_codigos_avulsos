#include <stdio.h>
#include <stdint.h>
#define TAMANHO 7 // Tamanho do vetor
/*
  Uma das formas de implementar uma árvore é com o uso de alocação sequencial (array). É perfeitamente possível
  implementar uma árvore com vetores, embora esta não seja a maneira mais eficaz por diversos motivos:
  1 - Em primeiro lugar, um vetor limita o espaço de memória a ser utilizado pela árvore, que não pode ultrapassar
    a quantidade definida em tempo de programação. Isto diminui as vantagens de se empregar uma estrutura de dados
    dinâmica como a árvore.
  2 - Além disto, a unidimensionalidade do vetor torna menos intuitivo operar com a árvore implementada desta forma.

  Tanto as operações quanto as relações hierárquicas entre os nós passam a depender fortemente de cálculos matemáticos,
  trazendo um grande esforço para a programação.

  Por estas razões, não vamos nos aprofundar neste tipo pouco usual de implementação de árvores.
*/

// Vamos iniciar o vetor com valores nulos
void IniciarVetorArvore(int *v) {
  for(int i = 0; i < TAMANHO;i++) {
    v[i] = 0;
  }
}

void printArvore(int *v) {
  printf("Arvore em representacao de array:\n");
  for (int i = 0; i < TAMANHO; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");

  // Imprimindo em formato de árvore
  printf("Formato da arvore:\n");
  printf("      %d\n", v[0]);
  printf("    /   \\\n");
  printf("   %d      %d\n", v[1], v[2]);
  printf("  / \\    /  \\\n");
  printf(" %d   %d %d  %d\n", v[3], v[4], v[5], v[6]);
}

/*
  @param *v: vetor a ser passado
  @param valor: valor para ser armazenado no filho
  @param filho: posição de inserção do filho = 1 para esquerda, 2 para direita
  @param posicaoPai: posição do pai do novo elemento
*/
int adicionarFilho(int *v, int valor, uint8_t filho, int posicaoPai){

  if(v[posicaoPai] == (int)NULL) {
    printf("Erro, pai inexistente\n");
    return 0; //falha
  }

  if(filho == 1) {
    v[(posicaoPai * 2)+1] = valor;
    printf("Filho adicionado a esquerda do noh %d com sucesso.\n", posicaoPai);
    return 1; // Sucesso
  } else if(filho == 2) {
    v[(posicaoPai * 2)+2] = valor;
    printf("Filho adicionado a direita do noh %d com sucesso.\n", posicaoPai);
    return 1; // Sucesso
  } else {
    printf("Valor para a posicao do filho nao corresponde a esquerda ou direita.\n");
    return 0; // falha
  }

}

int adicionarRaiz(int *v, int valor) {
  if(v != NULL) {
    v[0] = valor;
    printf("Elemento raiz adicionado com sucesso.\n");
    return 1; // Sucesso
  } else {
    printf("Erro com a adicao do valor, certifique que a arvore passada de referencia existe.\n");
    return 0; // falha
  }
}

int main(void) {
  int arvore[TAMANHO];
  IniciarVetorArvore(arvore);
  printArvore(arvore);

  adicionarRaiz(arvore, 2);
  printf("\n\n");
  adicionarFilho(arvore, 3, 1, 0);
  adicionarFilho(arvore, 5, 2, 0);
  adicionarFilho(arvore, 7, 1, 1);
  adicionarFilho(arvore, 11, 2, 1);
  adicionarFilho(arvore, 13, 1, 2);
  adicionarFilho(arvore, 17, 2, 2);
  printArvore(arvore);

  return 0;
}