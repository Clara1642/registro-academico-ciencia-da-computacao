#include <stdio.h>
#include <stdlib.h>

void proc1 ( int n1);
void proc2 (int n2);
int main(){
    int n;

    printf("informe um numero maior que zero: \n");
    scanf("%d",&n);

    while(n <= 0){
        printf("informe um numero maior que zero. \n");
        scanf("%d",&n);
    }
    proc2(n);

return 0;

}

void proc1 (int n1){
    int i;
    for( i = 1; i <= n1;i++){
        printf("%d ",i);
    }
    printf("\n");
}

void proc2 (int n2){
    int i;
    for(i = 1; i <= n2 ;i++){
        proc1(i);

    }

}
