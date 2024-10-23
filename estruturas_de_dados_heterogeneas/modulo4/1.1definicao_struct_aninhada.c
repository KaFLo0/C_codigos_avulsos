#include <stdio.h>

/*
  Apenas para relembrar, sabemos que a declaração de estrutura declara um tipo struct.
  E cada tipo struct recebe um nome (ou tag) que se refere àquele tipo pelo nome
  precedido pela palavra struct. Cada unidade de dados na estrutura é chamada membro
  e possui um nome de membro. Os membros de uma estrutura podem ser de qualquer tipo.
  Sendo assim, os membros de estruturas podem ser também outras estruturas.
*/

/* As estruturas aninhadas podem ser declaradas de duas formas. */

/*
  A primeira forma é colocar uma estrutura dentro de outra, literalmente.
  Portanto, a sintaxe para trabalhar com estruturas aninhadas nessa forma é:
*/
typedef struct {
  int membro_1;
  int membro_2;
  float membro_n; // n = último (em termos matemáticos)
  struct {
    int membro_interno_1;
    int membro_interno_2;
    float membro_interno_n;
  };
} Nome_estrutura;

Nome_estrutura NE; // NE = Abreviação para Nome_estrutura

int main(void) {
  /*
    E para acessar os membros, o acesso é direto e a sintaxe é:
  */
  //Para atribuir valores:
  NE.membro_interno_1 = 0;
  NE.membro_1 = 0;

  //Para leitura do teclado:
  printf("Valor para o membro interno 2: ");
  scanf("%d%*c", &NE.membro_interno_2);
  printf("Valor para o membro 2: ");
  scanf("%d%*c", &NE.membro_2);

  //Para impressão:
  printf("Membro interno 2: %d\n", NE.membro_interno_2);
  printf("Membro 2: %d", NE.membro_2);

  return 0;
}
