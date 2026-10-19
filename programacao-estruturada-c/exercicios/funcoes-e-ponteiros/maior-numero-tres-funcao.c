#include <stdio.h>
#include <stdlib.h>
void maiornumero(int n1,int n2,int n3)
{
 if (n1 > n2 && n1 > n3){
printf("n1 e o maior");
 }
 else if ( n2 > n1 && n2 > n3){
printf("n2 e o maior");
 }
 else if (n3 > n1 && n3 > n2){
printf("n3 e o maior");
 }

}
int main()
{
    int v1,v2,v3;
    printf("digite o primeiro numero: \n");
    scanf("%d",&v1);
    printf("digite o segundo numero: \n");
    scanf("%d",&v2);
    printf("digite o terceiro numero: \n");
    scanf("%d",&v3);
    maiornumero(v1,v2,v3);
    return 0;

}
