#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 1

void leituraSegura(char nome[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }
}

typedef struct alunos{
    char matricula[15];
    char nome[51];
    float media;
    int qntFaltas;
} Alunos;

void preencher(Alunos vet[]){
    int i;
    for( i = 0; i < TAM; i++){
        printf("Informe a matricula do aluno %d: ", i + 1);
        fgets(vet[i].matricula,15,stdin);
        leituraSegura(vet[i].matricula,strlen(vet[i].matricula));

        printf("Informe o nome do aluno %d: ", i + 1);
        fgets(vet[i].nome,51,stdin);
        leituraSegura(vet[i].nome, strlen(vet[i].nome));

        printf("Informe a media do aluno %d: ", i + 1);
        scanf("%f",&vet[i].media);

        printf("Informe a quantidade de faltas do aluno %d: ", i + 1);
        scanf("%d",&vet[i].qntFaltas);

        getchar();
    }
}

void criar(Alunos vet[], Alunos reprovados[], Alunos aprovados[], Alunos recuperacao[], int *contRepro, int *contApro, int *contRecup){
    int i;
    for( i = 0; i < TAM; i++){
        if(vet[i].media < 3){
            reprovados[*contRepro] = vet[i];
            (*contRepro)++;
        }
        else if(vet[i].media >= 7){
            aprovados[*contApro] = vet[i];
            (*contApro)++;
        }
        if(vet[i].media >= 3 && vet[i].media < 7){
            recuperacao[*contRecup] = vet[i];
            (*contRecup)++;
        }
    }
}

void exibir(Alunos vet[],int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("a matricula %s \n",vet[i].matricula);
        printf("o aluno %s \n",vet[i].nome);
        printf("a media %.2f \n",vet[i].media);
        printf("Quantidades de faltas: %d \n",vet[i].qntFaltas);
    }
}

int main(){
    Alunos vet[TAM],aprovados[TAM],reprovados[TAM],recuperacao[TAM];
    int contApro = 0, contRepro = 0, contRecup = 0;

    preencher(vet);
    printf("struct preenchida. \n");

    criar(vet,reprovados,aprovados,recuperacao,&contRepro,&contApro,&contRecup);
    printf("Aprovados.\n");
    exibir(aprovados,contApro);
    printf("Recuperacao. \n");
    exibir(recuperacao,contRecup);
    printf("Reprovados. \n");
    exibir(reprovados,contRepro);

    return 0;
}
