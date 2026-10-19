#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 3

typedef struct estrutura{
    char nome[51];
    float salario;
    int idade;
    char sexo;
    int qntfilhosmenor18;
} Estrutura;

void leituraSegura(char vet[]){
    int i;
    for(i = 0; i < (int)strlen(vet); i++){
        if(vet[i] == '\n'){
            vet[i] = '\0';
        }
    }
}

void preencher(Estrutura vet[],int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("informe o nome da pessoa %d: ",i + 1);
        fgets(vet[i].nome,51,stdin);
        leituraSegura(vet[i].nome);

        printf("informe o salario da pessoa %d: ", i + 1);
        scanf("%f",&vet[i].salario);
        getchar();

        printf("informe a idade da pessoa %d: ", i + 1);
        scanf("%d",&vet[i].idade);
        getchar();

        printf("informe o sexo da pessoa %d: ", i + 1);
        scanf("%c",&vet[i].sexo);
        getchar();

        printf("informe a qnt filhos < 18 da pessoa %d: ", i + 1);
        scanf("%d",&vet[i].qntfilhosmenor18);
        getchar();
    }
}

float idadeMediahomensdesempregados(Estrutura vet[]){
    int i,cont = 0;
    float idadeMedia = 0,result;
    for(i = 0; i < TAM; i++){
        vet[i].sexo = tolower(vet[i].sexo);
        if(vet[i].sexo == 'm' && vet[i].salario == 0){
            idadeMedia += vet[i].idade;
            cont++;
        }
    }
    if(cont == 0){
        return 0;
    }
    result = idadeMedia/cont;
    return result;
}

float percentualmulheres(Estrutura vet[]){
    int i,cont = 0, totalmulheres = 0;
    float percent = 0;
    for(i = 0; i < TAM; i++){
        vet[i].sexo = tolower(vet[i].sexo);
        if(vet[i].sexo == 'f'){
            totalmulheres++;
            if(vet[i].idade >= 18 && vet[i].idade <= 25 && vet[i].qntfilhosmenor18 > 2){
                cont++;
            }
        }
    }
    if(totalmulheres == 0){
        return 0;
    }
    percent = ((float)cont/totalmulheres) * 100;
    return percent;
}
int main(){
    Estrutura vet[51];
    float resultadohomens,resultadomulheres;
    preencher(vet,TAM);
    resultadohomens = idadeMediahomensdesempregados(vet);
    printf("a idade media de homens desempregados eh: %.2f \n",resultadohomens);
    resultadomulheres = percentualmulheres(vet);
    printf("o percentual de mulheres com idade(>18 e <=25 e >2 filhos) eh: %.2f \n",resultadomulheres);
    return 0;

}
