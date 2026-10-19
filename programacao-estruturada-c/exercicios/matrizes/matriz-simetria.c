#include <stdio.h>

void preencher(int mat[5][5]){

    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("informe o valor do elemento: [%d][%d] = \n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

int simetria(int mat[5][5]){
    int i,j,retorno = 0,cont = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(mat[i][j] == mat[j][i]){
                cont++;
            }
        }
    }
    if(cont == 25){
        retorno = 1;
    }

    return retorno;
}

int main(){
    int A[5][5],SouNS;

    printf("matriz A \n");
    preencher(A);

    SouNS = simetria(A);
    if(SouNS == 1){
        printf("e simetrica. \n");
    }
    else{
        printf("nao e simetrica. \n");
    }

    return 0;
}
