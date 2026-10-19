#include <stdio.h>
#define tam 10

void preencher(char vet[tam]);
int calcular(char gabarito[tam],char respostas[tam]);

int main(){
    int c;
    char gabarito[tam];
    char respostas[tam];

    printf("preencha o gabarito. \n");
    preencher(gabarito);
    printf("preencha a respostas. \n");
    preencher(respostas);

    c = calcular(gabarito,respostas);
    printf("os acertos foram: %d \n",c);

    return 0;
}

int calcular(char gabarito[tam],char respostas[tam]){
    int i;
    int soma;
    soma = 0;
    for(i = 0; i < tam ;i++){
        if(gabarito[i] == respostas[i]){
            soma = soma + 1;
        }
    }
    return soma;
}

void preencher(char vet[tam]){
    int i;
    for(i = 0;i < tam; i++){
        printf("informe as respostas: \n");
        scanf(" %c",&vet[i]);
    }
}
