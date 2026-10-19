#include <stdio.h>

void preencher(int mat[4][4]){
    int i,j;
    for(j = 0; j < 4; j++){
        for(i = 0; i < 4; i++){
            printf("informe o elemento: [%d][%d] = ",j,i);
            scanf("%d",&mat[i][j]);
        }
    }
}

int soma(int mat[4][4]){
    int i,j,soma = 0;
    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 4; j++){
           soma += mat[i][j];
        }
    }
    return soma;
}

int main(){
    int mat[4][4],somatotal;

    printf("preencha a matriz. \n");
    preencher(mat);

    somatotal = soma(mat);
    printf(" a soma dos elementos acima da diagonal principal: %d \n",somatotal);

    return 0;

}
