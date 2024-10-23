#include <stdio.h>
//#include <stdlib.h> // No exemplo da Estácio, tem essa importação mas descobri que ela não foi utilizada aqui!
#include <string.h>

// Para entendermos melhor as duas formas de declaração de estrutura aninhadas, vamos analisar o Exemplo 1 abaixo.
struct departamento {
  int codigo;
  char descricao[30];
};

struct cargo {
  int codigo;
  char descricao[30];
};

struct funcionario {
  int codigo;
  char nome[30];
  float salario;
  struct departamento depto;
  struct cargo Cargo;
};

struct funcionario Funcionario;

/*
  Em resumo, temos:
  - Nas linhas 6 e 9, foi declarada a estrutura departamento.
  - Nas linhas 11 e 14, foi declarada a estrutura cargo.
  - Nas linhas 16 e 22, foi declarada a estrutura funcionário.
  - Na linha 20, o campo depto é do tipo struct departamento.
  - Na linha 21, o campo Cargo, da mesma forma que o campo depto, é do tipo struct cargo.
*/

/*
  Ao analisar o código, visualizamos uma struct aninhada nas linhas 20 e 21, com os campos
  depto e cargo. Temos, então, um aninhamento de estruturas.

  Outra forma de declarar uma estrutura é colocar uma estrutura dentro da outra,
  literalmente, como apresentado no Exemplo 2 ( está no próximo arquivo )
*/

int main(void) {
  // strcpy(Funcionario.nome, "Kaio");
  printf("Digite o nome do funcionario: ");
  fgets(Funcionario.nome, sizeof(Funcionario.nome), stdin);

  // Verifica se o último caractere é um '\n' e o remove
  size_t len = strlen(Funcionario.nome);
  if (len > 0 && Funcionario.nome[len - 1] == '\n') {
    Funcionario.nome[len - 1] = '\0'; // Substitui o '\n' por um caractere nulo
  }

  printf("Funcionario: %s", Funcionario.nome);

  return 0;
}