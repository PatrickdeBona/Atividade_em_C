/*
54) Escrever um programa em C que leia as notas: 0.0 A 10.0 de 5 turmas com 30 alunos cada turma.
Mostre a média das notas por turma no final do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#define LINHAS 30
#define COLUNAS 5
int main(void) {
  float notas[LINHAS][COLUNAS];
  int i,j;
  float med;
  for(j = 0; j<COLUNAS; j++){
    for(i = 0;i <LINHAS; i++){
      printf("Nota do Aluno %i Turma %i: \n",i + 1,j + 1);
      scanf("%f", &notas[i][j]);
      if(notas[i][j] > 10.0 || notas[i][j] < 0.0){
        printf("[Nota invalida!]\nDigite Novamente!\n");
        notas[i][j] = 0;
        printf("Nota do Aluno %i Turma %i: \n",i + 1,j + 1);
      scanf("%f", &notas[i][j]);
      }
    }
  }
  for(j = 0; j<COLUNAS; j++){
    med=0;
    printf("NOTAS DA TURMA [%i]\n", j + 1);
    for(i = 0;i <LINHAS; i++){
      printf("Aluno %i: %.1f\n", i + 1, notas[i][j]);
      med = med + notas[i][j];
    }
    printf("Media da turma! %.1f\n", med / LINHAS);
  }
  return 0;
}