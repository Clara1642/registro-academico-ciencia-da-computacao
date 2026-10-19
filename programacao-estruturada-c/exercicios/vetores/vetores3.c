
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 1000000

int jogardado(){
    int min = 1, max = 6;
    int aleatorio = min + rand() % (max - min + 1);

    return aleatorio;
}
void realizarsimulacao(int contadores[]){

    int i,face;
    for(i = 0; i < tam; i++){
        face = jogardado();
        contadores[face - 1] = contadores[face - 1] + 1;
    }
}

void exibirResultado(int vet[]){
     for(int i = 0; i < 6; i++){
        printf("a quantidade de vezes que a face %d aparece e: %d \n",i + 1,vet[i]);
    }
}

int calculo(int contadores[]){
    int resultado = 0;
    for(int i = 0; i < 6; i++){
        float percentual = ((contadores[i]) * 100.0) / tam;
        printf(" face %d: %.2f%% \n",i + 1, percentual);

        if(percentual < 15.0 || percentual > 17.0){
            resultado = 1;
        }
    }
    return resultado;
}
int main(){
    srand(time(NULL));

    int contadores[6] = {0};

    printf("iniciando simulacao. \n");
    realizarsimulacao(contadores);


    printf("exibindo os resultados. \n");
    exibirResultado(contadores);


    printf("calculo dos percentuais: \n");
    int resultado = calculo(contadores);

   if(resultado == 0){
    printf("\n o dado nao e viciado. \n");
   }
   else{
    printf(" \n o dado e viciado. \n");
   }
   
   return 0;
}

