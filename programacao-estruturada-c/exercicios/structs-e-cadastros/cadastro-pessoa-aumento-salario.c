#include <stdio.h>
#include <string.h>
#define TAM 1

typedef struct pessoa{
    char nome[51],matricula[51];
    int escolaridade,tempServico;
    float salario;

}Pessoa;

void leituraSegura(char vet[],int tam){
    int i;
    for(i = 0; i <= tam; i++){
        if(vet[i] == '\n'){
            vet[i] = '\0';
        }
    }
}
 void preencherVetor(Pessoa vet[],int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("informe nome da pessoa %d: ",i + 1);
        fgets(vet[i].nome,51,stdin);
        leituraSegura(vet[i].nome,strlen(vet[i].nome));

        printf("informe a matricula da pessoa %d: ",i + 1);
        fgets(vet[i].matricula,51,stdin);
        leituraSegura(vet[i].matricula,strlen(vet[i].matricula));

        printf("informe a escolaridade da pessoa %d: ",i + 1);
        scanf("%d",&vet[i].escolaridade);

        printf("informe o tempo de servico da pessoa %d: ",i + 1);
        scanf("%d",&vet[i].tempServico);

        printf("informe o salario da pessoa %d: ",i + 1);
        scanf("%f",&vet[i].salario);

        getchar();
    }
}
void Aumento(Pessoa vet[],int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(vet[i].escolaridade == 3 && vet[i].tempServico >= 5 && vet[i].salario < 1000){
            vet[i].salario = vet[i].salario + (vet[i].salario * 0.20);
        }
    }
}
void exibir(Pessoa vet[],int tam){
    int i;
    printf("Dados das pessoas: \n");
    for(i = 0; i < tam; i++){
        float antigo =  vet[i].salario;
        if(vet[i].escolaridade == 3 && vet[i].tempServico >= 5 && vet[i].salario < 1000){

            printf("nome da pessoa %d: %s \n ",i + 1,vet[i].nome);
            printf("A matricula da pessoa %d: %s \n",i + 1,vet[i].matricula);
            printf("O tempo de servico da pessoa %d: %d \n ",i + 1,vet[i].tempServico);
            printf("O salario antigo da pessoa %d: %.2f \n",i + 1,antigo);
            Aumento(vet,TAM);
            printf("o novo salario da pessoa %d: %.2f \n",i + 1,vet[i].salario);
            printf("\n");
        }
    }
}
int main(){
    Pessoa vet[51];
    preencherVetor(vet,TAM);
    exibir(vet,TAM);
    return 0;
}
