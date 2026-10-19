#include <stdio.h>
#include <stdlib.h>
int main()
{
int tabuada;
int n;
    printf("digite um numero de 1 a 10 \n");
    scanf("%d",&n);

for(tabuada=1;tabuada <= 10;tabuada ++){
    printf("%d x %d = %d\n",n,tabuada,n * tabuada);
}
return 0;
}
