#include <stdio.h>

void preencher(int matA[3][4]){
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("digite o elemento: [%d][%d] = \n",i,j);
            scanf("%d",&matA[i][j]);
        }
    }

}

void calcularTransposta(int matA[3][4], int matB[4][3]){
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            matB[j][i] = matA[i][j];
        }
    }

}

void exibirTransposta(int matB[4][3]){
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int A[3][4], B[4][3];

    printf("matriz A \n");
    preencher(A);

    calcularTransposta(A,B);

    exibirTransposta(B);

    return 0;
}
