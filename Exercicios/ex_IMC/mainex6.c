//BACKEND
#include <stdio.h>

//PROTOTIPOS
float Calcular_Imc(float M, float A);
float Calcular_Rcq(float MC, float MQ);

//FUNÇOES
float Calcular_Imc(float M, float A){
  // M MASSA A Altura
  return M / (A * A);
}

float Calcular_Rcq(float mc, float mq){
  //MC MEDIDA DA CINTURA MQ MEDIDA QUADRIL
  // RCQ: RELACAO CINTURA QUADRIL 5
  return mc / mq * 100;
}
int main(void) {
  float  M, A, MC, MQ, IMC, RCQ;
  int Menu = 1;
  do{
    printf("MENU\n");
    printf("Escolha 1: Calcular IMC /  RCQ \n");
    printf("Escolha 0: Sair\n");
    printf("Sua escolha: \n");
    scanf("%i", &Menu);
    if (Menu ==0)
      break;
    else{
      while (1){
      printf("Massa: \n");
      scanf("%f", &M);
      printf("Altura: \n");
      scanf("%f", &A);
      printf("Medida da Cintura: \n");
      scanf("%f", &MC);
      printf("Medida do Quadril: \n");
      scanf("%f", &MQ);
      if(M > 0 && A > 0 && MC > 0 && MQ > 0)
      break;
      else
      printf("Escolha novamente.\n");
    }
    IMC = Calcular_Imc(M, A);
      RCQ = Calcular_Rcq(MC, MQ);
      printf("SEU IMC: %.1f\n", IMC);
      printf("SEU RCQ: %.1f\n", RCQ);
    }
  }while(Menu);

  return 0;
}