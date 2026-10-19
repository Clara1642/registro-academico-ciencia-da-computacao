#include <stdio.h>
#include <stdlib.h>
int main()
{
int lado1;
int lado2;
int lado3;

printf("infome o valor do primeiro lado:");
scanf(" %d",&lado1);
printf("informe o valor do segundo lado:");
scanf(" %d",&lado2);
printf("informe o valor do terceiro lado:");
scanf(" %d",&lado3);

if(lado1 == lado2 && lado3 == lado2 && lado1 == lado3){
    printf("Equilatero.");
}
else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
    printf("Isosceles");
}
else if(lado1 != lado2 && lado3 != lado2 && lado1 != lado3){
    printf("Escaleno");
}
return 0;
}
