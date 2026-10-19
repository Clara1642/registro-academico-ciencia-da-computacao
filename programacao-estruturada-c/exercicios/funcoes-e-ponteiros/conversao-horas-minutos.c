#include <stdio.h>
int conversaohoraseminutos(int horas,int minutos);
void conversao2(int mintotal,int* p1, int* p2);
int main(){
    int horas,minutos,minutost;
    int resultado1;
    char resposta;

    while(1){
        printf("informe as horas e minutos: \n");
        scanf("%d %d",&horas,&minutos);

        resultado1 = conversaohoraseminutos(horas,minutos);
        printf("o resultado da conversao de horas e minutos para minutos: %d \n",resultado1);

        printf("informe os minutos totais: \n");
        scanf("%d",&minutost);

        conversao2(minutost,&horas,&minutos);
        printf("o resultado da conversao de minutos total para horas: %d \n",horas);
        printf("o resultado da conversao de minutos total para minutos: %d \n",minutos);

        printf("deseja continuar: \n");
        getchar();
        scanf("%c",&resposta);
          if(resposta == 's'){
             continue;
          }

        else{
            printf("programa finalizado. \n");
            break;
        }
    }
    return 0;
}
int conversaohoraseminutos(int horas,int minutos){
        int minutostotal;
        minutostotal = horas * 60 + minutos;
        return minutostotal;
}
void conversao2(int mintotal,int *p1, int *p2){
    *p1 = mintotal / 60;
    *p2 = mintotal % 60;
}
