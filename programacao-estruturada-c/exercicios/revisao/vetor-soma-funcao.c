#include <stdio.h>
int soma(int *vet,int n){
    int i,soma = 0;
    for(i = 0;i < n;i++){
        soma += vet[i];
    }
    return soma;

}
int main(){
    int i,cont = 0;
    int somat = 0;
    int vetor[5];
    for(i = 0;i < 5;i++){
        printf("informes os numeros inteiros: \n");
        scanf("%d",&vetor[i]);
        cont = cont + 1;
    }

    somat = soma(vetor,cont);
    printf("o resultado da soma e : %d",somat);
    return 0;
}
