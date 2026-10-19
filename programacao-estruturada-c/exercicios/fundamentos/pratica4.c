// 1-
#include <stdio.h>
#include <stdlib.h>
void proc1(int qnt);
int c (int qnt);
int fatorial(int n);
int main(){
    int n;
    printf("informe a quantidade de termos: (maior ou igual 3) \n");
    scanf("%d",& n);
    while(n < 3){
    printf("informe a quantidade de termos valida: \n");
    scanf("%d",& n);
    }
    proc1(n);
    c(n);
    return 0;
    
}
void proc1(int qnt){
    int i;
    printf("calculo inicial \n");
    printf("e = 1");

    for (i = 1; i < qnt; i++){
        printf(" + 1/%d!", i);
    }
    printf("\n");
    
}
int c(int qnt){
    int i;
    float soma = 0.0;

   for(i = 0; i < qnt;i++){
      soma+= 1.0 /fatorial(i);
   }
   printf("os termos sao %d e a soma dos termos %.2f \n",qnt,soma);
   return 0;

}

int fatorial(int n){
    int i;
    int fat = 1;
    for(i = 1;i <= n;i++){
        fat*= i;
    }
    return fat;
   }

   
    
