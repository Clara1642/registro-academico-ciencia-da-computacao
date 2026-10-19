#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,i;
    int somapares,produtoimpares;
    somapares = 0;
    produtoimpares = 1;


    printf("informe o valor do primeiro numero: \n");
    scanf("%d",&n1);

    printf("informe o valor do segundo numero: \n");
    scanf("%d",&n2);

    if(n1 > n2){
        printf("o numero n2 tem que ser maior que n1. \n");
        printf("informe o valor do segundo numero: \n");
        scanf("%d",&n2);

    }

for(i = n1; i <= n2; i++){
    if(i % 2 == 0){
     somapares+=i;
    }
    else{
    produtoimpares*=i;
    }

}
printf("a soma dos numeros pares e %d \n",somapares);
printf("o produto dos numeros impares e: %d \n",produtoimpares);

return 0;


}
