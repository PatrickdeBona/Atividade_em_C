/*
Faça um algoritmo que armazene em dois (2) vetores os dados de um carrinho de compra, sendo:
Quantidade de cada mercadoria do carrinho e o seu respectivo preço (R$). Após isso, exiba na tela:
49) Total a ser pago, dando um desconto de 2% nas mercadorias que custam mais que R$ 15.78.
Considere que o carrinho tenha no MÁXIMO 15 mercadorias diferentes. Use o comando #define

*/

#include <stdio.h>
#include <stdlib.h>
#define MERCADORIA 4
#define COLUNA 3
int main(void) {
  float Carrinho[MERCADORIA][COLUNA];
  float valor;
  int i = 0;
  float tot;
   for(i = 0; i < MERCADORIA; i++){
    printf("[Mercadoria %i]Preço: \n",i+1);
    scanf("%f",&Carrinho[i][0]);
    printf("Quantidade :\n");
    scanf("%f", &Carrinho[i][1]);
  }
  for(i = 0; i < MERCADORIA; i++){
    valor = Carrinho[i][0] * Carrinho[i][1];
    if(valor >= 15.78){
      Carrinho[i][2]= Carrinho[i][0] * Carrinho[i][1] * 0.80;
      printf("Mercadoria %i Recebeu desconto!\n", i+1);
    }
    else{
      Carrinho[i][2]= Carrinho[i][0] * Carrinho[i][1];
    }
  }
    printf("\n");
    printf("[Total a ser Pago por mercadoria]\n");
  for(i = 0; i < MERCADORIA; i++){
    printf("Valor mercadoria %i : R$ %.2f\n", i + 1, Carrinho[i][2]);
    tot = tot + Carrinho[i][2];
  }
     printf("Total da Compra: R$ %.2f", tot);
  return 0;
}