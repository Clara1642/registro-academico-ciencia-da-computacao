#include <stdio.h>
#include <stdlib.h>
int main()
{
  int numero, i;
  int fatorial;
  printf("digite um numero inteiro \n");
  scanf("%d",&numero);

  if(numero <= 0){
    printf("nao existe fatorial para numeros negativos");
    return 0;
  }
    i = numero;
    fatorial = 1;
    while (numero > 1)
    {
      fatorial *= i;
      numero --;

  }
     printf("fatorial de %d e:",fatorial);

     return 0;
}
