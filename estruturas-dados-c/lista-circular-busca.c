#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct node{
    int info;
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

Node* busca(LDEC l, int v) {
    Node *aux;
    aux = l.inicio;

    if (l.qtd == 0) {
        return NULL;
    }

    do {    
        if (aux->info == v) {
            return aux;
        }
        aux = aux->prox;

    } while(aux != l.inicio);

    return NULL;
}

void inserirFinal(LDEC *l, int v) {
    Node *aux, *retorno;
    retorno = busca(*l, v);

    if (retorno == NULL) {
        aux = (Node*) malloc(sizeof(Node));
        aux->info = v;
        if (l->qtd == 0) {
            l->inicio= aux;
            l->fim = aux;
            (l->qtd)++;
            l->inicio->ant = l->fim;
            l->fim->prox = l->inicio;
        }
        else {
            aux->ant = l->fim;
            l->fim->prox = aux;
            l->fim = aux;
            (l->qtd)++;
            l->inicio->ant = l->fim;
            l->fim->prox = l->inicio;
        }
    }
    else {
        printf("Valor presente na lista!\n");
    }
}

void exibir(LDEC l) {
    Node *aux;
    aux = l.inicio;
    
    if (l.qtd == 0) {
        printf("Lista vazia!\n");
        return;
    }

    do {
        printf("%d ", aux->info);
        aux = aux->prox;
    } while(aux != l.inicio);
}

void removerTodos(LDEC *l) {
    Node *aux, *aux1;
    if(l->qtd == 0){
        return;
    }
    aux = l->inicio;
    do {    
        aux1 = aux;
        aux = aux->prox;
        free(aux1);
    } while (aux != l->inicio);
    l->inicio = NULL;
    l->fim = NULL;
    l->qtd = 0;
}

int compararListas(LDEC l1,LDEC l2){
    Node *aux1,*aux2;
    int cont = 0;

    if(l1.qtd == 0 || l2.qtd == 0){
        return (l1.qtd == l2.qtd) ? TRUE : FALSE;
    }

    aux1 = l1.inicio;
    aux2 = l2.inicio;
    do{
        if(aux1->info == aux2->info){
            cont++;
        }
        else{
            return FALSE;
        }
        aux1 = aux1->prox;
        aux2 = aux2->prox;
    }while(aux1 != l1.inicio && aux2 != l2.inicio);

    if(cont == l1.qtd && cont == l2.qtd){
        return TRUE;
    }
    return FALSE;
}

void concatenacao(LDEC *l1,LDEC *l2){
    Node *aux1,*aux2;
    if(l1->qtd == 0){
        return;
    }
    else if(l2->qtd == 0){
        return;
    }

    l1->fim->prox = l2->inicio;
    l2->inicio->ant = l1->fim;

    l1->qtd = l1->qtd + l2->qtd;
    l1->fim = l2->fim;

    l1->inicio->ant = l1->fim;
    l1->fim->prox = l1->inicio;

    aux1 = l2->inicio;
    do{
        aux2 = aux1;
        aux1 = aux1->prox;
        free(aux2);

    }while(aux1 != l2->inicio);

    l2->inicio = NULL;
    l2->fim = NULL;
    l2->qtd = 0;

}

void copiaInversa(LDEC *l1,LDEC *l2){
    Node *aux;
    aux = l1->fim;
    if(l1->qtd == 0){
        return;
    }
    do{
        inserirFinal(l2,aux->info);
        aux = aux->ant;
    }while(aux != l1->fim);
    
}

void exibirOpcoes() {
    printf("\n\nOpcoes:\n");
    printf("1 - Inserir valor no final da lista\n");
    printf("2 - Exibir todos os valores da lista\n");
    printf("3 - Desalocar lista\n");
    printf("4 - Comparar listas\n");
    printf("5- Concatenar a lista\n");
    printf("6- Copia inversa\n");
    printf("\nInforme a opcao desejada: ");
}

int main() {
    LDEC lista1, lista2, listaCopia;
    int op, op1, op2, op3, num,retorno;
    initialize(&lista1);
    initialize(&lista2);
    initialize(&listaCopia);

    do {
        exibirOpcoes();
        scanf("%d", &op);
        
        switch(op) {
            case 1:
                printf("\n1 - Lista 1\n");
                printf("2 - Lista 2\n");
                printf("0 - Sair\n");
                printf("Digite qual lista deseja preencher: ");
                scanf("%d", &op1);
                switch(op1) {
                    case 1:
                        printf("Informe o valor(lista 1): ");
                        scanf("%d", &num);
                        inserirFinal(&lista1, num);
                        break;
                    case 2:
                        printf("Informe o valor(lista 2): ");
                        scanf("%d", &num);
                        inserirFinal(&lista2, num);
                        break;
                    case 0:
                        break;
                    default:
                        printf("Opcao invalida!\n");
                }
                break;
            case 2:
                printf("\n1 - Lista 1\n");
                printf("2 - Lista 2\n");
                printf("3 - Lista copia\n");
                printf("0 - Sair\n");
                printf("Digite qual lista deseja ver: ");
                scanf("%d", &op2);
                switch(op2) {
                    case 1:
                        exibir(lista1);
                        break;
                    case 2:
                        exibir(lista2);
                        break;
                    case 3:
                        exibir(listaCopia);
                        break;
                    case 0:
                        break;
                    default:
                        printf("Opcao invalida!\n");
                }               
                break;
            case 3:
                printf("\n1 - Lista 1\n");
                printf("2 - Lista 2\n");
                printf("0 - Sair\n");
                printf("Digite qual lista deseja esvaziar: ");
                scanf("%d", &op3);
                switch(op3) {
                    case 1:
                        removerTodos(&lista1);
                        break;
                    case 2:
                        removerTodos(&lista2);
                        break;
                    case 0:
                        break;
                    default:
                        printf("Opcao invalida!\n");
                }
                break;
            case 4:
                retorno = compararListas(lista1,lista2);
                if(retorno == TRUE){
                    printf("As listas sao iguais.\n");
                }
                else{
                    printf("As listas sao diferentes.\n");
                }
                break;

            case 5:
                concatenacao(&lista1,&listaCopia);
                printf("A concatencao foi realizada com sucessso!");
                break;

            case 6:
                printf("\n1 - Lista 1\n");
                printf("2 - Lista 2\n");
                printf("0 - Sair\n");
                printf("Digite qual lista deseja fazer a copia inversa: ");
                scanf("%d", &op3);
                switch(op3) {
                    case 1:
                        copiaInversa(&lista1,&listaCopia);
                        break;
                    case 2:
                        copiaInversa(&lista2,&listaCopia);
                        break;
                    case 0:
                        break;
                    default:
                        printf("Opcao invalida!\n");
                }
                break;
            case 0:
                printf("FIM\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (op != 0);

    return 0;
}