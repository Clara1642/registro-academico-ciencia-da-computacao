#include <stdio.h>
#include <stdlib.h>
int main()
{
int matriz[4][4];
int i,j;
printf("digite os elementos da matriz[4]x[4]: \n");
for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        printf("elemento [%d][%d]",i,j);
        scanf("%d",&matriz[i][j]);
    }
}
printf("matriz digiatada: \n");
for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        printf("%d \n",matriz[i][j]);
    }
}
printf("\n \n \n");
printf("os elementos da diagonal principal da matriz [4]x[4]: %d %d %d %d \n",matriz[0][0],matriz[1][1],matriz[2][2],matriz[3][3]);
return 0;

}
