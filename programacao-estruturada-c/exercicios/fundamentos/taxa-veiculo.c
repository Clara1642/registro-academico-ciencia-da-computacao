#include <stdio.h>
#include <stdlib.h>
int main()
{
    float taxa1,taxa2,anoveiculo,valorveiculo;

    printf("informe o ano de fabricacao do veiculo: \n");
    scanf("%f",&anoveiculo);

    printf("informe o valor da tabela do veiculo: \n");
    scanf("%f",&valorveiculo);

    taxa1 = (1.0/100) * valorveiculo;
    taxa2 = (1.5/100) * valorveiculo;

    if(anoveiculo <= 2000){
        printf("o valor que voce pagara eh: %0.2f",taxa1);
    }
    else if(anoveiculo >= 2000){
        printf("o valor que voce pagara eh: %0.2f",taxa2);
    }
    return 0;
}
