#include <stdio.h>

int main(void) {
  int v_num = 10; //v_num é a variável que será apontada pelo ponteiro

  int *ptr; //declaração de variável ponteiro

  ptr = &v_num; //atribuindo o endereço da variável v_num ao ponteiro

  printf("Utilizando ponteiros\n\n");
  printf("Conteudo da variavel v_num: %d\n", v_num);
  printf("Endereco da variavel v_num: %p \n", &v_num);
  printf("Conteudo da variavel ponteiro ptr: %p", ptr);

  return(0);
}