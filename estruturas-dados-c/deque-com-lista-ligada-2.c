#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct dequeNode{
    int info;
    struct dequeNode* prox;
}DequeNode;

typedef struct deque{
    DequeNode* inicio;
    DequeNode* fim;
}Deque;

void Initialize(Deque* d){
    d->inicio = NULL;
    d->fim = NULL;
}

int isEmpty(Deque d){
    if(d.inicio == NULL && d.fim == NULL){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int isFull(Deque d){
    (void)d;
    return FALSE;
}

void Push(Deque* d,int valor){
    DequeNode* aux;
    aux = (DequeNode*)malloc(sizeof(DequeNode));
    aux->info = valor;
    aux->prox = NULL;

    if(d->inicio == NULL){
        d->inicio = aux;
        d->fim = aux;
    }
    else{
        aux->prox = d->inicio;
        d->inicio = aux;
    }
}

int Pop(Deque* d){
    DequeNode* aux;
    int valor;

    aux = d->inicio;
    valor = aux->info;

    d->inicio = aux->prox;
    if(d->inicio == NULL){
        d->fim = NULL;
    }
    free(aux);
    return valor;
}

void Inject(Deque* d,int v){
    DequeNode* aux;
    aux =(DequeNode*)malloc(sizeof(DequeNode));
    aux->info = v;
    aux->prox = NULL;
    if(d->inicio == NULL){
        d->inicio = aux;
        d->fim = aux;
    }
    else{
        d->fim->prox = aux;
        d->fim = aux;
    }
}

int Eject(Deque* d){
    DequeNode *aux, *anterior;
    int valor;

    aux = d->fim;
    valor = aux->info;

    if(d->inicio == d->fim){
        d->inicio = NULL;
        d->fim = NULL;
    }
    else{
        anterior = d->inicio;
        while(anterior->prox != d->fim){
            anterior = anterior->prox;
        }
        anterior->prox = NULL;
        d->fim = anterior;
    }
    free(aux);

    return valor;
}

void Destroy(Deque* d){
    DequeNode *aux, *aux1;

    aux = d->inicio;
    while(aux != NULL){
        aux1 = aux;
        aux = aux->prox;
        free(aux1);
    }
    d->inicio = NULL;
    d->fim = NULL;

}


void exibirOpcoes(){
    printf("\nOpcoes:\n\n");
    printf("1 - Push\n");
    printf("2 - Pop\n");
    printf("3 - Inject\n");
    printf("4 - Enject\n");
    printf("0 - Encerrar programa \n");
    printf("\nInforme a opcao desejada: ");
}

    int main(){
        Deque minhaDeque;
        int op,num,retorno;
        Initialize(&minhaDeque);
        do{
            exibirOpcoes();
            scanf("%d",&op);
            switch(op){
                case 1:
                    if(isFull(minhaDeque) == FALSE){
                        printf("Informe o valor: ");
                        scanf("%d",&num);
                        Push(&minhaDeque,num);
                    }
                    else{
                        printf("\nDeque cheia! \n");
                    }
                    break;
                case 2:
                    if(isEmpty(minhaDeque) == FALSE){
                        retorno = Pop(&minhaDeque);
                        printf("\nValor retirado: %d\n",retorno);
                    }
                    else{
                        printf("\nDeque vazia!\n");
                    }
                    break;

                case 3:
                    if(isFull(minhaDeque) == FALSE){
                        printf("Informe o valor: ");
                        scanf("%d",&num);
                        Inject(&minhaDeque,num);
                    }   
                    else{
                        printf("\nDeque cheia!\n");
                    }
                    break;

                case 4:
                    if(isEmpty(minhaDeque) == FALSE){
                        retorno = Eject(&minhaDeque);
                        printf("\nValor retirado: %d\n",retorno);
                    }
                    else{
                        printf("\nDeque vazia!\n");
                    }
                    break;

                case 0:
                    Destroy(&minhaDeque);
                    printf("\nBye bye\n");
                    break;

                default:
                    printf("\nOpcao invalida \n");
                    break;
            }
        }while(op != 0);
        return 0;
    }
        