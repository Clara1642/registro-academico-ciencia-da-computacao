#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 int x;
 int y;
 float resultado = 1;
 printf("digite um valor numerico para x: \n");
 scanf("%d",&x);

 printf("digite um valor numerico para y: \n");
 scanf("%d",&y);

 for(int i = 1; i <= y; i ++) {
    resultado *= x;

 }
 printf("resultado %.2f \n",resultado);

    return 0;

}
