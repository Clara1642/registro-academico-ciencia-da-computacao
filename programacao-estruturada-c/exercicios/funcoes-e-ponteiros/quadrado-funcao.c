#include <stdio.h>
#include <stdlib.h>
int quadrado(int n1)
{
int resultado;
resultado = n1 * n1;
return resultado;
}
int main()
{
    int v1,resultado1;
    printf("digite um numero: \n");
    scanf("%d",&v1);
    resultado1 = quadrado(v1);
    printf("o resultado e: %d \n",resultado1);
    return 0;
}
