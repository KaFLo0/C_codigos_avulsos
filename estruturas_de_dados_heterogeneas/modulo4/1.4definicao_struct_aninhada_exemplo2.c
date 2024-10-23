#include <stdio.h>
// #include <stdlib.h>

/*
  **** ATENÇÃO ****
    Esse exemplo vai ser melhor desenvolvido no próximo arquivo.
*/

// Exemplo 2:
struct cargo {
  int codigo;
  char descricao[30];
};

struct funcionario {
  int codigo;
  char nome[30];
  float salario;
  struct departamento {
    int cod;
    char descricao[30];
  };
  struct cargo Cargo;
};

struct funcionario Funcionario;

int main(void) {
  printf("Funcionario codigo: %d\n", Funcionario.codigo);
  printf("Funcionario codigo depto: %d", Funcionario.cod);

  return 0;
}