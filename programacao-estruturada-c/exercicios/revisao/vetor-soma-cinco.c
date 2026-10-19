#include <stdio.h>
int main(){
    int vet[5];
    int i,soma = 0;
    for(i = 0;i < 5;i++){
        printf("informe os valores: \n");
        scanf("%d",&vet[i]);
        soma = soma + vet[i];
    }
    printf("o resultado da soma: %d \n",soma);

    return 0;
}
