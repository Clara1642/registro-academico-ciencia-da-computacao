#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    int t1,t2,proximo;

    printf("informe a quantidade de termos (maior que 3):");
    scanf("%d",&n);
    t1 = 0;
    t2 = 1;

    printf("a serie de fibonacci: %d \n", n);

    for(i = 0; i < n; i++){
        printf(" %d",t1);
        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
    }
    printf(" \n");

    return 0;
}
