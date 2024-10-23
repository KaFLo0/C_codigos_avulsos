#include <stdio.h>
// #include <stdlib.h>

/*
  Além das duas formas de declaração de estrutura aninhada mostradas anteriormente,
  pode-se utilizar também o tipo typedef ao invés de struct.
*/

typedef struct departamento {
  int codigo;
  char descricao[30];
} Departamento;

typedef struct cargo {
  int codigo;
  char descricao[30];
} Cargo;

typedef struct funcionario {
  int codigo;
  char nome[30];
  float salario;
  Departamento depto;
  Cargo cargo;
} Funcionario;

int main(void) {
  // printf( "\n TEXTO %_" , nome_vetor_struct[indice].nome_membro_struct);
  /* Eu sinceramente não entendi esse comando acima... */

  return 0;
}