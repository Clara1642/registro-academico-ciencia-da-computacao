#include <stdio.h>
#include <stdlib.h>
int fatorial(int n1)
{
int resultado = 1;
for(int i = 1; i <= n1;i++){
    resultado *= i;
}
return resultado;
}
int main()
{
    int numero;
    printf("digite um numero: \n");
    scanf("%d",&numero);
    int resultado = fatorial(numero);
    printf("o resultado e: %d \n",resultado);
    return 0;
}
