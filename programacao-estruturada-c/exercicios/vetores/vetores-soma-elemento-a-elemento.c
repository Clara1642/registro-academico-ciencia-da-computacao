#include <stdio.h>
void prencher(int vet[5]);
void exibir(int vet[5]);
void calculo(int vet1[5],int vet2[5],int vet3[5]);

int main(){

    int A[5];
    int B[5];
    int C[5];

    printf("preencha A: \n");
    prencher(A);
    printf("preencha B: \n");
    prencher(B);

    printf("exibir A: \n");
    exibir(A);

    printf("exibir B: \n");
    exibir(B);

    printf("resultado do vetor C: \n");
    calculo(A,B,C);

    printf("exibir C: \n");
    exibir(C);

    return 0;
}
void prencher(int vet[5]){
    int i;
    for(i = 0;i <= 4;i++){
        printf("digite os valores: \n");
        scanf("%d",&vet[i]);
    }
}

void exibir(int vet[5]){
    int i;
    for(i = 0;i <= 4;i++){
        printf("%d ",vet[i]);
    }

    printf("\n");

}
void calculo(int vet1[5],int vet2[5],int vet3[5]){
    int i;
    for(i = 0;i <= 4;i++){
        vet3[i] = vet1[i] + vet2[i];
    }

}
