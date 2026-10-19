#include <stdio.h>

void preencher(float vet[]){
    int i;
    for(i = 0; i < 5; i++){
        printf("informe as temperaturas: \n");
        scanf("%f",&vet[i]);
    }
}

float mediatemp(float vet[]){
    int i;
    float media, soma = 0;
    for(i = 0; i < 5; i++){
        soma = soma + vet[i];
    }
    media = soma / 5;
    return media;
}

float maiortemp(float vet[]){
    int i;
    float maior = vet[0];
    for(i = 0; i < 5; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

float menortemp(float vet[]){
    int i;
    float menor = vet[0];
    for(i = 0; i < 5; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    return menor;
}

int main(){
    float vet[5];
    float a,b,c;

    preencher(vet);
    printf("vetor preenchido. \n");

    a = mediatemp(vet);
    printf("o resultado da media: %1.f \n",a);

    b = maiortemp(vet);
    printf("a maior temperatura: %1.f \n",b);

    c = menortemp(vet);
    printf("a menor temperatura: %1.f \n",c);

    return 0;

}
