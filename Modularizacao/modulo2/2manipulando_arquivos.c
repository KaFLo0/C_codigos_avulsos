#include <stdio.h>

/*
  As funções de manipulação de arquivos, assim como os ponteiros, devem ser
  declaradas juntamente com a declaração de variáveis. Sendo assim, vamos
  entender melhor a definição de ponteiros para arquivos conforme
  a sintaxe na main.
*/

/*
  fgetc:
    Responsável pela leitura de um caractere de um arquivo indicado pelo ponteiro file_pointer.
    No caso de chegar ao fim do arquivo, será retornado EOF.
    Sintaxe:
      [caractere] = fgetc (file_pointer);

  fputc:
    Responsável pela inserção de um caractere no arquivo. A função escreve o caractere na próxima
    posição do arquivo apontado pelo file_pointer. É a operação inversa de getc.
    Sintaxe:
      fputc (caractere, file_pointer);

  ungetc:
    Responsável em "devolver" o último caractere lido do arquivo. A função devolverá o caractere
    dado para o arquivo apontado pelo file_pointer. Apenas um caractere devolvido será aceito
    (coloca em um buffer temporário de um caractere) por cada arquivo.
    Sintaxe:
      ungetc (caractere, file_pointer);

  fprintf:
    Responsável pela saída formatada em arquivos. É equivalente à função printf, mas com a diferença
    de que esta atua sobre arquivos, os quais são descritos através do primeiro parâmetro,
    que é um ponteiro para o arquivo sobre o qual se deseja escrever.
    Sintaxe:
      fprintf (file_pointer,"controle", arg1, arg2,...);

  fscanf:
    Responsável pela entrada formatada a partir de arquivos. Atua como a função inversa de fprintf
    e análoga à função scanf, só que atuando sobre arquivos.
    Sintaxe:
      fscanf (file_pointer,"controle",arg1,arg2,...);

  fclose:
    Responsável pelo fechamento do arquivo em uso.
    Sintaxe:
      fclose (file_pointer);

  Outras funções:
    fflush() -> Descarrega o buffer.
    fgets() -> Obtém uma string do arquivo.
    fputs() -> Insere uma string no arquivo.
    fread() -> Lê um bloco de dados do arquivo.
    fwrite() -> Escreve um bloco de dados no arquivo.
    fseek() -> Reposiciona o ponteiro para o arquivo.
    rewind() -> Reposiciona o ponteiro para o início do arquivo.
    ftell() -> Retorna a posição do ponteiro.
*/

int main(void) {
  // − FILE: Tipo de dado definido no stdio.h.
  // − *arquivo: Ponteiro para o arquivo que será manipulado no programa.
  FILE *arquivo;

  // FILE *fopen(const char <*nome_arquivo>, const char <*modo>);
  /*
    <*nome_arquivo> é o nome do arquivo aberto.
    <modo> pode conter um dos seguintes valores:
      "r" − Leitura (open).
      "w" − Escrita (rewrite).
      "a" − Adição (append).
      "r+" − Para atualizar um arquivo (read e write).
      "w+" − Para criar um arquivo para atualização.
      "a+" − Adição, em arquivo para leitura e escrita.
  */

  arquivo = fopen("arquivo.txt", "a");
  if(arquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  fprintf(arquivo, "\nForçando o descarregamento do buffer.");

  fflush(arquivo);
  fclose(arquivo);

  printf("Dados gravados no arquivo com sucesso.\n");

  return 0;
}