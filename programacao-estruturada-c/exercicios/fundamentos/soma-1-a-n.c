#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int soma = 0;
    printf("digite um numero inteiro: \n");
    scanf(" %d",&n);

    for(int i = 1; i <= n; i ++) {
        soma=soma + i;
    }
        printf("resultado: %d",soma);

    return 0;

}
