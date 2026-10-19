#include <stdio.h>
#include <stdlib.h>
int main()
{
int matriz[3][3];
int i,j;

printf("digite os elementos da matriz [3]x[3]: \n");
for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        printf("elemento [%d][%d]",i,j);
        scanf("%d",&matriz[j][i]);
    }
    }
printf("matriz digitada: \n");
for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
    printf("%d",matriz[i][j]);
}
printf("\n");
}
return 0;
}
