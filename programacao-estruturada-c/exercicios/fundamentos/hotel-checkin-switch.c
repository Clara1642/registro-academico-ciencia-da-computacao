#include <stdio.h>
#include <stdlib.h>
int main ()
{
int num;
printf("digite um numero: \n");
scanf("%d",&num);

switch (num){
    case 1:
    printf("fazer check-in");
    break;
    case 2:
    printf("chamar servico de quarto");
    break;
    case 3:
    printf("fazer pedido");
    break;

    default:
    printf("numero invalido,tente novamente");
    break;
}
return 0;
}
