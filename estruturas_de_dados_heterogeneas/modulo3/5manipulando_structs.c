#include <stdio.h>
#include <stdlib.h>

struct aluno {
  int v_nmat; // Número da matricula
  float v_nota[3]; // Notas
  float v_media; // Média
};

// Para imprimir todas as informações do aluno
void ImprimirAluno(struct aluno aluno1) {
  printf("%d\n", aluno1.v_nmat); 
  printf("%.2f\n", aluno1.v_media); 
}

int main(void) {
  struct aluno Kaio; // Declara uma variável do tipo struct
  Kaio.v_nmat = 120;
  Kaio.v_nota[0] = 8.5;
  Kaio.v_nota[1] = 7.2;
  Kaio.v_nota[2] = 5.4;
  Kaio.v_media = (Kaio.v_nota[0] + Kaio.v_nota[1] + Kaio.v_nota[2]) / 3.0;

  printf("Matricula: %d\n", Kaio.v_nmat);
  printf("Media: %.2f\n", Kaio.v_media);

  ImprimirAluno(Kaio);

  return 0;
}