#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 3
#define MIN 1
#define MAX 9
//Prototipos
void PreencrerMatriz(int Matriz[L][C]);
void ExibirMatriz(int Matriz[L][C]);

//Funcoes:
void PreencherMatriz(int Matriz[L][C]){
    int i, j;
    for(i = 0; i < L; i++){
        for(j= 0; j < L; j++)
        //Valor Sorteado = [MIN, MAX]
        //Valor Sorteado = RAND() % + (max - min + 1) + min
        Matriz[i][j] = rand() % (MAX - MIN + 1) + MIN;
    }
}
void ExibirMatriz(int Matriz[L][C]){
    int i, j;
    printf("MATRIZ[%i][%i]: \n", L, C);
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("\t%i",Matriz[i][j]);
        }
        printf("\n");
    }
}
int main(void) {
    int Matriz[L][C], cont = 1, Opcao;
    do{
        printf("MENU:\n");
        printf("OPCAO 1: PREENCHER / EXIBIR MATRIZ: \n");
        printf("OPCAO 0: SAIR.\n");
        printf("SUA OPCAO: \n");
        scanf("%i", &Opcao);
        if(Opcao){
            printf("MATRIZ %i: \n", cont);
            PreencherMatriz(Matriz);
            ExibirMatriz(Matriz);
            cont++;
        }
    }while(Opcao);
    return 0;
}