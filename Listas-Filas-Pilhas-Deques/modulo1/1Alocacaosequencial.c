#include <stdio.h>

// Em linguagens de programação de alto nível, a alocação sequencial é representada pelos arrays ou vetores.

int main(void) {
  /*
    A linha 12 desse código informa ao compilador que deverão ser reservadas posições de memória suficientes para
    armazenar 10 elementos do tipo inteiro. Você deve ter reparado que estamos falando em posição de memória,
    e não em tamanho. A razão disso é que o número de posições necessárias depende do tamanho do tipo de dado e
    da palavra da memória.
  */
  int vetor[10];
  int a = 50;
  vetor[3] = a;

  printf("%d", vetor[3]);

  /*
    Por exemplo, considere que o tipo de dados “int” em C tenha o tamanho mínimo definido na
    especificação C99 (16 bits). Suponha, a título de exemplo, uma memória cuja palavra seja de 8 bits.
    Logo, cada posição de memória pode armazenar 1 byte (8 bits). Assim, para armazenar 10 elementos do
    tipo inteiro serão necessárias 10 * (16 / 8) = 20 posições de memória. Observe que cada elemento
    ocupará duas posições de memória.

    A linha 14 do exemplo está acumulando o valor de “a” no quarto elemento do vetor
    (em C, o vetor inicia com índice zero). Isso quer dizer saltar 6 posições de memória
    3 (índice do vetor) * 2 (número de posições de memória que cada elemento ocupa) = 6).
  */

  return 0;
}