#include <stdio.h>
#include <stdlib.h>

float conversao1(float fahrenheitparacelsius){
    float c;
    c = (fahrenheitparacelsius - 32.0) / 1.8;
    printf("o resultado da conversao de fahrenheit para celsius e: %0.2f graus \n",c);
    return c;
}
float conversao2(float celsiusparafahrenheit){
    float f;
    f =  celsiusparafahrenheit * 1.8 + 32.0;
    printf("o resultado da conversao de celsius para fahrenheit e: %0.2f graus \n",f);

    return f;
}
int main(){
    float temperatura,resposta1;
    char resposta;
    while(1){
        printf("informe a temperatura para a conversao: \n");
        scanf("%f",&temperatura);

        printf("escolha a conversao:\n (1 = fahrenheit para celsius)\n (2 = celsius para fahrenheit) \n");
        scanf("%f",&resposta1);

        if(resposta1 == 1){
            conversao1 (temperatura);
        }

        if(resposta1 == 2){
            conversao2 (temperatura);

        }
            printf("deseja continuar as conversoes:(s/n) \n");
            getchar();
            scanf("%c",&resposta);
        if( 's' == resposta){
             continue;
        }
        else if('n'== resposta){
            printf("programa encerrado.");
            break;
        }

    }
    return 0;
}
