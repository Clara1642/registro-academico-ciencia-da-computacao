#include <stdio.h>
#include <stdlib.h>
int main()
{
int idade,usuarios;
int totalvotantes = 0, totalnaovotantes = 0;
int contador = 0;


 int percentualvotantes;
 int percentualnaovotantes;

    for(usuarios = 0; usuarios <= 9; usuarios++){
     contador ++;

    printf("informe sua idade: \n");
    scanf("%d",&idade);
    if(idade < 0 || idade >= 120){
        printf("idade invalida,tente novamente. \n");
        printf("informe sua idade: \n");
        scanf("%d",&idade);
    }
    else if(idade >= 18 && idade <= 90){
        printf("esta pessoa tem %d anos e pode votar. \n",idade);
        totalvotantes++;

    }
    else{
        printf("esta pessoa tem %d anos e nao pode votar. \n",idade);
        totalnaovotantes++;

    }

}
            percentualvotantes = (100 * totalvotantes) / usuarios;
            percentualnaovotantes = (100 * totalnaovotantes) / usuarios;

printf("o total de pessoas que votaram %d, percentual de votantes %d e de nao votantes %d. \n",contador,percentualvotantes,percentualnaovotantes);
return 0;
}
