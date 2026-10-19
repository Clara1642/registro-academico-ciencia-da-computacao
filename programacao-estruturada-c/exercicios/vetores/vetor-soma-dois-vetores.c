#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor1[5], vetor2[5],vetorsoma[5];
    int i,j;

    printf("digite 5 numeros inteiros vetor1: \n");
    for(i = 0; i < 5;i++){
        scanf("%d",&vetor1[i]);
    }
    printf("digite 5 numeros inteiros vetor2: \n");
    for(j = 0; j < 5; j++){
        scanf("%d",&vetor2[j]);
    }
    printf("os numeros digitados vetor1 foram: \n");
    for (i = 0; i < 5; i++){
        printf("%d \n",vetor1[i]);
    }
    printf("os numeros digitados no vetor2 foram: \n");
    for(j = 0; j < 5; j++){
        printf("%d \n",vetor2[j]);
    }
    for(i = 0; i < 5; i++){
    vetorsoma[i] = vetor1 [i] +  vetor2[i];
    }
    for(i = 0; i < 5; i++){
        printf("posiçao %d: %d\n",i,vetorsoma[i]);

        }
    return 0;
    }
