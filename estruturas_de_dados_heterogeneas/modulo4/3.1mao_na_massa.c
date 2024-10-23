#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// No Exemplo 5, vamos criar uma struct para armazenar os dados do aluno (código, nome e data de nascimento).
typedef struct {
  int codigo;
  char nome[200];
  struct {
    int dia;
    int mes;
    int ano;
  };
} Aluno;

Aluno aluno;

/*
  Observe as linhas de 07 a 15. Nesse trecho do código-fonte, é definida uma estrutura
  que recebe o nome de Aluno e, dentro dela, outra estrutura com os membros dia, mês e ano.

  A estrutura que possui a data de nascimento do aluno está nas linhas 11, 12 e 13, note
  que ela não tem nome, e não é necessário que tenha, pois ela está contida dentro da estrutura Aluno.
  Podemos dizer que temos uma estrutura externa e uma estrutura interna, as quais são respectivamente Aluno e data.
*/

int main(void) {
  setlocale(LC_ALL, "portuguese");
  aluno.codigo = 0;
  strcpy(aluno.nome, "NULL");
  aluno.dia = 0;
  aluno.mes = 0;
  aluno.ano = 0;

  printf("\n O codigo do aluno eh: %d ", aluno.codigo);
  printf("\n O nome do aluno eh: %s ", aluno.nome);
  /*
    Os membros da estrutura interna são acessados da mesma forma que a estrutura externa, isto é, diretamente.
    Na linha 42, podemos observar a forma de acesso diretamente pelo nome da variável da Estrutura.
  */
  printf("\n A data de nascimento do aluno eh: %d / %d / %d \n\n", aluno.dia, aluno.mes, aluno.ano);

  printf("Digite o codigo do aluno: ");
  scanf("%d%*c", &aluno.codigo);
  printf("Digite o nome do aluno: ");
  fgets(aluno.nome, sizeof(aluno.nome), stdin);
  size_t len = strlen(aluno.nome);
  if(len > 0 && aluno.nome[len - 1] == '\n') {
    aluno.nome[len -1] = '\0';
  }
  printf("Digite o dia do nascimento do aluno: ");
  scanf("%d%*c", &aluno.dia);
  printf("Digite o mes do nascimento do aluno: ");
  scanf("%d%*c", &aluno.mes);
  printf("Digite o ano do nascimento do aluno: ");
  scanf("%d%*c", &aluno.ano);

  printf("\nO codigo do aluno eh: %d ", aluno.codigo);
  printf("\nO nome do aluno eh: %s ", aluno.nome);
  printf("\nA data de nascimento do aluno eh: %d / %d / %d \n\n", aluno.dia, aluno.mes, aluno.ano);

  return 0;
}