#include <stdio.h>
#include <stdlib.h>
int dobro(int n1)
{
    int resultado;
    resultado = n1 * 2;
    return(resultado);
}
int main()
{
int v1,resultado1;
printf("digite o valor v1: \n");
scanf("%d",&v1);

resultado1 = dobro(v1);
printf("o resultado e: %d \n",resultado1);
return 0;
}
