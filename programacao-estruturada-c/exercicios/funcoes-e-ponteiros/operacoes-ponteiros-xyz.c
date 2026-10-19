#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float x,y,z;
    float *p1, *p2, *p3;
    printf("informe tres numeros reais: \n");
    scanf("%f %f %f",&x,&y,&z);

    p1 = &x;
    p2 = &y;
    p3 = &z;

    *p1 = (*p1) * 4;
    *p2 = (*p2) / 3;
    *p3 = pow(*p3, 2);

    printf("o valor de x: %f \n",*p1);
    printf("o valor de y: %f \n",*p2);
    printf("o valor de z: %f \n",*p3);

return 0;
}
