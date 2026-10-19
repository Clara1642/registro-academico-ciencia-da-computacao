#include <stdlib.h>
#include <stdio.h>
typedef struct node {
    struct node* ante;
    int info;
    struct node* prox;
} Node;

typedef struct lde {
    Node* prim;
    Node* ult;
    int qtd;
} LDE;

void initialize (LDE* l) {
    l->prim = NULL;
    l->ult = NULL;
    l->qtd = 0;
}

void exibeOpcoes() {
    printf ("Opcoes \n");
    printf ("1 - Inserir \n");
    printf ("2 - Exibir valores da lista \n"); 
    printf ("3 - Remover valor\n");
    printf ("4 - esvaziar a lista\n");
    printf ("0 - Encerrar o programa \n");
    printf ("Informe a opcao desejada: ");
}

Node* criarNode (int valor) { // cria e preencher um nó e retorna seu endereço
    Node* novo;
    novo = (Node*) malloc (sizeof(Node));
    novo->info = valor;
    novo->ante = NULL;
    novo->prox = NULL;
    return novo;
}

void inserir (LDE* l, int valor) {
    Node* novo, *atual, *anterior;

    if (l->qtd == 0) { // inserção em uma lista vazia
        novo = criarNode(valor);
        l->prim = novo;
        l->ult = novo;
        l->qtd++;
    }
    else if (valor == l->prim->info) {
        printf ("Valor repetido. Inserção não efetuada. \n");
    }
    else if (valor < l->prim->info) { // inserir antes do primeiro
        novo = criarNode(valor);
        novo->prox = l->prim;
        l->prim->ante = novo;
        l->prim = novo;
        l->qtd++;
    }
    else if (valor == l->ult->info) {
        printf ("Valor repetido. Inserção não efetuada. \n");
    }
    else if (valor > l->ult->info) { // inserir após o último
        novo = criarNode(valor);
        l->ult->prox = novo;
        novo->ante = l->ult;
        l->ult = novo;
        l->qtd++;
    }
    else { // inserir no "meio" da lista
        atual = l->prim;
        while (atual != NULL) {
            if (atual->info == valor) {
                printf ("Valor repetido. Inserção não efetuada. \n");
                return; // sai do procedimento de inserção
            }
            else if (atual->info > valor) { // Achou o ponto de inserção: imediatamente antes do ATUAL
                anterior = atual->ante;
                novo = criarNode(valor);
                anterior->prox = novo;
                novo->prox = atual;
                atual->ante = novo;
                novo->ante = anterior;
                l->qtd++;
                return;
            }
            else {
                atual = atual->prox;
            }
        }
    }
}

void listar (LDE* l) {
    Node*aux;
    aux = l->prim;
    if(l->qtd == 0){
        printf("Lista vazia!");
        return;
    }
    else{
        while(aux != NULL){
            printf("%d ",aux->info);
            aux = aux->prox;
        }
    }
    printf("\n");
}
void removerValor(LDE *l,int valor){
    Node *aux, *next;
    int cont = 0;
    aux = l->prim;

    if(l->qtd == 0){
        printf("Lista vazia!!\n");
    }
    
    while(aux != NULL){
        next = aux->prox;
        if(l->qtd == 1 && aux->info == valor){
            free(aux);
            l->prim = NULL;
            l->ult = NULL;
            l->qtd = 0;
            cont++;
        }
        else if(aux->info == valor && l->qtd > 1){
            cont++;
            if(l->prim->info == valor){
                l->prim = l->prim->prox;
                free(aux);
                (l->qtd)--;
                l->prim->ante = NULL;
            }
            else if(l->ult->info == valor){
                l->ult = l->ult->ante;
                free(aux);
                (l->qtd)--;
                l->ult->prox = NULL;
            }
            else{
                aux->ante->prox = aux->prox;
                aux->prox->ante = aux->ante;
                free(aux);
                (l->qtd)--;
            }
        }
        aux = next;
    }
    if(cont == 0){
        printf("Valor nao encontrado na lista!!\n");
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


int main () {
    LDE lista;
    initialize(&lista);
    int op, num,num1;
    do {
        exibeOpcoes();
        scanf ("%d",&op);
        switch (op) {
            case 1: printf ("Informe o numero: ");
                    scanf ("%d",&num);
                    inserir (&lista,num);
                    break;
            case 2: listar (&lista);
                    break;
            case 3:
                printf("Informe o valor que deseja remover: ");
                scanf("%d",&num1);
                removerValor(&lista,num1);
                break;
            case 4:
            esvaziar(&lista);
            printf("Bye bye!!");
            break;
            case 0: printf ("FIM \n");
                    break;
            default: printf ("Opcao invalida \n");
        }
    } while (op != 0);
    return 0;
}