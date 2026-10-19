#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num;
  printf("digite um numero: \n");
  scanf("%d",&num);

  switch(num){
    int n1,n2;
    case 1:
    printf("digite o primeiro numero: \n");
    scanf("%d",&n1);
    printf("digite o segundo numero: \n");
    scanf("%d",&n2);
    printf("resultado %d", n1 + n2);
    break;
    float n3,n4;
    case 2:
    printf("digite o primeiro numero \n");
    scanf("%f",&n3);
    printf("digite o segundo numero \n");
    scanf("%f",&n4);
    printf("resultado %0.1f",n3 - n4);
    break;
    float n5,n6;
    case 3:
    printf("digite o primeiro numero \n");
    scanf("%f",&n5);
    printf("digite o segundo numero \n");
    scanf("%f",&n6);
    printf("resultado %0.1f", n5 * n6);
    break;
    float n7,n8;
    case 4:
    printf("digite o primeiro numero \n");
    scanf("%f",&n7);
    printf("digite o segundo numero \n");
    scanf("%f",&n8);
    printf("resultado %0.1f",n7 / n8);
    break;

    return 0;

  }
}
