#include <stdio.h>
#include <stdlib.h>
int main()
{
float salario,aumento,novosalario;
char continuar;

while(1){

    printf("informe o seu salario: \n");
    scanf("%f",&salario);
    if(salario < 1320){
        printf("tente novamente, informe um salario >= que 1320 \n");
        continue;
    }
    else if(salario <= 1500){
        aumento = salario * 0.20;
    }
    else if(salario > 1500 && salario <= 2500){
        aumento = salario * 0.15;
    }
    else if(salario > 2500 && salario <= 4000){
        aumento = salario * 0.10;
    }
    else if(salario > 4000){
        aumento = salario * 0.05;
    }

    novosalario = salario + aumento;
    printf("o funcionario tera um aumento de R$ %f, e passara a receber R$ %f.\n",aumento,novosalario);

    printf("deseja continuar: \n");
    scanf(" %c",&continuar);
    if(continuar == 'n'){
        break;
    }
}

return 0;
}
