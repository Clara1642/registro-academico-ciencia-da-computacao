#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int n1, int n2)
{
    int resultado;
    resultado = n1 * n2;
    return(resultado);
}
int main()
{
int v1,v2,resultado1;
printf("digite o valor 01: \n" );
scanf("%d",&v1);
printf("digite o valor 02: \n ");
scanf("%d",&v2);

resultado1 = multiplicacao(v1,v2);
printf("o resultado e: %d \n", resultado1);
return 0;

}
