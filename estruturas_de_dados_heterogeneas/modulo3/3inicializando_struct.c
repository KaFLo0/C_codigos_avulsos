#include <stdio.h>
#include <string.h>

/*
  Uma das maneiras de inicializar uma struct é através de uma lista de inicialização, como um array.
  Agora, se o número de inicializadores na lista for menor que os membros na estrutura,
  os membros restantes serão automaticamente inicializados em zero ou Null, se o membro for um ponteiro.
*/
struct endereco {
  char rua[50];
  char numero[5];
  char CEP[10];
  char bairro[30];
};

int main(void) {
  /*
    Podemos inicializar a estrutura endereço usando a declaração a seguir.
    Observe que os elementos do array são passados aos membros da estrutura
    na ordem em que foram declarados.
  */
  struct endereco x = {"Av. das Americas", "4200", "22640-102", "Barra da Tijuca"};
  printf("%s\n", x.rua);

  // Outra forma é atribuindo uma variável estrutura do mesmo tipo, já inicializada.

  /*
    Por último, atribuindo valores aos membros individuais da estrutura. Por exemplo,
    suponha que desejamos atribuir o valor “Av. das Américas” ao membro rua da estrutura endereco.

    Podemos usar a declaração a seguir, referenciando o nome da variável estrutura,
    seguida por um ponto e pelo nome do membro (campo) que receberá a atribuição do dado.
  */
  strcpy(x.rua, "Av. Marechal Teodoro");
  /*
    Para atribuir um valor a uma string, é necessário utilizar a função strcpy (CPY = copiar; STR = string).
    A função copiará o que está dentro das aspas duplas para o campo STRING da estrutura.
  */
  printf("%s", x.rua);

  return 0;
}