#include <stdio.h>
#include <stdlib.h>
int main()
{
int matriz1[2][2],matriz2[2][2],matrizsoma[2][2];
int i,j;

printf("digite os elementos da matriz [2]x[2]: \n");
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
        printf("elemento [%d[%d]]",i,j);
        scanf("%d",&matriz1[i][j]);
    }
    }

printf("digite os elementos da matriz [2]x[2]: \n");
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
        printf("elemento [%d[%d]]",i,j);
        scanf("%d",&matriz2[i][j]);
    }
    }
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
        matrizsoma[i][j]=matriz1[i][j] + matriz2[i][j];
    }
    }


printf("matriz soma: \n");
for(i = 0; i < 2; i++){
  for(j = 0; j < 2; j++){
    printf("%d",matrizsoma[i][j]);
  }
  printf("\n");
}
return 0;
}
