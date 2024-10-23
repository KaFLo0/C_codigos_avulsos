#include <stdio.h>

/*
  Conforme visualizado no Programa 9, a seguir, na linha 5 foram declaradas na
  função principal main()três variáveis locais: num1, num2 e num3, isto é,
  essas três variáveis pertencem à função principal main() e seu escopo está
  relacionado à execução da função.
*/

/*
  Qualquer valor que as variáveis num1, num2 e num3 assumam será válido apenas
  dentro da função main. Supondo que existisse uma sub-rotina nesse programa,
  essas variáveis não poderiam ser acessadas.
*/
int main() {
  int num1, num2, num3;
  num1 = 10;
  num2 = 20;
  num3 = num1 + num2;
  printf("%d + %d = %d", num1, num2, num3);

  return(0);
}