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
  printf("MATRIZ[%i][%i]:\n", T, T);
  for(i = 0; i < T; i++){
    for(j = 0; j < T; j++){
      printf("\t%i", matriz[i][j]);
      med = med + matriz[i][j];
    }
    printf("\n");
    
  }
  printf("Media Da Matriz Triangular Superior [%.1f]", med / 15);
  return 0;
}