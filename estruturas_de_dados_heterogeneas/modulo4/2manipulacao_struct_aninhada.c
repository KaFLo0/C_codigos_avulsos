#include <stdio.h>
#include <string.h>
#define LEN 50

struct endereco {
  char rua[LEN];
  char cidade_estado_cep[LEN];
};

struct estudante {
  char id[10];
  int idade;
  struct endereco casa;
  struct endereco escola;
};

struct estudante pessoa;

int main(void) {
  pessoa.idade = 15;
  strcpy(pessoa.id, "1");
  strcpy(pessoa.casa.rua, "Rua das Colinas");
  strcpy(pessoa.casa.cidade_estado_cep, "12345-123");
  strcpy(pessoa.escola.rua, "Rua das Bandeiras");
  strcpy(pessoa.escola.cidade_estado_cep, "67890-678");
  // Note o uso repetido de “.” quando se acessa membros dentro de membros.

  printf("-------- Informacoes Pessoais --------");
  printf("\n\nID..........: %s\n", pessoa.id);
  printf("Idade.......: %d\n\n", pessoa.idade);
  printf("\n-------- Endereco Residencial --------");
  printf("\n\nRua.........: %s\nCEP.........: %s\n", pessoa.casa.rua, pessoa.casa.cidade_estado_cep);
  printf("\n\n-------- Endereco Escolar --------");
  printf("\n\nRua.........: %s\nCEP.........: %s", pessoa.escola.rua, pessoa.escola.cidade_estado_cep);

  return 0;
}