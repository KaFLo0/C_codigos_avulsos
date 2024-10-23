#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

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

Aluno aluno[5];
int i=0;

int main() {
  setlocale(LC_ALL,"portuguese");
  for(i=0; i< 5; i++) {
    aluno[i].codigo = 0;
    strcpy(aluno[i].nome, "NULL");
    aluno[i].datNasc.dia = 0;
    aluno[i].datNasc.mes = 0;
    aluno[i].datNasc.ano = 0;
  }

  for(i=0; i< 5; i++) {
    printf(" \n ======================================================================");
    printf(" \n O codigo do aluno eh: %d ", aluno[i].codigo);
    printf(" \n O nome do aluno eh: %s ", aluno[i].nome);
    printf(" \n A data de nascimento do aluno eh: %d / %d / %d ",
    aluno[i].datNasc.dia, aluno[i].datNasc.mes,
    aluno[i].datNasc.ano);
    printf(" \n ");
  }

  for(i=0; i< 5; i++) {
    printf(" \n ======================================================================");
    printf(" \n ======================================================================");
    printf(" \n Digite o codigo do aluno: ");
    scanf("%d%*c", &aluno[i].codigo);
    printf(" \n Digite o nome do aluno: ");
    fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
    size_t len = strlen(aluno[i].nome);
    if(len > 0 && aluno[i].nome[len - 1] == '\n') {
      aluno[i].nome[len - 1] = '\0';
    }
    printf(" \n Digite o dia do nascimento do aluno: ");
    scanf("%d%*c", &aluno[i].datNasc.dia);
    printf(" \n Digite o mes do nascimento do aluno: ");
    scanf("%d%*c", &aluno[i].datNasc.mes);
    printf(" \n Digite o ano do nascimento do aluno: ");
    scanf("%d%*c", &aluno[i].datNasc.ano);
  }

  for(i=0; i< 5; i++) {
    printf(" \n ======================================================================");
    printf(" \n O codigo do aluno eh: %d ", aluno[i].codigo);
    printf(" \n O nome do aluno eh: %s ", aluno[i].nome);
    printf(" \n A data de nascimento do aluno eh: %d / %d / %d ", aluno[i].datNasc.dia, aluno[i].datNasc.mes, aluno[i].datNasc.ano);
    printf(" \n ");
  }

  return(0);
}