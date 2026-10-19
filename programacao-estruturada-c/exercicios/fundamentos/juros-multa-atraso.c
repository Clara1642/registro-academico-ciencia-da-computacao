#include <stdio.h>
#include <stdlib.h>
int main()
{
    float valorconta,multa,multatotal,percentualjuros,percentual,total;
    int atraso;
    printf("informe ao usuario o valor da conta: \n");
    scanf("%f",&valorconta);

    printf("informe o numero em dias de atraso da conta: \n");
    scanf("%d",&atraso);

    printf("informe o valor de multa por dia de atraso: \n");
    scanf("%f",&multa);

    printf("informe o percentual de juros aplicado sobre o valor da conta: \n");
    scanf("%f",&percentualjuros);

    multatotal = atraso * multa;
    percentual= (percentualjuros /100.00) * atraso * valorconta;

    total = multatotal + percentual + valorconta;



    printf("o valor total da multa por %d dias de atraso eh r$ %0.2f \n",atraso,multatotal);
    printf("o valor total dos juros a ser pago por %d dias de atraso eh r$ %0.2f \n",atraso,percentual);
    printf("o valor total da conta a ser pago ja com multas e juros eh r$ %0.2f \n",total);
    return 0;
}
