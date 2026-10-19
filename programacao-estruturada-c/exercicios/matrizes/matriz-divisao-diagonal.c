#include <stdio.h>

void preencher(int mat[4][4]){
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("informe o elemento: [%d][%d] =  ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

}

void exibir(int mat[4][4]){
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

}

void dividir(int mat[4][4]){
    int i,j,d0 = mat[0][0],d1 = mat[1][1],d2 = mat[2][2],d3 = mat[3][3];

    if(d0 == 0 || d1 == 0 || d2 == 0 || d3 == 0){
        printf("nao e possivel realizar a divisao: um elemento da diagonal principal e zero. \n");
        return;
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i == 0){
                mat[i][j] = mat[i][j] / d0;
            }
            if(i == 1){
                mat[i][j] = mat[i][j] / d1;
            }
            if(i == 2){
                mat[i][j] = mat[i][j] / d2;
            }
            if(i == 3){
                mat[i][j] = mat[i][j] / d3;
            }
        }
    }

}

int main(){
    int mat[4][4];

    printf("preencher matriz. \n");
    preencher(mat);


    exibir(mat);
    printf("matriz exibida. \n");

    dividir(mat);
    printf("a matriz com o calculo. \n");
    exibir(mat);

    return 0;
}
