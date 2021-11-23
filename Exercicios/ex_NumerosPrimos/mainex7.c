//BACKEND
#include <stdio.h>
#include <math.h>

//PROTÓTIPO
int primo(int n);

//FUNÇÃO
int Primo (int n){
  int Contador;
  if (n <= 3)
    return 1;
    for(Contador = 2; Contador <= ceil(sqrt(n)); Contador++){
      if(n % Contador ==0)
        return 0;
    }
    return 1;
}


// FRONTEND
int main(void) {
  int Contador, n;
  printf("Valor de N (N>= 1)");
  scanf("%i", &n);
  if(n <= 0)
  printf("Erro na Digitação.\n");
  else{
    printf("Numeros primos entre [1, %i] são: \n", n);
    for(Contador = 1; Contador <= n; Contador++){
      if(Primo(Contador))
      printf("Numero Primo: %i\n", Contador);
    }
  }



  return 0;
}