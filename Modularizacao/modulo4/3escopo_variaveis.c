#include <stdio.h>

// Variável global
int num3;

// Função soma
int soma(int x, int y){
  int v_soma;
  v_soma = x + y;
  return(v_soma);
}

/*
  Nesse exemplo, podemos observar ainda sobre variáveis globais: Repare que na
  linha 4 foi definida a variável global num3. Agora considere que também
  tenha sido declarada uma variável global num1. Como visto anteriormente,
  como também há a num1 na função main, a que será manipulada dentro da função
  main é a variável local declarada na linha 23, portanto, assumindo o valor 10.

  E o que aconteceria se na função soma fosse utilizada a variável num1?
  Qual das duas variáveis num1 seria acessada? Claro que seria a variável
  global num1, que tem escopo em qualquer parte do programa.
*/
int main () {
  int num1, num2;
  num1 = 10;
  num2 = 20;
  num3=soma(num1, num2);
  printf("%d + %d = %d", num1, num2, num3);

  return 0;
}