#include <stdio.h>
int main(){
    int vet[10];
    int i,maior = 0;
    for(i = 0;i < 10;i++){
        printf("informe os valores: \n");
        scanf("%d",&vet[i]);

        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    printf("o valor maior e: %d \n",maior);

    return 0;
}
