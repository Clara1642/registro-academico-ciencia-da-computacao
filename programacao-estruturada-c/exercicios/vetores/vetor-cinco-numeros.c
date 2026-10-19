#include <stdio.h>
#include <stdlib.h>
int main()
{

int i,vetor[5];

printf("digite 5 numeros:\n");
for(i = 0; i < 5; i ++){
    scanf("%d",&vetor[i]);

}

printf("os numeros digitados foram:\n");
for(i = 0; i < 5; i++){
    printf("%d",vetor [i]);

}

return 0;

}
