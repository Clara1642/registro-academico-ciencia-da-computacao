#include <stdio.h>
#include <math.h>

void calcularraizes(int a1, int b1, int c1, int *p,float *p1,float *p2);
int main(){
     int a,b,c;
     float p1,p2;
     int existeRaizesReais,*p;
     p = &existeRaizesReais;


    printf("informe o valor de A: \n");
    scanf("%d",&a);

    printf("informe o valor de B: \n");
    scanf("%d",&b);

    printf("informe o valor de C: \n");
    scanf("%d",&c);

    calcularraizes(a,b,c,&existeRaizesReais,&p1,&p2);

    if(*p == 0){
        printf("nao existe raizes reais. \n");
    }
    if(*p == 1){
        printf("as duas raizes sao iguias: %.2f \n",p1);
    }
    else if(*p == 2){
        printf("duas raizes diferentes: %.2f e %.2f \n",p1,p2);
    }


    return 0;
}

void calcularraizes(int a1, int b1, int c1, int *p,float *p1,float *p2){
    float delta = b1*b1 - 4.0*a1*c1;

    if(delta < 0){
       *p = 0;
    }

    else if(delta == 0){
        *p = 1;
        *p1 = - b1 / (2.0*a1);
    }
    else{
        *p = 2;
        *p1 = (- b1 + sqrt(delta)) / (2.0*a1);
        *p2 = (- b1 - sqrt(delta)) / (2.0*a1);
    }

}
