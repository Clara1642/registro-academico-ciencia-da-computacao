#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *ante;
    int info;
    struct node *prox;
}Node;

typedef struct lde{
    Node *prim;
    Node *ult;
    int qtd;
}LDE;

void initialize(LDE *l){
    l->prim = NULL;
    l->ult = NULL;
    l->qtd = 0;
}

Node* busca(LDE l,int valor){
    Node *aux;
    aux = l.prim;
    if(l.qtd == 0){
        return NULL;
    }
    do{
        if(aux->info == valor){
            return aux;
        }
        else{
            aux = aux->prox;
        }
    }while(aux != l.prim);
    return NULL;
}

void inserirInicio(LDE *l,int valor){
    Node *novo,*retorno;
    retorno = busca(*l,valor);
    if(retorno == NULL){
        novo =(Node*)malloc(sizeof(Node));
        novo->info = valor;
        if(l->qtd == 0){
            l->prim = novo;
            l->ult = novo;
            l->qtd = 1;
            l->prim->ante = l->ult;
            l->ult->prox = l->prim;
        }
        else{
            novo->prox = l->prim;
            l->prim->ante = novo;
            l->prim = novo;
            (l->qtd)++;
            l->prim->ante = l->ult;
            l->ult->prox = l->prim; 
        }
    }
    else{
        printf("Valor repetido!!\n");
    }
}

void inserirFinal(LDE *l,int valor){
    Node *novo,*retorno;
    retorno = busca(*l,valor);
    if(retorno == NULL){
        novo = (Node*)malloc(sizeof(Node));
        novo->info = valor;
        if(l->qtd == 0){
            l->prim = novo;
            l->ult = novo;
            l->qtd = 1;
            l->prim->ante = l->ult;
            l->ult->prox = l->prim;
        }
        else{
            l->ult->prox = novo;
            novo->ante = l->ult;
            l->ult = novo;
            (l->qtd)++;
            l->prim->ante = l->ult;
            l->ult->prox = l->prim;
        }
    }
    else{
        printf("Valor repetido!!\n");
    }
}

void removerInicio(LDE *l){
    Node *aux;
    aux = l->prim;

    if(l->qtd == 0){
        printf("Lista vazia!!\n");
    }
    else if(l->qtd == 1){
        free(aux);
        l->prim = NULL;
        l->ult = NULL;
        l->qtd = 0;
    }
    else{
        l->prim = aux->prox;
        free(aux);
        l->prim->ante = l->ult;
        l->ult->prox = l->prim;
        (l->qtd)--;
    }
}

void removerFinal(LDE *l){
    Node *aux;
    aux = l->ult;

    if(l->qtd == 0){
        printf("Lista vazia!!\n");
    }
    else if(l->qtd == 1){
        free(aux);
        l->prim = NULL;
        l->ult = NULL;
        l->qtd = 0;
    }
    else{
        l->ult = aux->ante;
        free(aux);
        l->ult->prox = l->prim;
        l->prim->ante = l->ult;
        (l->qtd)--;
    }
}

void removerValor(LDE *l,int valor){
    Node *aux;
    aux = busca(*l,valor);

    if(l->qtd == 0){
        printf("Lista vazia!!\n");
    }
    else if(aux != NULL){
        if(l->qtd == 1){
            l->prim = NULL;
            l->ult = NULL;
            l->qtd = 0;
            free(aux);
        }
        else if(aux == l->prim){
            l->prim = aux->prox;
            l->ult->prox = l->prim;
            l->prim->ante = l->ult;
            free(aux);
            (l->qtd)--;
        }
        else if(aux == l->ult){
            l->ult = aux->ante;
            l->prim->ante = l->ult;
            l->ult->prox = l->prim;
            free(aux);
            (l->qtd)--;
        }
        else{
            aux->ante->prox = aux->prox;
            aux->prox->ante = aux->ante;
            free(aux);
            (l->qtd)--;

        }
    }
    else{
        printf("Valor nao encontrado!!\n");
    }
}

void exibir(LDE l){
    Node *aux;
    aux = l.prim;

    if(l.qtd == 0){
        printf("Lista vazia!!\n");
        return;
    }
    do{
        printf("%d ",aux->info);
        aux = aux->prox;

    }while(aux != l.prim);
}

void removerTodos(LDE *l){
    Node *aux,*aux1;
    aux = l->prim;

    if(l->qtd == 0){
        return;
    }

    do{
        aux1 = aux;
        aux = aux->prox;
        free(aux1);

    }while(aux != l->prim);
    l->prim = NULL;
    l->ult = NULL;
    l->qtd = 0;
}
void exibiropcao(){
    printf("\n1- Inserir no inicio\n");
    printf("2- Inserir no final\n");
    printf("3- Remover inicio\n");
    printf("4- Remover final\n");
    printf("5- Remover valor especifico\n");
    printf("6- Exibir\n");
    printf("7- Remover todos\n");
    printf("0- Encerrar o programa\n");
    printf("Escolha a opcao desejada: ");
}


int main(){
    LDE lista;
    int num,op;
    initialize(&lista);

    do{
        exibiropcao();
        scanf("%d",&op);

        switch(op){
            case 1:
                printf("Informe um valor: ");
                scanf("%d",&num);
                inserirInicio(&lista,num);
                break;
            case 2:
                printf("Informe um valor: ");
                scanf("%d",&num);
                inserirFinal(&lista,num);
                break;
            case 3:
                removerInicio(&lista);
                break;
            case 4:
                removerFinal(&lista);
                break;
            case 5:
                printf("Informe o valor que deseja remover: ");
                scanf("%d",&num);
                removerValor(&lista,num);
                break;
            case 6:
                exibir(lista);
                break;
            case 7:
                removerTodos(&lista);
                break;
            case 0:
                printf("Bye bye!!!\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }while(op != 0);
    return 0;
}