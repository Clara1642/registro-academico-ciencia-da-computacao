#include <stdio.h>
#include <stdlib.h>
int soma(int n1,int n2)
{
    int resultado;
    resultado = n1 + n2;
    return resultado;

}
int main()
{
    int v1,v2,resultado1;
    printf("digite o valor do v1: \n");
    scanf("%d",&v1);
    printf("digite o valor do v2: \n");
    scanf("%d",&v2);

    resultado1 = soma(v1,v2);
    printf("o resultado da soma e: %d \n",resultado1);
    return 0;
}
