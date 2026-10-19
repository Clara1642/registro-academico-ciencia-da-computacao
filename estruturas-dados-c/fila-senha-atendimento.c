#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct no{
    int info;
    struct no* prox;
}No;

typedef struct fila{
    No* inicio;
    No* fim;
    int qtd;
    int max;
}Fila;

void initialize(Fila *f,int t){
    f->inicio = NULL;
    f->fim = NULL;
    f->qtd = 0;
    f->max = t;
}

int isEmpty(Fila f){
    if(f.qtd == 0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int isFull(Fila f){
    if(f.qtd == f.max){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

void enQueue(Fila *f, int v){
    No *aux;
    aux = (No*)malloc(sizeof(No));
    aux->info = v;
    aux->prox = NULL;

    if(f->inicio == NULL && f->fim == NULL){
        f->inicio = aux;
        f->fim = aux;
    }
    else{
        f->fim->prox = aux;
        f->fim = aux;
    }
    (f->qtd)++;
}

int deQueue(Fila *f){
    No *aux;
    int valor;
    aux = f->inicio;
    valor = aux->info;

    if(aux->prox == NULL){
        f->fim = NULL;
    }

    f->inicio = aux->prox;
    free(aux);
    (f->qtd)--;
    return valor;
}

int Head(Fila f){
    return f.inicio->info;
}

void GerarSenha(Fila *f,int s){
    if(f->qtd == f->max){
        printf("Nao existe senhas disponiveis no momento!!!\n");
        return;
    }
    enQueue(f,s);
    printf("Senha gerada!!!\n");
}

void ChamarSenha(Fila *f){
    
    printf("Senha a ser atendida: %d\n",f->inicio->info);
    printf("Senha atendida!!!\n");   
    if(f->qtd > 1){
        printf("Proxima senha a ser chamada: %d\n",f->inicio->prox->info);
    }
    deQueue(f);
}

void exibirOpcoes(){
    printf("\n1- Gerar senha \n");
    printf("2- Chamar senha \n");
    printf("3- Ver o inicio da fila \n");
    printf("0 - encerrar progrma\n");
    printf("\nInforme a opcao desejada: ");
}
int main(){
    Fila minhaFila;
    int op,senha = 0;
    
    initialize(&minhaFila,20);
    
    do{
        exibirOpcoes();
        scanf("%d",&op);

        switch(op){
            case 1:
                if(isFull(minhaFila) == FALSE){
                    senha++;
                    GerarSenha(&minhaFila,senha);
                } 
                else{
                    printf("Fila cheia!!!");
                }
                break;
            case 2:
                if(isEmpty(minhaFila) == FALSE){
                    ChamarSenha(&minhaFila);
                } 
                else{
                    printf("Fila vazia!!!\n");
                }   
                break;
            case 3:
                if(isEmpty(minhaFila) == FALSE){
                   printf("Senha inicio: %d",Head(minhaFila)); 
                }
                else{
                    printf("\nSem senhas na fila de espera!!!\n");
                }
                break;
            
            case 0:
                printf("Fim do programa!!!\n");
                break;
            
            default:
                printf("Opcao invalida!!!\n");
        }
    }while(op != 0);
    return 0;
}



