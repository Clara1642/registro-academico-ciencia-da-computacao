#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,vetor[10];

printf("digite 10 numeros inteiros: \n");
for(i = 0; i < 10;i++){
 scanf("%d",&vetor[i]);
}
for(i = 0; i < 10;i++){
    if(vetor[i] % 2 == 0){
     printf("os numeros pares digitados foram esses: %d \n",vetor[i]);
    }
}
printf("\n");

return 0;
}
