#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    char nome[100];
    float media;
    int faltas;
} Aluno;

typedef struct node {
    struct node *ante;
    Aluno info;
    struct node *prox;
} Node;

typedef struct lde {
    Node *prim;
    Node *ult;
    int qtd;
} LDE;

void initialize(LDE *l) {
    l->prim = NULL;
    l->ult = NULL;
    l->qtd = 0;
}

Node* busca(LDE *l, char nome[]) {
    Node * aux;
    aux = l->prim;
    if(l->qtd == 0){
        return NULL;
    }
    while(aux != NULL){
        if(strcmp(aux->info.nome,nome)== 0){
            return aux;
        }
        else if(strcmp(aux->info.nome, nome) > 0) {
            return NULL;
        }
        else{
            aux = aux->prox;
        }
    }
    return NULL;
}

Node* criarNode(Aluno a) {
    Node *novo;
    novo = (Node*) malloc(sizeof(Node));
    novo->info = a;
    novo->prox = NULL;
    novo->ante = NULL;
    return novo;
}

void inserir(LDE *l, Aluno a) {
    Node *aux,*aux1;
    if (l->qtd == 0) {
        aux = criarNode(a);
        l->prim = aux;
        l->ult = aux;
        (l->qtd)++;
    }
    else {
        if (strcmp(l->prim->info.nome, a.nome) == 0) {
            printf("O nome ja esta na lista!\n");
        }
        else if (strcmp(l->prim->info.nome, a.nome) > 0) {
            aux = criarNode(a);
            aux->prox = l->prim;
            aux->ante = NULL;
            l->prim->ante = aux;
            l->prim = aux;
            (l->qtd)++;
        }
        else if (strcmp(l->ult->info.nome,a.nome) == 0) {
            printf("O nome ja esta na lista!\n");
        }
        else if (strcmp(l->ult->info.nome,a.nome) < 0) {
            aux = criarNode(a);
            aux->ante = l->ult;
            l->ult->prox = aux;
            aux->prox = NULL;
            l->ult = aux;
            (l->qtd)++;
        }
        else {
            aux = l->prim;
            while(aux != NULL){
                if(strcmp(aux->info.nome,a.nome) == 0){
                    printf("O nome ja esta na lista!\n");
                    return;
                }
                else if(strcmp(aux->info.nome,a.nome) > 0){
                    aux1 = criarNode(a);
                    aux->ante->prox = aux1;
                    aux1->ante = aux->ante;
                    aux->ante = aux1;
                    aux1->prox = aux;
                    (l->qtd)++;
                }
                aux = aux->prox;
            }
        }
    }
}

void exibirDados(LDE l){
    Node *aux;
    aux = l.prim;
    if(l.qtd == 0){
        printf("Lista vazia!!\n");
    }
    while(aux != NULL){
        printf("Nome: %s\n",aux->info.nome);
        printf("Media: %f\n",aux->info.media);
        printf("Faltas: %d\n",aux->info.faltas);
        aux = aux->prox;
    }
    printf("\n");
}

void exibirDadosAlunoEspecifico(LDE *l,char nome[]){
    Node *retorno;
    retorno = busca(l,nome);
    if(retorno == NULL){
        printf("Aluno nao encontrado na lista!\n");
    }
    else{
        printf("\nDados do aluno(a): %s\n",retorno->info.nome);
        printf("Media: %f\n",retorno->info.media);
        printf("Faltas: %d\n",retorno->info.faltas);
    }
}

void alterarMedia(LDE *l,char nome[]){
    Node *retorno;
    retorno = busca(l,nome);
    if(retorno == NULL){
        printf("Aluno nao encontrado!\n");
    }
    else{
        printf("Informe a nova media do aluno: ");
        scanf("%f",&retorno->info.media);
        printf("Media alterada com sucesso!\n");
    }
}

void alterarQtdFaltas(LDE *l,char nome[]){
    Node *retorno;
    retorno = busca(l,nome);
    if(retorno == NULL){
        printf("Aluno nao encontrado!\n");
    }
    else{
        printf("Informe o novo qtd de faltas do aluno: ");
        scanf("%d",&retorno->info.faltas);
        printf("Qtd de faltas alterado com sucesso!\n");
    }
}

void removerAluno(LDE *l,char nome[]){
    Node *retorno;
    retorno = busca(l,nome);
    if(retorno == NULL){
        printf("Aluno nao encontrado!\n");
    }
    else{
        if(l->qtd == 1){
            free(retorno);
            l->prim = NULL;
            l->ult = NULL;
            l->qtd = 0;
        }
        else if(l->prim == retorno){
            l->prim = l->prim->prox;
            l->prim->ante = NULL;
            free(retorno);
            (l->qtd)--;
        }
        else if(l->ult == retorno){
            l->ult = l->ult->ante;
            l->ult->prox = NULL;
            free(retorno);
            (l->qtd)--;
        }
        else{
           retorno->ante->prox = retorno->prox; 
           retorno->prox->ante = retorno->ante;
           free(retorno);
           (l->qtd)--;
        }
    }
}

void esvaziar(LDE *l){
    Node *aux,*aux1;
    aux = l->prim;
    while(aux != NULL){
        aux1 = aux;
        aux = aux->prox;
        free(aux1);
    }
    l->prim = NULL;
    l->ult = NULL;
    l->qtd = 0;
}

void exibirOpcao(){
    printf("\nOPCOES:\n");
    printf("1- Inserir um aluno na lista\n");
    printf("2- Exibir dados dos alunos da lista\n");
    printf("3- Exibir dados de um aluno especifico\n");
    printf("4- Alterar media de um aluno\n");
    printf("5- Alterar qtd de faltas de um aluno\n");
    printf("6- Remover um aluno da lista\n");
    printf("7- Esvaziar\n");
    printf("0- Encerrar o programa\n");
}

void leituraSegura(char nome[]){
    int TAM;
    TAM = strlen(nome);
    for(int i = 0; i < TAM;i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }
}

int main(){
    LDE lista;
    char nome[100];
    Aluno a;
    int op;
    initialize(&lista);

    do{
        exibirOpcao();
        printf("escolha a opcao desejada: ");
        scanf("%d",&op);
        getchar();
        switch(op){
            case 1:
                printf("Informe o nome do aluno(a): ");
                fgets(a.nome,100,stdin);
                leituraSegura(a.nome);

                printf("Informe a media do aluno(a): ");
                scanf("%f",&a.media);

                printf("Informe o qtd de faltas do aluno(a): ");
                scanf("%d",&a.faltas);

                inserir(&lista,a);
                break;

            case 2:
                exibirDados(lista);
                break;

            case 3:
                printf("Informe o nome do aluno(a): ");
                fgets(nome,100,stdin);
                leituraSegura(nome);
                exibirDadosAlunoEspecifico(&lista,nome);
                break;

            case 4:
                printf("Informe o nome do aluno(a): ");
                fgets(nome,100,stdin);
                leituraSegura(nome);
                alterarMedia(&lista,nome);
                break;
            
            case 5:
                printf("Informe o nome do aluno(a): ");
                fgets(nome,100,stdin);
                leituraSegura(nome);
                alterarQtdFaltas(&lista,nome);
                break;

            case 6:
                printf("Informe o nome do aluno(a): ");
                fgets(nome,100,stdin);
                leituraSegura(nome);
                removerAluno(&lista,nome);
                break;

            case 7:
                esvaziar(&lista);
                printf("lista esvaziada!!\n");
                break;

            case 0:
                printf("Bye bye!!!\n");
                printf("programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    }while(op != 0);

    return 0;
}