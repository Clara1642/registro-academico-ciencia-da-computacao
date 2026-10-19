#include <stdio.h>
#define tam 50

void exibirOpcoes();
void insercao(int vet[], int *cont, int valor);
void exibir(int vet[], int cont);
int busca(int vet[],int *cont,int valorp);

int main() {

    int vetA[tam], vetB[tam];
    int num, op,valorp1,valorp2,result1,result2;
    int contA = 0, contB = 0;

    do{
       exibirOpcoes();
       scanf("%d", &op);
       switch(op) {
            case 1:
                printf("Informe o valor: ");
                scanf("%d", &num);
            if (num % 2 == 0) {
                insercao(vetA, &contA, num);
            }
            else {
                insercao(vetB, &contB, num);
            }
            break;
            case 2:
                exibir(vetA, contA);
                break;

            case 3:
                exibir(vetB, contB);
                break;

            case 4:
                printf("informe o valor que deseja buscar: ");
                scanf("%d",&valorp1);
                result1 = busca(vetA,&contA,valorp1);
                printf("o resultado da busca foi: %d",result1);
                break;

            case 5:
                printf("informe o valor que deseja buscar: ");
                scanf("%d",&valorp2);
                result2 = busca(vetB,&contB,valorp2);
                printf("o resultado da busca foi: %d",result2);
                break;

            case 0:
                printf("Fim do programa.\n");
                break;

            default:
                printf("Opcao invalida \n");
       }
    }
    while(op !=0);

    return 0;
}

void insercao(int vet[], int *cont, int valor) {

    if (*cont == tam) {
        printf("Vetor cheio!\n");
    }
    else {
        vet[*cont] = valor;
        (*cont)++;
        printf("Insercao efetuada!\n");
    }

}

void exibirOpcoes() {
    printf("\n Opcoes \n");
    printf("1 - Inserir novo valor \n");
    printf("2 - Exibir numeros pares \n");
    printf("3 - Exibir numeros impares \n");
    printf("4 - busca em vetA: \n");
    printf("5 - busca em vetB: \n");
    printf("0 - Encerrar programa \n");
    printf("Informe a opcao desejada: ");
}

void exibir(int vet[], int cont) {
    int i;
    if (cont == 0) {
        printf("Vetor vazio!\n");
    }
    else {
        for (i = 0; i < cont; i++) {
        printf("%d   ", vet[i]);
        }
        printf("\n");
    }
}

int busca(int vet[],int *cont,int valorp){
    int i;
    int cont1 = 0;

    for(i = 0; i < *cont ;i++){
        if (vet[i] == valorp ){
            cont1 = cont1 + 1;
        }
    }
    return cont1;
}
