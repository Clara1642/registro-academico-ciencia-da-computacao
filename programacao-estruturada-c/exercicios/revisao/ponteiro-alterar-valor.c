#include <stdio.h>
int main(){
    int y = 5;
    printf("valor antes da mudanca: %d \n",y);

    int *p;
    p = &y;
    *p = 20;
    printf("valor apos a mudanca: %d \n",*p);
    return 0;
}
