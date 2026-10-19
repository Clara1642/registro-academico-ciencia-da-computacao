#include <stdio.h>
#define l 2
#define c 4
void preencher(int mat[l][c]){
    int i,j;
    for(i = 0; i < c; i++){
        for(j = 0; j < l; j++){
            printf("informe a Qtd do produto [%d] no armazem [%d]: ",i,j);
            scanf("%d",&mat[j][i]);
        }
    }

}

void calcularQntT(int mat[l][c], int totalPorArmazem[]){
    int i,j;
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            totalPorArmazem[i]+= mat[i][j];
        }
    }
}
void calcularTotal(int mat[l][c], int totalPorProduto[]){
    int i,j;
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            totalPorProduto[j]+= mat[i][j];
        }
    }
}

int main(){
    int mat[l][c], totalPA[l] = {0},totalPP[c] = {0};
    int i,j;

    printf("matriz \n");
    preencher(mat);

    calcularQntT(mat,totalPA);
    for(i = 0; i < l; i++){
        printf("o total do armazem %d: %d \n",i,totalPA[i]);
    }

    calcularTotal(mat,totalPP);
    for(j = 0; j < c; j++){
        printf("o total do produto %d: %d \n",j,totalPP[j]);
    }

    return 0;
}
