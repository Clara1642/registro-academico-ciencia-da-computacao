#include <stdio.h>
#define l 3
#define c 3
void preencher(int mat[l][c]){
    int i,j;
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("informe o elemento: [%d][%d] = \n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

int qMAGICO(int mat[l][c]){
    int i,j,vet[4] = {0},retorno = 0;

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            if(i == 0){
                vet[0] += mat[i][j];
            }
            if(j == 0){
                vet[1] += mat[i][j];
            }
            if(i == j){
                vet[2] += mat[i][j];
            }
            if(i + j == l - 1){
                vet[3] += mat[i][j];
            }
        }

        }
      if(vet[0] == vet[1] && vet[0] == vet[2] && vet[0] == vet[3] && vet[1] == vet[2] && vet[1] == vet[3] && vet[2] == vet[3]){
        retorno = 1;
      }
    return retorno;
    }

int main(){
    int mat[l][c],quadradomagico;

    printf("preencher matriz. \n");
    preencher(mat);

    quadradomagico = qMAGICO(mat);
    if(quadradomagico == 1){
        printf("e um quadrado magico. \n");
    }
    else{
        printf("nao e um quadrado magico. \n");
    }

    return 0;
}
