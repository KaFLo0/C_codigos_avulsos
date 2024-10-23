#include <stdio.h>
#include <string.h>

/* 
  2-) A segunda maneira é a declaração de uma ou mais variáveis
  durante a definição da própria estrutura.
*/
struct livro {
  char nome[30];
  char autor[50];
  int paginas;
  float preco;
} livro1, livro2, livro3;

/*
  3-) E por último, a terceira maneira é para o caso de apenas uma variável
  do tipo estrutura ser necessária no programa. Sendo assim, não precisamos
  declarar um identificador, basta definir o nome da variável que será criada.
  Por exemplo, podemos criar uma variável estrutura
  chamada livro da seguinte forma:
*/
struct {
  char nome[30];
  char autor[50];
  int paginas;
  float preco;
} revista;

int main(void) {
  /*
    1-) A primeira é a declaração do tipo struct realizada da mesma forma que
    declaramos variáveis de outros tipos quaisquer:
  */
  struct livro x;

  strcpy(x.autor, "Kaio"); // Não se preocupe, no arquivo 3inicializando_struct.c, será explicado essa instrução
  printf("%s\n", x.autor);

  // 2-)
  livro1.paginas = 5;
  printf("%d\n", livro1.paginas);

  // 3-)
  revista.preco = 12.50;
  printf("%.2f", revista.preco);

  return 0;
}