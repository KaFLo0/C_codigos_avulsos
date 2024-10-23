#include <stdio.h>

int main(void) {
  int *ponteiro; // Operador unário “*” de indireção ‒ É usado para fazer a deferência.
  int x = 5;

  ponteiro = &x; // Operador unário “&” ou ponteiro constante ‒ Tem a função de obter o endereço de memória de uma variável.

  /*
    Podemos observar que o conteúdo da variável “x” foi alterado de forma indireta, ou seja, 
      não foi feita referência ao nome da variável “x”. Neste caso, o ponteiro é chamado de 
      ponteiro variável, pois assim é possível armazenar qualquer endereço.
  */
  *ponteiro = 50;

  printf("%d\n", *ponteiro); // Conseguiiii, para acessar o conteúdo do ponteiro é só usar o '*'
  printf("%p\n", &ponteiro); // "%p" é usado para imprimir ponteiros/endereços
  printf("%p\n", ponteiro);
  printf("%p", &x);

  return 0;
}