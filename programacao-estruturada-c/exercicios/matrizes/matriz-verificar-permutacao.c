#include <stdio.h>

void preencher(int mat[4][4]){
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("informe o elemento: [%d][%d] = ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

int verifica(int mat[4][4]){
    int i,j,cont1 = 0,cont2 = 0,permutacao = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(mat[i][j] == 0 ){
                cont1++;
            }
            if(mat[i][j] == 1){
                cont2++;
            }

        }
    }
    if(cont1 == 12 && cont2 == 4){
        permutacao = 1;
    }
    return permutacao;
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
int main(){
    int mat[4][4],valor;

    printf("preencha a matriz. \n");
    preencher(mat);
    printf("matriz preenchida. \n");

    valor = verifica(mat);
    if(valor == 1){
        printf("e uma matriz de permutacao. \n");
    }
    else{
        printf("nao e uma matriz de permutacao. \n");
    }
    exibir(mat);

    return 0;

}
