#include <stdio.h>
#include <stdlib.h>

void proc1(float media);
void proc2(float valor1,float valor2);

int main(){
    float nota1,nota2,qnt,i;

    printf("informe a quantidade de pessoas: \n");
    scanf("%f",&qnt);

    for(i = 1; i <= qnt;i++){
        printf("informe a sua primeira nota: \n");
        scanf("%f",&nota1);
        printf("informe a sua segunda nota: \n");
        scanf("%f",&nota2);


    while(nota1 <= 0.0 || nota2 >= 10.00){
        printf("informe uma nota valida");
        printf("informe a sua primeira nota: \n");
        scanf("%f",&nota1);
        printf("informe a sua segunda nota: \n");
        scanf("%f",&nota2);
        }
        proc2(nota1,nota2);
    }
    return 0;
}
void proc1(float media){

    if(media >= 0.0 && media < 5.0){
       printf("D \n");
    }
    if(media >= 5.0 && media < 7.0){
       printf("C \n");
    }
    if(media >= 7.0 && media < 9.0){
       printf("B \n");
    }
    if(media >= 9.0 && media <= 10.0){
       printf("A \n");
    }

}
void proc2(float valor1,float valor2){

    float media;

    media = (valor1 + valor2) / 2.00;
    printf("a sua media foi %.2f e seu conceito foi ",media);
    proc1(media);

}
