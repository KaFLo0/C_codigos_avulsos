#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[50];
  char materia[30];
  float media;
} boletim;

// Retirar o caracter de escape '\n' retido ao final da string
char* strformat(boletim *str, int escolha) {
  size_t len;
  if(escolha == 1) {
    len = strlen(str->nome);
    if(len > 0 && str->nome[len - 1] == '\n') {
      str->nome[len - 1] = '\0';
    }
    return str->nome;
  } else if(escolha == 2) {
    len = strlen(str->materia);
    if(len > 0 && str->materia[len - 1] == '\n') {
      str->materia[len - 1] = '\0';
    }
    return str->materia;
  }
  return NULL;
}

int main(void) {
  boletim array_boletim[4];
  // Inicializar os membros da struct com valores padrao(default)
  for(int i = 0; i < 4; i++) {
    strcpy(array_boletim[i].nome, "NULL");
    strcpy(array_boletim[i].materia, "NULL");
    array_boletim[i].media = 0.0;
  }

  printf("----- CADASTRO DO ARRAY DE STRUCTS -----\n");

  // Popular meu array de structs
  for(int i = 0; i < 4; i++) {
    printf("\nNome do aluno..: ");
    fgets(array_boletim[i].nome, sizeof(array_boletim[i].nome), stdin);
    strformat(&array_boletim[i], 1);

    printf("Materia........: ");
    fgets(array_boletim[i].materia, sizeof(array_boletim[i].materia), stdin);
    strformat(&array_boletim[i], 2);

    printf("Media..........: ");
    scanf("%f", &array_boletim[i].media);
    getchar();
  }

  printf("\n----- IMPRIMINDO ARRAY DE STRUCTS -----\n");

  // Imprimir o array de structs
  for(int i = 0; i < 4; i++) {
    printf("Nome.....: %s\n", array_boletim[i].nome);
    printf("Materia..: %s\n", array_boletim[i].materia);
    printf("Media....: %.2f\n\n\n", array_boletim[i].media);
  }

  return 0;
}