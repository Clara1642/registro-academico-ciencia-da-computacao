#include <stdio.h>

void proc (int v1, int v2, int v3, int v4,int *maiorv,int *menorv);
int main(){
    int n1,n2,n3,n4;
    int maiorValor,menorValor;

    printf("informe o valor do primeiro numero: \n");
    scanf("%d",&n1);

    printf("informe o valor do segundo numero: \n");
    scanf("%d",&n2);

    printf("informe o valor do terceiro numero: \n");
    scanf("%d",&n3);

    printf("informe o valor do quarto numero: \n");
    scanf("%d",&n4);


    proc(n1,n2,n3,n4,&maiorValor,&menorValor);
    printf("o resultado do menor: %d,%d,%d e %d : %d \n",n1,n2,n3,n4,maiorValor);
    printf("o resultado do maior: %d,%d,%d e %d : %d \n",n1,n2,n3,n4,menorValor);

    return 0;
}

void proc(int v1, int v2, int v3, int v4,int *maiorv,int *menorv){

    *maiorv = v1;
    *menorv = v1;

    if(*maiorv > v2) *maiorv = v2;
    if(*maiorv > v3) *maiorv = v3;
    if(*maiorv > v4) *maiorv = v4;

    if(*menorv < v2) *menorv = v2;
    if(*menorv < v3) *menorv = v3;
    if(*menorv < v4) *menorv = v4;

}
