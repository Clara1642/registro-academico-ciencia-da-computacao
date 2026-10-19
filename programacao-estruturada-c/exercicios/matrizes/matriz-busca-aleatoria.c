#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int mat[10][15]){
    int i,j;
    srand(time(NULL));
    for(i = 0; i < 10; i++){
        for(j = 0; j < 15; j++){
            mat[i][j] = 1 + rand() %10;

        }
    }
}

void procurar(int mat[10][15],int matz[10][15], int valor){
    int i,j;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 15; j++){
            if(valor == mat[i][j]){
                matz[i][j] = 1;
            }
        }
    }

}

void exibir(int matz[10][15]){
    int i,j,cont = 0;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 15; j++){
            if(matz[i][j] == 1){
                cont++;
                printf("posicoes onde o valor foi encontrado: (%d,%d) \n",i,j);
            }
        }
    }
    printf("o valor procurado aparece %d vezes na matriz de numeros aleatorios.\n \n",cont);

}

int main(){
    int mat[10][15], matz[10][15] = {0},valor;

    printf("informe o valor que deseja buscar na matriz: \n");
    scanf("%d",&valor);

    preencher(mat);

    procurar(mat,matz,valor);

    exibir(matz);

    return 0;
}
