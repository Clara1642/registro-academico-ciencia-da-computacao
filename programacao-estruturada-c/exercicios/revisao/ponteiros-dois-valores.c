#include <stdio.h>
int main(){
    int n1,n2;
    int *p1,*p2;

    printf("informe o valor de n1: \n");
    scanf("%d",&n1);

    printf("informe o valor de n2: \n");
    scanf("%d",&n2);

    p1 = &n1;
    p2 = &n2;

    printf(" o novo valor de n1: %d \n",*p1);
    printf(" o novo valor de n2: %d \n",*p2);

    return 0;
}
