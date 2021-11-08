#include <stdio.h>
#include <stdlib.h>
#define T 5
int main(void) {
  int matriz[T][T];
  int i, j;
  float med;

  for(i = 0; i < T; i++){
    for(j = 0; j < T; j++){
      if (i <= j){
        printf("Digite um valor inteiro para a linha %i coluna %i:\n",i, j);
        scanf("%i", &matriz[i][j]);
      }
      else
        matriz[i][j] = 0;
    }
  }