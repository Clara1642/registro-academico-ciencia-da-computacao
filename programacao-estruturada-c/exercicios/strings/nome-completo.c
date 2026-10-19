#include <stdio.h>
#include <string.h>
int main()
{

char nome[50], sobrenome[50],nomecompleto[100];
printf("digite o nome: ");
scanf("%s",nome);

printf("digite o sobrenome: ");
scanf("%s",sobrenome);

strcpy(nomecompleto, nome);
strcat(nomecompleto," ");
strcat(nomecompleto, sobrenome);

printf("nome completo: %s\n",nomecompleto);
return 0;

}
