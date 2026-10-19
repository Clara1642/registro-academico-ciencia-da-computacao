#include <stdio.h>
#include <stdlib.h>
int main()
{
    const double pi = 3.141592;
    float r;

    printf("informe o valor de raio r:");
    scanf("%f",&r);

    printf("o comprimento da circunferencia de raio r e: %f \n", 2 * pi * r);
    printf("a area do circulo de raio r e: %f \n",pi * r * r);
    printf("o volume da esfera de raio r e: %f \n", (3.0 / 4.0) * pi *  ( r * r * r));

    return 0;
}
