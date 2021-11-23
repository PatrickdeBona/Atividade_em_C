#include <stdio.h>
#include <math.h>

int main(void) {
    float A, B, C, DELTA, RAIZ, X1, X2;
    printf("Coeficiente A: \n");
    scanf("%f", &A);
    if (A == 0){
        printf("Isso não é uma equação de 2ºgrau!\n");
    }
    else{
        printf("Coeficiente B: \n");
        scanf("%f", &B);
        printf("Coeficiente C: \n");
        scanf("%f", &C);
        DELTA = pow(B, 2) - 4 * A * C;
        printf("Delta: %.2f\n", DELTA);

        if (DELTA < 0){
            printf("Não existe raizes reais. \n");
        }
        else{
            RAIZ = sqrt(DELTA);
            printf("Raiz de Delta: %.2f\n", RAIZ);
            X1 = (-B + RAIZ) / (2 * A);
            X2 = (-B - RAIZ) / (2 * A);
            printf("X1: %.2f \n", X1);
            printf("X2: %.2f \n", X2);
        }
    }
    return 0;
}