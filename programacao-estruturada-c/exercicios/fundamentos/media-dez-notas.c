#include <stdio.h>
#include <stdlib.h>
int main()
{
 float notas;
 int contador = 0;
 float soma = 0;
 float media;
 do
 {
 printf("digite sua nota: \n");
 scanf("%f",&notas);
 soma = soma + notas;
 contador++;
 }
  while (contador < 10);
  media = soma / contador;
  printf("resultado %f",media);

  return 0;
 }
