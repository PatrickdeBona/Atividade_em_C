/*
43) Faça um algoritmo em C que preencha dois vetores A e B (TAMANHO: 1000) com valores inteiros.
Depois de preencher os vetores, exiba se os vetores são iguais ou diferentes.
*/

#include <stdlib.h>
#define A 1000
#define B 1000

int main(void) {
  int i = 0; 
  int num[A];
  int num1[B];
  for(i = 0; i < B; i++){
  printf("[1º vetor]Digite um numero inteiro: \n");
  scanf("%i", &num[i]);
  printf("[2º vetor]Digite um numero inteiro: \n");
  scanf("%i", &num1[i]);
  }
  for(i = 0; i < B; i++){
    if(num[i] == num1[i]){
      printf("[Vetores iguais] \n");
      printf("Vetores %iA e %iB são iguais\n", i, i);
      printf("\n");
    }
    else{
      printf("[Vetores diferentes] \n");
      printf("Vetores %iA e %iB são diferentes\n",i,i);
      printf("\n");
    }
  }
  return 0;
}