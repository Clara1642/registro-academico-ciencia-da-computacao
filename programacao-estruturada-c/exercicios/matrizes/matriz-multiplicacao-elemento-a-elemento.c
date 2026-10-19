#include <stdio.h>

void preencher(float matA[5][5]){
    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("informe o elemento: [%d][%d] =  ",i,j);
            scanf("%f",&matA[i][j]);
        }
    }
}

void calcular(float matA[5][5],float matB[5][5],float matC[5][5]){
    int i,j;
    for(i = 0; i < 5; i ++){
        for(j = 0; j < 5; j++){
          matC[i][j] = matA[i][j] * matB[i][j];
        }
    }
}
void exibir(float matC[5][5]){
    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%.2f ",matC[i][j]);
        }
        printf("\n");
    }
}

int main(){
    float A[5][5],B[5][5],C[5][5];

    printf("matriz A. \n");
    preencher(A);
    printf("matriz B. \n");
    preencher(B);

    calcular(A,B,C);
    exibir(C);

    return 0;
}
