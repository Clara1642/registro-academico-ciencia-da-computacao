#include <stdio.h>
#define tam 5
void preencher(float vet[]){
    int i;
    for(i = 0;i < tam;i++){
        printf("informe a quantidade de chuva de cada dia durante um mes: \n");
        scanf("%f",&vet[i]);
    }
}
float calculomediadiaria(float vet[]){
    int i;
    float media,soma = 0;
    for(i = 0;i < tam;i++){
        soma = soma + vet[i];
    }
    media = soma / tam;
    return media;
}
float diasquemaischoveu(float vet[],float a){
    int i;
    int choveumais = 0;
    for(i = 0; i < tam;i++){
        if(vet[i] > a){
            choveumais++;
        }
    }
    return choveumais;
}
float menorqntchuva(float vet[]){
    int i;
    float menoschuva = vet[0];
    for(i = 0; i < tam;i++){
        if(vet[i] < menoschuva){
            menoschuva = vet[i];
        }
    }
    return menoschuva;
}
float maiorqntchuva(float vet[]){
    int i;
    float maiorchuva = vet[0];
    for(i = 0;i < tam;i++){
        if(vet[i] > maiorchuva){
            maiorchuva = vet[i];
        }
    }
    return maiorchuva;
}
int main(){
    float vetor[30];
    float a,b,c,d;

    printf("preenchendo vetor. \n");
    preencher(vetor);

    a = calculomediadiaria(vetor);
    printf("resultado da media diaria: %.2f \n ",a);

    b = diasquemaischoveu(vetor,a);
    printf("dias que choveu mais que a media: %.2f \n",b);

    c = menorqntchuva(vetor);
    printf("resultado da menor qnt de chuva diaria: %.2f \n",c);

    d = maiorqntchuva(vetor);
    printf("resultado da maior qnt de chuva do diaria: %.2f \n",d);
    return 0;
}
