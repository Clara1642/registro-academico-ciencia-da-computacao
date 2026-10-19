#include <stdio.h>
#include <stdlib.h>
void linha()
{
for(int i = 0; i < 30;i++){
    printf("-");
}
printf("\n");
}
int main()
{
    linha();
    printf("menu principal \n");
    linha();

    return 0;
}
