#include <stdio.h>

void preencher( float vet[]){
    int i;
    for(i = 0; i  < 5; i++){
        printf("informe os valores: \n");
        scanf("%f",&vet[i]);
    }
}

float media(float vet[]){
    int i;
    float media,soma = 0;
    for(i = 0; i < 5; i++){
        soma = soma + vet[i];
    }
    media = soma / 5;
    return media;
}

float menornumero(float vet[]){
    int i;
    float menor = vet[0];
    for(i = 0; i < 5; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    return menor;
}

float maiornumero(float vet[]){
    int i;
    float maior = vet[0];
    for(i = 0; i < 5; i ++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return  maior;
}

float buscarposicao(float vet[],float valor){
    int i;
    float posicao = -1;
    for(i = 0; i < 5; i++){
        if(vet[i] == valor){
            posicao = i;
        }
    }
    return posicao;
}

int main(){
    float vet[5];
    float a,b,c;
    float valor,d;

    preencher(vet);
    printf("os valores foram preenchidos. \n");

    c = media(vet);
    printf("o resultado da media: %2.f \n",c);

    a = menornumero(vet);
    printf("o menor numero encontrado foi: %2.f \n",a);

    b = maiornumero(vet);
    printf("o maior numero encontrado foi: %2.f \n",b);

    printf("informe o valor que deseja buscar: \n");
    scanf("%f",&valor);

    d = buscarposicao(vet,valor);
    printf("o valor da posicao encontrada foi: %2.f \n",d);

    return 0;
}
