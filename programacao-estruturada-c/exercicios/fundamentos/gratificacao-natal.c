#include <stdio.h>
#include <stdlib.h>
int main()
{
    int horasextras,horasfalta,total;

    printf("informe as horas extras trabalhadas: \n");
    scanf("%d",&horasextras);

    printf("informe o numero de horas que faltou no trabalho: \n");
    scanf("%d",&horasfalta);

    total = horasextras - 2.0/3.0 * horasfalta;

    if(total > 40 ){
        printf("o funcionario recebera r$ 400.00 de gratificacao de natal.\n");
    }
    else if (total > 30){
        printf("o funcionario recebera r$ 325.00 de gratificacao de natal.\n");
    }
    else if (total > 20){
        printf("o funcionario recebera r$ 275.00e gratificacao de natal.\n");
    }
    else if (total > 10){
        printf("o funcionario recebera r$ 250.00 de gratificacao de natal.\n");
    }
    else{
        printf("o funcionario recebera r$ 200.00 de gratificacao de natal. \n");
    }

    return 0;
}
