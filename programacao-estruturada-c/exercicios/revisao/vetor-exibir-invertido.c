#include <stdio.h>
int main(){
    int vet[6];
    int i,j;
    for(i = 0;i < 6;i++){
        printf("informe os numeros: \n");
        scanf("%d",&vet[i]);
    }
    for(j = 5;j >= 0 ;j--){
        printf("exebindo a ordem inversa dos valores %d \n",vet[j]);
    }
    return 0;
}
