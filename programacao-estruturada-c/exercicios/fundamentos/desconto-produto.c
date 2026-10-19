#include <stdio.h>
#include <stdlib.h>
int main()
{
    float valorproduto,descontoaplicado,desconto,percentual;
    printf("preco real do produto: \n");
    scanf("%f",&valorproduto);

    printf("informe seu desconto no produto: \n");
    scanf("%f",&desconto);
     percentual = (desconto/100) * valorproduto;
     descontoaplicado = valorproduto - percentual;


    printf("preco real do produto: %0.2f \n",valorproduto);
    printf("quanto voce pagara pelo produto: %0.2f \n",descontoaplicado);
    printf("quanto voce esta economizando: %0.2f \n",percentual);

    return 0;
}
