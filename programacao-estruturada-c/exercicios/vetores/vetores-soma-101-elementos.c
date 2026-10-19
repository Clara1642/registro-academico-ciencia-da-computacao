#include <stdio.h>
#define tam 101
void preencha(float vet[tam]);
float somavet(float vet[tam]);

int main(){

    float x[tam];
    float y[tam];
    float somax,somay;


    printf("preencha x: \n");
    preencha(x);

    printf("preencha y: \n");
    preencha(y);

    somax = somavet(x);
    printf("o resultado da soma de x: %.2f \n",somax);
    somay = somavet(y);
    printf("o resultado da soma de y: %.2f \n",somay);

    return 0;

}
void preencha(float vet[tam]){
    int i;
    for(i = 0;i < tam;i++){
        printf("informe os numeros %d :\n",i);
        scanf("%f",&vet[i]);
    }

}
float somavet(float vet[tam]){
    int i;
    float soma;
    soma = 0;
    for(i = 0;i < tam;i++){
        soma+= vet[i];

    }
    return soma;

}
