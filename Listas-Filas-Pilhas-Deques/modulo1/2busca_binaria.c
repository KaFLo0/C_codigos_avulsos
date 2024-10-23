#include <stdio.h>
#include <math.h>

// Essa função apenas inicializa o vetor.
void IniciarVetor(int vet[], int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    vet[i] = i;
  }
}

/*
  Comparar vet[meio] com o valor de target.
  Retornar recursivamente a função de acordo com o número de repetições necessárias.
  A condição de parada correta é quando inicio > fim, o que significa que o elemento não está presente no vetor.
  A função retorna o índice do elemento encontrado ou -1 se o elemento não for encontrado.
*/
int BuscaBinaria(int vet[], int target, int inicio, int fim) {
  if(inicio > fim) {
    printf("Elemento nao encontrado\n");
    return -1;
  }

  int meio = (inicio + fim) / 2;

  if(vet[meio] == target) {
    return meio;
  } else if(vet[meio] > target) {
    return BuscaBinaria(vet, target, inicio, (meio - 1));
  } else {
    return BuscaBinaria(vet, target, (meio + 1), fim);
  }
}

int main(void) {
  int vetor[100];
  int tamanho = 100;
  int resultado = 0;
  IniciarVetor(vetor, tamanho);
  resultado = BuscaBinaria(vetor, 54, 0, tamanho - 1);

  if (resultado != -1) {
    printf("Elemento encontrado no indice %d\n", resultado);
  }

  return 0;
}