#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *ant;
    int info;
    struct node *prox;
}Node;

typedef struct lde{
    Node *inicio;
    Node *fim;
    int qtd;
}Lde;

void initialize(Lde *l){
    l->inicio = NULL;
    l->fim = NULL;
    l->qtd = 0;
}


Node* busca(Lde l,int valor){
    Node *aux;
    aux = l.inicio;

    while(aux != NULL){
        if(aux->info == valor){
            return aux;
        }
        aux = aux->prox;
    }
    return NULL;
}

void inserirInicio(Lde *l,int valor){
    Node *novo;
    if(busca(*l,valor) == NULL){
        novo = (Node*)malloc(sizeof(Node));
        novo->ant = NULL;
        novo->info = valor;

        if(l->qtd == 0){
            l->inicio = novo;
            l->fim = novo;
            novo->prox = NULL;
            (l->qtd)++;
        }
        else{
            novo->prox = l->inicio;
            l->inicio->ant = novo;
            l->inicio = novo;
            (l->qtd)++;
        }
    }
    else{
        printf("Valor encontrado na lista!!\n");
    }
}

void inserirFinal(Lde *l,int valor){
    if(busca(*l,valor) == NULL){
        Node *novo;
        novo =(Node*)malloc(sizeof(Node));
        novo->info = valor;
        novo->prox = NULL;

        if(l->qtd == 0){
            l->inicio = novo;
            l->fim = novo;
            novo->ant = NULL;
            (l->qtd)++;
        }
        else{
            l->fim->prox = novo;
            novo->ant = l->fim;
            l->fim = novo;
            (l->qtd)++;
        }
    }
    else{
        printf("Valor encontrado na lista!!!\n");
    }
}

void exibir(Lde l){
    Node *aux;
    aux = l.inicio;
    if(l.qtd == 0){
        printf("Lista vazia!!!\n");
        return;
    }
    while(aux != NULL){
        printf("%d ",aux->info);
        aux = aux->prox;
    }
    printf("\n");
}

void removerValor(Lde *l,int valor){
    Node *aux;
    if(l->qtd == 0){
        printf("Lista vazia!!!\n");
        return;
    }

    if(busca(*l,valor) == NULL){
        printf("Valor nao encontrado!!!\n");
    }
    else{
        aux = busca(*l,valor);

        if(l->qtd == 1){
            free(aux);
            l->inicio = NULL;
            l->fim = NULL;
            l->qtd = 0;
            printf("Valor removido!!!\n");
        }
        else if(l->inicio == aux && l->qtd > 1){
            l->inicio = l->inicio->prox;
            l->inicio->ant = NULL;
            free(aux);
            (l->qtd)--;
            printf("Valor removido!!!\n");
        }
        else if(l->fim == aux && l->qtd > 1){
            l->fim = l->fim->ant;
            l->fim->prox = NULL;
            free(aux);
            (l->qtd)--;
            printf("Valor removido!!!\n");
        }
        else{
            aux->ant->prox = aux->prox;
            aux->prox->ant = aux->ant;
            free(aux);
            (l->qtd)--;
            printf("Valor removido!!!\n");
        }
    }
}

void copiaIdentica(Lde *l,Lde *listacopia){
    Node *aux;
    aux = l->inicio;

    while(aux != NULL){
        inserirFinal(listacopia,aux->info);
        aux = aux->prox;
    }
    printf("Copia realizada!!!\n");
}

void copiaInvertida(Lde *l,Lde *listainvertida){
    Node *aux;
    aux = l->fim;

    while(aux != NULL){
        inserirFinal(listainvertida,aux->info);
        aux = aux->ant;
    }
    printf("Lista invertida realizada!!!\n");
}

void esvaziar(Lde *l){
    Node *aux,*aux1;
    aux = l->inicio;
    if(l->qtd == 0){
        printf("Lista vazia!!!\n");
        return;
    }
    while(aux != NULL){
        aux1 = aux;
        aux = aux->prox;
        free(aux1);
        (l->qtd)--;
        
    }
    l->inicio = NULL;
    l->fim = NULL;
    printf("Lista esvaziada!!!\n");
}

void exibirOpcao(){
    printf("\nOpcoes\n");
    printf("1- Inserir no inicio da lista\n");
    printf("2- Inserir no final da lista\n");
    printf("3- Exibir do primeiro ao ultimo\n");
    printf("4- Procurar valor na lista\n");
    printf("5- Remover um valor especifico da lista\n");
    printf("6- Fazer uma copia da lista\n");
    printf("7- Fazer uma copia invertida\n");
    printf("8- esvaziar a lista\n");
}

int main(){
    Lde lista,listaCopia,listaInvertida;
    int op,op1,op2,num1,num2,num3,num4;
    Node *result;
    initialize(&lista);
    initialize(&listaCopia);
    initialize(&listaInvertida);

    do{
        exibirOpcao();
        printf("Informe o que deseja: \n");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("Informe o valor: \n");
                scanf("%d",&num1);
                inserirInicio(&lista,num1);
                break;

            case 2:
                printf("Informe o valor: \n");
                scanf("%d",&num2);
                inserirFinal(&lista,num2);
                break;

            case 3:
                printf("\n1- Ver lista padrao\n");
                printf("2- Ver lista copia\n");
                printf("3- Ver lista invertida\n");
                printf("Digite qual opcao deseja ver: ");
                scanf("%d",&op1);
                switch(op1){
                    case 1:
                        exibir(lista);
                        break;
                    case 2:
                        exibir(listaCopia);
                        break;
                    case 3:
                        exibir(listaInvertida);
                        break;
                    default:
                        printf("opcao invalida!\n");
                }
                break;
            case 4:
                printf("Informe o valor que deseja buscar: ");
                scanf("%d",&num3);
                result = busca(lista,num3);
                if(result != NULL){
                    printf("Valor encontrado!!!\n");
                }
                else{
                    printf("Valor nao encontrado!\n");
                }
                break;

            case 5:
                printf("Digite o valor que deseja remover: ");
                scanf("%d",&num4);
                removerValor(&lista,num4);
                break;

            case 6:
                copiaIdentica(&lista,&listaCopia);
                break;

            case 7:
                copiaInvertida(&lista,&listaInvertida);
                break;
            
            case 8:
                printf("\n1- Esvaziar lista padrao\n");
                printf("2- Esvaziar lista copia\n");
                printf("3- Esvaziar lista invertida\n");
                printf("Digite qual lista deseja esvaziar: ");
                scanf("%d",&op2);
                switch(op2){
                    case 1:
                        esvaziar(&lista);
                        break;
                    case 2:
                        esvaziar(&listaCopia);
                        break;
                    case 3:
                        esvaziar(&listaInvertida);
                        break;
                    default:
                        printf("opcao invalida!\n");
                }
                break;

            default:
                printf("opcao invalida");
                break;       
        }
    }while(op != 0);
    return 0;
}