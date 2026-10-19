#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palavra1[20];
    char palavra2[20];

    printf("infome a primeira palavra: \n");
    scanf("%s",palavra1);

    printf("informe a segunda palavra: \n");
     scanf("%s",palavra2);

    if(strcmp(palavra1,palavra2) == 0){
        printf("iguais! \n");
    }
    else{
        printf("nao sao iguais! \n");
    }
    return 0;
}
