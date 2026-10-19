#include <stdio.h>
#include <stdlib.h>
float multiplica(float n1, float n2)
{
float resultado;
resultado = n1 * n2;
return resultado;
}
int main()
{
    float v1,v2,resultado1;
    printf("digite o valor do v1: \n");
    scanf("%f",&v1);
    printf("digite o valor do v2: \n");
    scanf("%f",&v2);

    resultado1 = multiplica(v1,v2);
    printf("o resultado da multiplicacao e: %0.2f \n",resultado1);
    return 0;
}
