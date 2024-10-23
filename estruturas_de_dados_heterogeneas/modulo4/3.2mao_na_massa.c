#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
  Agora, no Exemplo 6, vamos criar uma struct para armazenar os dados do aluno
  (código, nome e data de nascimento), porém, a declaração será diferente do Exemplo 5,
  pois alguns membros da estrutura são do tipo struct.
*/
typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct {
  int codigo;
  char nome[200];
  Data datNasc;
} Aluno;

/*
  Se você declarar uma estrutura e tentar utilizá-la dentro de outra estrutura, e a estrutura utilizada
  não tiver sido declarada antes, ao compilar o programa, um erro será apresentado.
*/
Aluno aluno;

int main() {
  setlocale(LC_ALL,"portuguese");
  /*
    A forma de acesso aos membros da estrutura Aluno agora é um pouco diferente. Dentro da estrutura Aluno,
    é criada uma variável do tipo da estrutura Data, que é datNasc. Este nome, datNasc, é o nome que deverá
    ser utilizado para acessar os seus membros. Mas não somente ele, é necessário usar em conjunto com o
    nome da estrutura aluno, como mostram as linhas 39, 40 e 41.

    Assim, em nosso exemplo, declaramos antes a estrutura data, que será usada dentro da estrutura aluno.
    Isto é notado nas linhas 15 a 21.
  */
  aluno.codigo = 0;
  strcpy(aluno.nome, "NULL");
  aluno.datNasc.dia = 0;
  aluno.datNasc.mes = 0;
  aluno.datNasc.ano = 0;

  printf("\nO codigo do aluno eh: %d ", aluno.codigo);
  printf("\nO nome do aluno eh: %s ", aluno.nome);
  printf("\nA data de nascimento do aluno eh: %d / %d / %d \n\n", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);

  printf("Digite o codigo do aluno: ");
  scanf("%d%*c", &aluno.codigo);
  printf("Digite o nome do aluno: ");
  fgets(aluno.nome, sizeof(aluno.nome), stdin);
  size_t len = strlen(aluno.nome);
  if(len > 0 && aluno.nome[len - 1] == '\n') {
    aluno.nome[len -1] = '\0';
  }
  printf("Digite o dia do nascimento do aluno: ");
  scanf("%d%*c", &aluno.datNasc.dia);
  printf("Digite o mes do nascimento do aluno: ");
  scanf("%d%*c", &aluno.datNasc.mes);
  printf("Digite o ano do nascimento do aluno: ");
  scanf("%d%*c", &aluno.datNasc.ano);

  printf("\nO codigo do aluno eh: %d ", aluno.codigo);
  printf("\nO nome do aluno eh: %s ", aluno.nome);
  printf("\nA data de nascimento do aluno eh: %d / %d / %d \n\n", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);

  return(0);
}