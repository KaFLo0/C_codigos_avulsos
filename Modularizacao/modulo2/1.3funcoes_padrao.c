#include <stdio.h>

/*
  scanf() -> Ela lê os dados do dispositivo de entrada padrão (teclado do computador),
  que são formatados de acordo com os códigos de formatação conforme a Tabela.

  **caractere* |                             *Impresso como*                                | *Tipo de argumento*
  d            | Número inteiro decimal                                                     | int *              
  i            | Inteiro                                                                    | int *              
  o            | Octal inteiro                                                              | int *              
  U            | Inteiro decimal sem sinal                                                  | unsigned int*      
  x            | Número inteiro hexadecimal                                                 | int *              
  c            | Caracteres                                                                 | char *             
  s            | Cadeia de caracteres (string)                                              | char *             
  e, f, g      | Número de ponto flutuante com o ponto decimal opcional e expoente opcional | double             
  %            | % Literal                                                                  |                    

  Sintaxe: scanf ("format_string", arg1, arg2, arg3, ...);
  Onde:
    format_string: Opera de forma semelhante ao printf, entretanto,
      agora serão apresentadas as formatações para a entrada de dados que serão lidos pelo teclado.
    arg1, arg2, arg3, ... (argumentos): São apontadores para a área de armazenamento, ou seja,
      ponteiros para variáveis (fornecem o endereço da variável, exceto para arrays),
      sendo obrigatório o primeiro argumento. Se o programador invocar a função scanf
      sem argumentos (scanf()), uma mensagem de erro é emitida: too few arguments to function 'scanf'.
*/

int main(void) {
  /*
    Exemplos:

    A função scanf a seguir irá ler os dados digitados no teclado e armazenará na variável salario como tipo float:
      scanf(“%f”, &salario);

    Agora, a função scanf irá armazenar os dados digitados no teclado como inteiro na variável número:
      scanf("%i", &numero);
  */

  return 0;
}