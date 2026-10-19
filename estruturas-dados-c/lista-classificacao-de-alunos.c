#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct aluno{
    char nome[100];
    int matricula;
    float media;
    int qtdFaltas;
}Aluno;

typedef struct node{
    Aluno info;
    struct node *prox;
    struct node *ant;
}Node;

typedef struct ldec{
    Node *inicio;
    Node *fim;
    int qtd;
}LDEC;

void initialize(LDEC *l){
    l->inicio = NULL;
    l->fim = NULL;
    l->qtd = 0;
}
void inserirfinal(LDEC *l,Aluno a){
    Node* novo;
    novo = (Node*)malloc(sizeof(Node));
    novo->info = a;

    if(l->qtd == 0){
        l->inicio = novo;
        l->fim = novo;
        l->qtd = 1;
        l->inicio->ant = l->fim;
        l->fim->prox = l->inicio;
    }
    else{
        l->fim->prox = novo;
        novo->ant = l->fim;
        l->fim = novo;
        (l->qtd)++;
        l->inicio->ant = l->fim;
        l->fim->prox = l->inicio;
    }
}

void copiar(LDEC *l,LDEC *aprovados,LDEC *reprovadosF,LDEC *reprovadosM){
    Node* aux;
    aux = l->inicio;

    if(l->qtd == 0){
        return;
    }

    do{

        if(aux->info.media >= 7 && aux->info.qtdFaltas <= 18){
            inserirfinal(aprovados,aux->info);
        }
        else if(aux->info.media < 7 && aux->info.qtdFaltas <= 18){
            inserirfinal(reprovadosM,aux->info);
        }
        else if(aux->info.qtdFaltas > 18){
            inserirfinal(reprovadosF,aux->info);
        }

        aux = aux->prox;

    }while(aux != l->inicio);

}

void exibir(LDEC *l){
    Node* aux;
    aux = l->inicio;

    if(l->qtd == 0){
        printf("Lista vazia\n");
        return;
    }

    do{
        printf("Nome: %s \n",aux->info.nome);
        printf("Matricula: %d\n",aux->info.matricula);
        printf("Media: %f\n",aux->info.media);
        printf("Quantidade de faltas: %d\n",aux->info.qtdFaltas);

        aux = aux->prox;
    }while(aux != l->inicio);
}
void exibirInformacoes(){
    printf("\n1- Preencher a turma\n");
    printf("2- Exibir aprovados\n");
    printf("3- Exibir reprovados por falta\n");
    printf("4- Exibir reprovados por media\n");
    printf("5- Classificar nas respectidas listas\n");
    printf("0- Fim\n");
}

void leiturasegura(char nome[]){
    int tam;
    tam = strlen(nome);
    for(int i = 0; i < tam;i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }
}

int main(){
    LDEC turma, aprovados, reprovadosFaltas, reprovadoM;
    Aluno a;
    int op;
    initialize(&turma);
    initialize(&aprovados);
    initialize(&reprovadosFaltas);
    initialize(&reprovadoM);
    
    do{
        exibirInformacoes();
        printf("Informe a opcao desejada: ");
        scanf("%d",&op);
        getchar();
        

        switch(op){
            case 1: 
                printf("Nome: ");
                fgets(a.nome,100,stdin);
                leiturasegura(a.nome);
                printf("Matricula: ");
                scanf("%d",&a.matricula);
                printf("Media: ");
                scanf("%f",&a.media);
                printf("Quantidade de faltas: ");
                scanf("%d",&a.qtdFaltas);
                getchar();
                inserirfinal(&turma,a);
                break;
        
            case 2:
                exibir(&aprovados);
                break;
        
            case 3:
                exibir(&reprovadosFaltas);
                break;

            case 4: 
                exibir(&reprovadoM);
                break;

            case 5:
                copiar(&turma,&aprovados,&reprovadosFaltas,&reprovadoM);
                break;
            case 0:
                printf("Fim!!\n");
                break;
            default:
                printf("opcao invalida!\n");
        }
        

    }while(op != 0);
    return 0;
}
   

    







    
