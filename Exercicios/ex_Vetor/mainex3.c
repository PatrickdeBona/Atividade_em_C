/*
Escrever para cada item abaixo um programa em C que preencha um vetor (TAMANHO: 100) de
caracteres. Após isso, faça:

21) Exibir na tela quantas vezes aparece no vetor o caractere: '@'.

*/
#include <stdio.h>
#define TAM 100

int main(void) {
  char MSG[TAM];
  char Letra = '@';
  int i = 0;
  int cont = 0;

  // Leitor de Mensagem
  printf("Digite sua mensagem...\n");
  scanf("\n%[^\n]",MSG);

  while (MSG[i] != '\0'){
    if(MSG[i] == Letra){
      cont++;
     
    }
     i++;
  }
  printf("Quantidade de [@]: %i",cont);


  return 0;
}