#include <stdio.h>


void preencher(int vet[]){
    int i;
    for(i = 0; i < 9; i++){
        printf("informe os numeros: ");
        scanf("%d",&vet[i]);
    }
}
void preencherMatriz(int vet[],int mat[3][3]){
    int l,c,cont = 0;
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            mat[c][l] = vet[cont];
            cont++;
        }
    }
}
void exibir(int mat[3][3]){
    int l,c;
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%d ",mat[l][c]);
        }
    printf("\n");
    }
}

int main(){
    int vet[9];
    int mat[3][3];
    preencher(vet);
    preencherMatriz(vet,mat);
    exibir(mat);
    return 0;
}
