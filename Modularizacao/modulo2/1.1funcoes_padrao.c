// Para ter acesso as funções padrões de I/O deve-se fazer a seguinte declaração no início do programa:
#include <stdio.h>

/*
  printf() -> Ela imprime os dados no dispositivo de saída padrão, tela do computador.
  Os mesmos são formatados de acordo com os códigos de formatação, conforme a Tabela:

  *caractere* |                                      *Impresso como*                                                 | *Tipo de argumento*
    d, i      | Número decimal                                                                                       | int
    o         | Número octal sem sinal (sem zero à esquerda)                                                         | int
    x, X      | Número hexadecimal sem sinal (sem um 0x ou 0X à esquerda), usando abcdef ou ABCDEF para 10,…, 15     | int
    U         | Número decimal sem sinal                                                                             | int
    C         | Único caractere                                                                                      | int
    S         | Imprime caracteres da string até um ‘\ o’ ou o número de caracteres dado pela precisão               | char
    F         | [-] m.dddddd, onde o número de d's é dado pela precisão (padrão 6)                                   | double
    e, g      | [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o número de d's é dado pela precisão (padrão 6)       | double
    g, G      | Use % e ou % E se o expoente for menor que = 4 ou maior ou igual à precisão; caso contrário, use %f. | double
    P         | Ponteiro                                                                                             | void *
    %         | Nenhum argumento impresso, imprima um %                                                              |

  Sintaxe: printf(“format_string”), arg1, arg2, ...);
  Onde:
    - format_string: É formado por caracteres ordinários e especificações de formato.
    Os caracteres ordinários são copiados diretamente na saída padrão. A especificação
    de formato é composta pelos seguintes elementos:
     % [flags] [width] [.precision] [size] type

  flags:
    Composto pelos seguintes caracteres:
      "-" → Posicione o valor à esquerda.
      "+" → O valor deve ser precedido do sinal ("+" ou "-").
      " " → Implica na impressão com sinal negativo apenas.
      “0” → Preenche o valor com zeros.

  width:
    Composto pelos seguintes valores:
      <n> → Ao menos <n> caracteres são impressos. Caso o comprimento seja menor que <n>, será completado com brancos.
      O <n> → Caso o comprimento seja menor que <n>, completa com zeros.

  precision:
    Composto pelos seguintes valores:
      .0 → Impressão de float sem ponto decimal.
      . <n> → Limita o número de casas decimais a <n>.

  size:
    Composto pelos seguintes caracteres:
      l → Implica na definição de um modificador LONG.
      h → Implica na definição de um modificador SHORT.

  type:
    Composto pelos seguintes caracteres:
      d → O argumento é dado na forma inteiro decimal.
      o → O argumento é apresentado em octal (inteiro).
      x → O argumento é dado na forma inteiro hexadecimal.
      u → O argumento é considerado decimal inteiro sem sinal.
      c → O argumento é um caractere único.
      s → O argumento é uma cadeia de caracteres (string).
      e → O argumento é dado como float ou double em notação científica (com expoente).
      f → O argumento é dado como float ou double em notação decimal comum (sem expoente).
      g → Usar "E" ou "F", conforme a necessidade.
      p → O argumento é um pointer (TC).
      % → Reproduz o próprio símbolo "%".
*/

int main(void) {
  /*
    Exemplos:

    No comando a seguir, a nota do aluno, que é um valor em ponto flutuante que será exibido com 3 dígitos e 2 casas decimais:
      printf ("\nNota do aluno:%3.2f", nota);

    No comando a seguir, será impressa a variável string como uma cadeia de caracteres, e a variável contador será impressa em hexadecimal:
      printf ("Lista de itens: %s\nContador = %x", string, contador);

    No comando a seguir, as variáveis a, b e c serão impressas como números decimais, alinhadas à esquerda e com 5 dígitos:
      printf ("a: %-5D b: %-5D c: %-5D", a, b, c);
  */


  return 0;
}