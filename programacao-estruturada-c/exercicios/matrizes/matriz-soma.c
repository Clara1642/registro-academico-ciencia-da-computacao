#include <stdio.h>

void preecher(float mat[3][4]){
    int i,j;
    for(i = 0; i < 3; i ++){
        for(j = 0; j < 4; j ++){
            printf("digite o valor do elemento: [%d][%d] = \n",i,j);
            scanf("%f",&mat[i][j]);

        }
    }

}

void somaMatrizes(float A[3][4], float B[3][4], float C[3][4]){
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            C[i][j]= A[i][j] + B[i][j];
        }
    }
}

void exibir(float mat[3][4]){
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%f ",mat[i][j]);
        }
        printf("\n");
    }
}


int main(){
    float A[3][4], B[3][4], C [3][4];

    printf("preencha a matriz A: \n");
    preecher(A);


    printf("preencha a matriz B: \n");
    preecher(B);


    printf("matriz A: \n");
    exibir(A);

    printf("matriz B: \n");
    exibir(B);


    somaMatrizes(A,B,C);

    printf("matriz C: \n");
    exibir(C);


    return 0;
}
