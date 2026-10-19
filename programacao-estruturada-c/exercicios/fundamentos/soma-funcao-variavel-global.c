#include <stdio.h>
int calculo(int a,int b);
int main(){
    int a,b,soma;
    soma = 0;

    printf("informe um numero a: \n");
    scanf("%d",&a);

    printf("informe um numero b: \n");
    scanf("%d",&b);

    soma = calculo(a,b);

    printf("a soma e: %d \n",soma);


return 0;

}

int calculo(int a,int b){
    int soma;
    soma = 0;
    soma = a + b;

    return soma;
}
