#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,fat = 1;
printf("digite um numeiro inteiro positivo: \n");
scanf("%d",&n);
for(int i = n;i >= 1;i --){
    fat *= i;
    printf("%d", i);
    if(i > 1){
        printf(" x ");
    }
}
printf(" = %d\n",fat);
return 0;

}
