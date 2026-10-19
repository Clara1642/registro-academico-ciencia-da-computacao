#include <stdio.h>

int main(){
    int n1,n2,n3;

    printf("informe o valor do primeiro numero: \n");
    scanf("%d",&n1);

    printf("informe o valor do segundo numero: \n");
    scanf("%d",&n2);

    printf("informe o valor do terceiro numero: \n");
    scanf("%d",&n3);

    if(n1 >= n2 && n1 >= n3){
         printf("o resultado do maior numero informado e: %d \n",n1);
    }

    if (n2 >= n1 && n2 >= n3){
         printf("o resultado do maior numero informado e: %d \n",n2);
    }
    if(n3 >= n1 && n3 >= n2){
        printf("o resultado do maior numero informado e: %d \n",n3);
    }

    return 0;
}
