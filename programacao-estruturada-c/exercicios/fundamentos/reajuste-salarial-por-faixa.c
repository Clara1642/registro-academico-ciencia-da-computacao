#include <stdio.h>
#include <stdlib.h>
int main(){

  int salarioatual,aumento1,aumento2,aumento3,aumento4;
  int nsalario1,nsalario2,nsalario3,nsalario4;
  char continuar;
  while(1){
    printf("informe seu salario atual: \n");
    scanf("%d",&salarioatual);

    if(salarioatual <= 1518){
      printf("informe seu salario atual novamente: \n");
      continue;
    }

        if(salarioatual <= 1800){
          aumento1 = salarioatual * 20/100;
          nsalario1 = salarioatual + aumento1;
          printf("o funcionario tera um aumento de r$ %d e passara a receber r$ %d \n",aumento1,nsalario1);
          printf("deseja continuar o programa: \n");
          scanf(" %c",&continuar);
          if(continuar == 's'){
            continue;
          }
          if( continuar == 'n'){
          printf("programa finalizado. \n");
           break;
          }
        }
        else if(salarioatual > 1800 && salarioatual <= 2500){
          aumento2 = salarioatual * 15/100;
          nsalario2 = salarioatual + aumento2;
          printf("o funcionario tera um aumento de r$ %d e passara a receber r$ %d \n",aumento2,nsalario2);
          printf("deseja continuar o programa: \n");
          scanf(" %c",&continuar);
          if(continuar == 's'){
            continue;
          }
          if( continuar == 'n'){
          printf("programa finalizado. \n");
           break;
          }
        }

        else if(salarioatual > 2500 && salarioatual <= 4000){
          aumento3 = salarioatual * 10/100;
           nsalario3 = salarioatual + aumento3;
          printf("o funcionario tera um aumento de r$ %d e passara a receber r$ %d \n",aumento3,nsalario3);
          printf("deseja continuar o programa: \n");
          scanf(" %c",&continuar);
          if(continuar == 's'){
            continue;
          }
          if( continuar == 'n'){
          printf("programa finalizado. \n");
           break;
          }
        }

        else if(salarioatual > 4000){
          aumento4 = salarioatual * 5/100;
          nsalario4 = salarioatual + aumento4;
          printf("o funcionario tera um aumento de r$ %d e passara a receber r$ %d \n",aumento4,nsalario4);
          printf("deseja continuar o programa: \n");
          scanf(" %c",&continuar);
          if(continuar == 's'){
            continue;
          }
          if( continuar == 'n'){
          printf("programa finalizado. \n");
           break;
          }
        }

  }
  return 0;
}
