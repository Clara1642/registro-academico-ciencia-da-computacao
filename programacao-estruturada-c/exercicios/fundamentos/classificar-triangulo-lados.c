#include <stdio.h>
#include <stdlib.h>
int main()
{
    int segmento1,segmento2,segmento3;
    printf("informe o valor do primeiro: \n");
    scanf("%d",&segmento1);

    printf("informe o valor do segundo: \n");
    scanf("%d",&segmento2);

    printf("informe o valor do terceiro: \n");
    scanf("%d",&segmento3);

    if(segmento1 == segmento2 && segmento1 == segmento3 && segmento2 == segmento3 && segmento3 == segmento1){
        printf("e um triagulo equilatero. \n");
    }
    else if((segmento1 == segmento2 && segmento1 != segmento3 && segmento2 != segmento3) || (segmento1 == segmento3 && segmento1 != segmento2 && segmento2 != segmento3) || (segmento2 == segmento3 && segmento2 != segmento1 && segmento3 != segmento1)){
        printf("e um triangulo isosceles. \n");
    }
    else{
        printf("e um triangulo escaleno. \n");
    }
    return 0;
}
