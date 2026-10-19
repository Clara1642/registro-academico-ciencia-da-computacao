#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct no{
    int info;
    struct no *prox;
}No;

typedef struct lista{
    No *inicio;
    No *fim;
    int qtd;
}Lista;


void initialize(Lista *l){
    l->inicio = NULL;
    l->fim = NULL;
    l->qtd = 0;
}

void inserirFinal(Lista *l,int valor){
    No *aux;

    aux = (No*)malloc(sizeof(No));
    aux->info = valor;
    aux->prox = NULL;

    if(l->qtd == 0){
        l->inicio = aux;
        l->fim = aux;
    }
    else{
        l->fim->prox = aux;
        l->fim = aux;
    }
    (l->qtd)++;
}

void preencherLista(Lista *l){
    int valor;

    do{
        printf("obs: 0 encerra o programa.\n");
        printf("Informe um valor: ");
        scanf("%d",&valor);

        if(valor == 0){
            return;
        }
        
        else{
            inserirFinal(l,valor);
            printf("valor inserido!\n\n");
        }

    }while(valor != 0);
}

void exibirLista(Lista l){
    No* aux;

    aux = l.inicio;

    while(aux != NULL){
        printf("%d ",aux->info);
        aux = aux->prox;
    }
}

No* busca(Lista l,int valor){
    No *aux;

    aux = l.inicio;

    while(aux != NULL){
        if(aux->info == valor){
            return aux;
        }
        aux = aux->prox;
    }
    return NULL;
}

void inserirFinalSemRepetidos(Lista *l,int valor){
    if(busca(*l,valor) == NULL){
        inserirFinal(l,valor);
    }
}

void uniao(Lista l1,Lista l2,Lista *l3){
    No *aux;

    aux = l1.inicio;
    while(aux != NULL){
        inserirFinalSemRepetidos(l3,aux->info);
        aux = aux->prox;
    }

    aux = l2.inicio;
    while(aux != NULL){
        inserirFinalSemRepetidos(l3,aux->info);
        aux = aux->prox;
    }
}

void interseccao(Lista l1,Lista l2,Lista *li){
    No *aux,*aux1;
    aux = l1.inicio;
    aux1 = l2.inicio;

    while(aux != NULL){
       aux1 = l2.inicio;
       while(aux1 != NULL){
        if(aux->info == aux1->info){
            inserirFinalSemRepetidos(li,aux1->info);
        }
        aux1 = aux1->prox;
       }
       aux = aux->prox;
    }
}

void diferenca(Lista l1,Lista l2,Lista *ld){
    No *aux, *aux1;
    aux = l1.inicio;
    aux1 = l2.inicio;
    int cont = 0;

    while(aux != NULL){
        while(aux1 != NULL){
            if(aux->info == aux1->info){
                cont++;
            }
            aux1 = aux1->prox;
        }
        aux1 = l2.inicio;

        if(cont == 0){
            inserirFinalSemRepetidos(ld,aux->info);
        }
        cont = 0;
        aux = aux->prox;
    }


}

int main(){
    Lista lista1, lista2,listaUniao,listaInterssecao,listaDifereca;

    initialize(&lista1);
    initialize(&lista2);
    initialize(&listaUniao);
    initialize(&listaInterssecao);
    initialize(&listaDifereca);

    printf("preenchendo lista1: \n\n");
    preencherLista(&lista1);
  
    printf("\npreemchendo lista2: \n\n");
    preencherLista(&lista2);
    printf("\n\nlista 1:\n");
    exibirLista(lista1);
    printf("\n\nlista 2:\n");
    exibirLista(lista2);
    uniao(lista1,lista2,&listaUniao);
    printf("\n\nlista de uniao:\n");
    exibirLista(listaUniao);

    interseccao(lista1,lista2,&listaInterssecao);
    printf("\n\nLista de interseccao:\n");
    exibirLista(listaInterssecao);

    diferenca(lista1,lista2,&listaDifereca);
    printf("\n\nLista de diferenca:\n");
    exibirLista(listaDifereca);

    return 0;
}