#include <stdio.h>
int busca(int *vet,int n,int valor){
    int i;
    int encontrou = 0;
    for(i = 0;i < n;i++){
        if(vet[i] == valor){
            encontrou = 1;
            break;
        }
    }

    return encontrou;
}

int main(){
    int vet[10];
    int i,cont = 0,retorna1,valor1;
    for(i = 0; i < 10;i++){
        printf("informe os 10 valores inteiros: \n");
        scanf("%d",&vet[i]);
        cont = cont + 1;
    }
    printf("qual valor deseja buscar: \n");
    scanf("%d",&valor1);

    retorna1 = busca(vet,cont,valor1);
    if(retorna1 == 1){
    printf("o valor informado esta no vetor \n");
    }
    else{
        printf("o valor informado nao esta no vetor. \n");
    }
    return 0;
}
