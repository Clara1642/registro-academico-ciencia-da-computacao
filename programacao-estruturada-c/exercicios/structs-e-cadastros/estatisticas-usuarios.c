#include <stdio.h>
#include <stdlib.h>
int main()
{
int idade,peso,usuarios,i,contador1,contador2;
float altura,contador3,contador4,mediaidade;
long somaaltura;
char corolhos;
char corcabelos;
contador1 = 0;
contador2 = 0;
contador3 = 0;
contador4 = 0;
somaaltura = 0;
mediaidade = 0;

printf("informe a quantidade de usuarios: \n");
scanf("%d",&usuarios);

    for(i = 1; i <= usuarios;i++){

        printf("informe sua idade: \n");
        scanf("%d",&idade);
        while(idade < 1 || idade > 120){
            printf("informe uma idade valida. \n");
            scanf("%d",&idade);
        }


        printf("informe seu peso: \n");
        scanf("%d",&peso);
        while(peso < 3 || peso > 300){
            printf("informe uma peso valido. \n");
            printf("informe seu peso: \n");
            scanf("%d",&peso);
        }



        printf("informe sua altura: \n");
        scanf(" %f",&altura);
        while (altura < 0.5 || altura > 2.5){
            printf("informe uma altura valida. \n");
            printf("informe sua altura: \n");
            scanf("%f",&altura);
        }


        printf("informe a cor dos seus olhos: \n a = azul, p = preto, v = verde, c = castanho \n");
        scanf(" %c",&corolhos);
        while (corolhos != 'a' && corolhos != 'p' && corolhos != 'v'&& corolhos != 'c' ){
            printf("informe a cor dos olhos valida. \n");
            printf("informe a cor dos seus olhos: \n a = azul, p = preto, v = verde, c = castanho \n");
            scanf(" %c",&corolhos);
        }



        printf("informe a cor dos seus cabelos: \n P = preto, C = castanho, L = loiro, R = ruivo\n");
        scanf(" %c",&corcabelos);
        while(corcabelos != 'P' && corcabelos != 'C' && corcabelos != 'L'&& corcabelos != 'R'){
            printf("informe a cor dos cabelos validas \n");
            printf("informe a cor dos seus cabelos: \n P = preto, C = castanho, L = loiro, R = ruivo\n");
            scanf(" %c",&corcabelos);
        }


        if(idade > 50 && peso < 60){
            contador1 = contador1 + 1;

        }

        if(altura < 1.50){
            somaaltura += idade;
            contador2 = contador2 + 1;
            mediaidade = somaaltura /contador2;
        }

        if(corolhos == 'a'){
           contador3 = contador3 + 1;
        }

        if(corcabelos == 'R' && corolhos != 'a'){
           contador4 = contador4 + 1;
        }

    }

printf("a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos: %d \n",contador1);
printf("a media de idades das pessoas com altura inferior a 1.50: %0.2f \n",mediaidade);
printf("a porcentagem de pessoas com olhos azuis entre todas as pessoas: %0.2f %% \n ",(100 * contador3) / usuarios);
printf("a porcentagem de pessoas ruivas e que nao possuem olhos azuis: %0.2f %% \n", (100 * contador4)/usuarios);


return 0;

}
