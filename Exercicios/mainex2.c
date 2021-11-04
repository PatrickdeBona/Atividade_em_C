/*
50) Escrever um programa em C que crie uma Matriz Diagonal de inteiros de ordem 4 x 4 com valores lidos
do usuário e exiba a média dos elementos pertencentes a diagonal.
*/
#include <stdio.h>
#define X 4
#define Y 4

int main(void) {
  int m[X][Y], y, x;
  float med=0;
  for(x = 0;x < 4; x++){
    for(y = 0; y < 4; y++){
      printf("Digite um valor inteiro para a linha %i coluna %i: \n",x,y);
      scanf("%i", &m[x][y]);
    }
  }
}