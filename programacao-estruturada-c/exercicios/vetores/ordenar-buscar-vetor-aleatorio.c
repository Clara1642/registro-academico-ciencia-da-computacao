#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificarepetido(int vet[100], int preenchidos, int n) {

    int i;
    int rep = 0;

    for (i = 0; i < preenchidos; i++) {
        if (vet[i] == n) {
            rep = 1;
            break;
        }
    }

    return rep;
}

void preencherVetor(int vet[100]) {

    int i, num;

    srand(time(NULL));
    for (i = 0; i < 100; i++) {
        num = (rand() % 10000) + 1;
        while (verificarepetido(vet, i, num) == 1) {
            num = (rand() % 10000) + 1;
        }
        vet[i] = num;

    }
}
void ordernarVetor(int vet[100]){
    int i,fim = 98,pos = 0;
    int chave,troca;
    do{
        troca = 0;
        for(i = 0; i <= fim; i++){
            if(vet[i] < vet[i + 1]){
                chave = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = chave;
                pos = i;
                troca = 1;
            }
        }
        fim = pos - 1;
    }while(troca == 1);
}

int buscarValor(int vet[100], int valor){
    int i, achou = 0;
    for(i = 0; i < 100; i++){
        if(vet[i] == valor){
            achou = 1;
            break;
        }
        else if(vet[i] < valor){
            break;
        }
    }
    if(achou == 1){
        return i;
    }
    else{
        return - 1;
    }
}

void exibir(int vet[100]){
    int i;
    for(i = 0; i < 100; i++){
        printf("%d \n",vet[i]);
    }
}

int main(){
    int vet[100], valor,resultBusca;
    preencherVetor(vet);
    printf("vetor nao ordernado: \n");
    exibir(vet);
    ordernarVetor(vet);
    printf("vetor ordernado: \n");
    exibir(vet);
    printf("informe o valor que deseja buscar: \n");
    scanf("%d",&valor);
    resultBusca = buscarValor(vet,valor);
    if(resultBusca != -1){
        printf(" a posicao do valor digitado eh: %d \n",resultBusca);
    }
    else{
        printf("o valor informado nao esta no vetor. \n");
    }

    return 0;
}
