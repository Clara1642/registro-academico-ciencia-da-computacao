#include <stdio.h>
#include <stdlib.h>

void menorparamaior(float a,float b,float c);

int main(){
    float n1,n2,n3;
    printf("digite o primeiro numero: \n");
    scanf("%f",&n1);

    printf("digite o segundo numero: \n");
    scanf("%f",&n2);

    printf("digite o terceiro numero: \n");
    scanf("%f",&n3);

    menorparamaior(n1,n2,n3);
    return 0;
}
void menorparamaior(float a,float b,float c){
       float aux;

    if(a > b){
        aux = a;
        a = b;
        b = aux;
    }
    if(b > c){
       aux = b;
       b = c;
       c = aux;
    }
    if(a > b){
       aux = a;
        a = b;
        b = aux;
    }
    printf("a ordem correta: \n a = %0.2f \n b = %0.2f \n c = %0.2f \n",a,b,c);

}
