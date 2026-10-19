#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salarioatual;
    int aumento1,aumento2,aumento3,aumento4;
    int novosalario1,novosalario2,novosalario3,novosalario4;
    char continuar;

   while(1){

    printf("informe seu salario atual: \n");
    scanf("%d",&salarioatual);

      while (salarioatual < 1518){
        printf("salario invalido. informe novamente seu salario: \n");

       printf("informe novamente seu salario atual: \n");
       scanf("%d",&salarioatual);
      }

    aumento1 = salarioatual * 20/100;
    aumento2 = salarioatual * 15/100;
    aumento3= salarioatual * 10/100;
    aumento4= salarioatual * 5/100;

    novosalario1 = salarioatual + aumento1;
    novosalario2 = salarioatual + aumento2;
    novosalario3 = salarioatual + aumento3;
    novosalario4 = salarioatual + aumento4;

    if(salarioatual <= 1800){
        printf("o funcionario tera um aumento de r$ %d e passara a receber r$ %d \n",aumento1,novosalario1);
    }
    else if(salarioatual > 1800 && salarioatual <= 2500){
        printf("o funcionario tera um aumento de r$ %d e passara a receber r$ %d \n",aumento2,novosalario2);
    }
    else if(salarioatual > 2500 && salarioatual <= 4000){
        printf("o funcionario tera um aumento de r$ %d e passara a receber r$ %d \n",aumento3,novosalario3);
    }
    else if(salarioatual >= 4000){
        printf("o funcionario tera um aumento de r$ %d e passara a receber r$ %d \n",aumento4,novosalario4);
    }

    printf("deseja continuar: \n");
    scanf(" %c",&continuar);
    if(continuar == 'n'){
        break;
    }
   }
    return 0;
}
