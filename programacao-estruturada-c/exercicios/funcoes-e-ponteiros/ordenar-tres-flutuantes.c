#include <stdio.h>
void ordena(float *a1,float *b1, float *c1);
int main(){

    float a,b,c;

    printf("informe o valor de a: \n");
    scanf("%f",&a);

    printf("informe o valor de b: \n");
    scanf("%f",&b);

    printf("informe o valor de c: \n");
    scanf("%f",&c);

    ordena(&a,&b,&c);
    printf("o novo valor de a: %.2f \n",a);
    printf("o novo valor de b: %.2f \n",b);
    printf("o novo valor de c: %.2f \n",c);

    return 0;
}
void ordena(float *a1,float *b1, float *c1){
    float aux;

    if( *a1 > *b1){
        aux = *a1;
        *a1 = *b1;
         *b1 = aux;
    }

    if(*c1 < *b1){
      aux = *c1;
      *c1 = *b1;
      *b1 = aux;

    }
    if(*a1 > *b1){
     aux = *a1;
     *a1 = *b1;
     *b1 = aux;

 }

}
