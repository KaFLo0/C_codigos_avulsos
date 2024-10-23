#include <stdio.h>

/*
  A outra forma é você declarar a estrutura_1 antes e, na estrutura_2, declarar
  uma variável da estrutura 1. Desta forma, a sintaxe é a seguinte:
*/
typedef struct {
  int membro_1;
  int membro_2;
  float membro_n; // n = último (em termos matemáticos)
} nome_estrutura_1;

typedef struct {
  int membro_1;
  int membro_2;
  nome_estrutura_1 NE1;
  float membro_n; // n = último (em termos matemáticos)
} nome_estrutura_2;

nome_estrutura_2 NE2;

int main(void) {
  // Para acessar os membros:
  printf("%d", NE2.membro_1);
  printf("%d", NE2.NE1.membro_1);

  return 0;
}