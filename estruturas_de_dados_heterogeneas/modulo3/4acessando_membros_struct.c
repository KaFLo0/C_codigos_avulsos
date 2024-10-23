#include <stdio.h>

/*
  Para acessar os membros de uma estrutura de dados struct, podem ser utilizados dois tipos de operadores:
    - Operador de membro de estrutura . (operador de ponto ou de seleção direta).
    - Operador de ponteiro de estrutura -> (operador de seta).
*/
struct endereco {
  char rua[50];
  char numero[5];
  char CEP[10];
  char bairro[30];
};

int main(void) {
  struct endereco x = {"Av. das Americas", "4200", "22640-102", "Barra da Tijuca"};
  /*
    Quando é declarada uma variável do tipo estrutura, acessamos um membro da estrutura usando o operador ponto,
    indicando o nome da estrutura, seguido por um ponto e pelo nome do campo que se quer acessar. Neste caso,
    dizemos que a estrutura é diretamente referenciada.

    Por exemplo, podemos acessar e visualizar o campo rua da estrutura x, que é uma variável da struct endereço,)
    usando a seguinte declaração:
  */
  printf("%s\n", x.rua);

  /*
    Quando a struct for referenciada através de ponteiros, o emprego é semelhante ao operador ponto, sendo este substituído pelo operador seta (->).

    Por exemplo, suponha que um ponteiro xptr tenha sido declarado e aponte para a estrutura endereco,
    e que o endereço de uma estrutura x tenha sido atribuído ao ponteiro xprt. Para acessar o membro rua da
    estrutura endereco via operador de ponteiro, usamos a declaração a seguir:
  */
  struct endereco *xptr = &x;
  printf("%s", xptr->rua);

  return 0;
}