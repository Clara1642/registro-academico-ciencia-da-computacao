#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct no{
    int info;
    struct no *prox;

}No;


typedef struct queueInt{
    No* inicio;
    No* fim;

}QueueInt;


void initialize(QueueInt *f){
    f->inicio = NULL;
    f->fim = NULL;
}

int Isempty(QueueInt *f){
    if(f->inicio == NULL){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int Isfull(QueueInt f){
    (void)f;
    return FALSE;
}

void Enqueue(QueueInt *f,int valor){
    No *aux;
    
    aux = (No*)malloc(sizeof(No));
    aux->info = valor;
    aux->prox = NULL;

    if(f->inicio == NULL){
        f->inicio = aux;
        f->fim = aux;
    }
    else{
        f->fim->prox = aux;
        f->fim = aux;

    }
}

int Dequeue(QueueInt *f){
    No *aux;
    int valor;

    aux = f->inicio;
    valor = aux->info;
    f->inicio = aux->prox;

    if(f->inicio == NULL){
        f->fim = NULL;
    }
    free(aux);

    return valor;
}

int Head(QueueInt f){
    return f.inicio->info;
}


void exibiropcoes(){
    printf("1- Enfileirar \n");
    printf("2- desenfileirar \n");
    printf("3- Ver o inicio da fila \n");
    printf("0- Encerrar o programa \n");
    printf("\nDigite o que deseja:");
}

int main(){
    QueueInt minhafila;
    int op,n,v;

    initialize(&minhafila);

    do{
        exibiropcoes();
        scanf("%d",&op);
        switch(op){
            case 1:
                if(Isfull(minhafila) == FALSE){
                    printf("\nDigite o valor: ");
                    scanf("%d",&n);
                    Enqueue(&minhafila,n);
                }
                else{
                    printf("\nFila cheia\n");
                }
                break;

            case 2:
                if(Isempty(&minhafila) == TRUE){
                    printf("\nFila vazia.\n");
                }
                else{
                    v = Dequeue(&minhafila);
                    printf("\nValor desfileirado: %d\n",v);
                }
                break;
            case 3:
                if(Isempty(&minhafila) == TRUE){
                    printf("\nFila vazia.\n");
                }
                else{
                    printf("\nValor no inicio da fila: %d\n",Head(minhafila));
                }
                break;
  
            default:
                break;
        }
    }while(op != 0);
    return 0;
}



