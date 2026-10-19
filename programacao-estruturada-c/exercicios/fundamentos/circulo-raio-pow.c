#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

float pi = 3.1415;
float r,c,a,v;
printf("informe o valor do raio: \n");
scanf("%f",&r);
c = 2 * pi * r;
printf("o resultado do comprimento do raio e: %0.2f \n",c);
a = pi * pow(r,2);
printf("o resultado da area do circulo do raio e: %0.2f \n",a);
v = 3.0/4.0 * pi * pow(r,3);
printf("o resultado do volume da esfera do raio e: %0.2f \n",v);
return 0;
}
