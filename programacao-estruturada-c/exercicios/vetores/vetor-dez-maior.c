#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,vetor[10],maior;

printf("digite 10 numeros: \n");
for(i = 0; i < 10; i++){
scanf("%d",&vetor[i]);
}

maior= vetor[0];
for(i = 1; i < 10; i++){
   if(vetor[i] > maior){
    maior = vetor[i];
   }
}
printf("os numeros digitados foram: \n");
for(i = 0; i < 10; i++){
   printf("%d",vetor[i]);
}
printf("o maior numero digitado foi: %d \n",maior);

return 0;

}
