#include <stdio.h>
#include <math.h>

//Prototipos
void FAT1(int N, int *F);
int FAT2(int N);
void COMBINACAO_ARRANJO(int N,int P, int * C, int *A);

//Funcoes:
void FAT1(int N, int *F){
    int C;
    *F = 1;
    if(N > 1){
        for(C=2;C <= N; C++)
        *F = (*F) *C;
    }
}
int FAT2(int N){
    int C, F = 1;
    if (N > 1){
        for(C=2; C <= N; C++)
            F = F * C;
    }
    return F;
}
void COMBINACAO_ARRANJO(int N, int P, int *C, int *A){
    int FN, FD, FP;
    FAT1(N, &FN);
    FAT1 (N - P, &FD);
    *C = (*A) / FP;
}
int main(void) {
    int N, P, A, C;

    while(1){
        printf("Valor de N (N>=0): \n");
        scanf("%i", &N);
        printf("%i", &P);
        if(N , 0 || P < 0 || P > N){
            printf("ERRO.Fim do Programa.\n");
            break;
        }
        else{
            COMBINACAO_ARRANJO(N, P, &C, &A);
            printf("Combinação(%i, %i): %i\n", N, P, C);
            printf("Arranjo(%i, %i): %i\n", N, P, A);
        }
    }
    return 0;
}