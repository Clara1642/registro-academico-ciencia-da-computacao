#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node {
    struct node* ante;
    char info[100];
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
    printf ("1 - Inserir nome \n");
    printf ("2 - Exibir nomes da lista \n"); 
    printf ("3 - Remover nome \n"); 
    printf ("4 - Esvaziar lista \n"); 
    printf ("0 - Encerrar o programa \n");
    printf ("Informe a opcao desejada: ");
}

Node* criarNode (char nome[100]) { // cria e preencher um nó e retorna seu endereço
    Node* novo;
    novo = (Node*) malloc (sizeof(Node));
    strcpy(novo->info,nome);
    novo->ante = NULL;
    novo->prox = NULL;
    return novo;
}

void inserir (LDE* l,char nome[]) {
    Node* novo, *atual, *anterior;

    if (l->qtd == 0) { // inserção em uma lista vazia
        novo = criarNode(nome);
        l->prim = novo;
        l->ult = novo;
        l->qtd++;
    }
    else if (strcmp(l->prim->info,nome) == 0) {
        printf ("Valor repetido. Inserção não efetuada. \n");
    }
    else if  (strcmp(nome,l->prim->info) < 0) { // inserir antes do primeiro
        novo = criarNode(nome);
        novo->prox = l->prim;
        l->prim->ante = novo;
        l->prim = novo;
        l->qtd++;
    }
    else if (strcmp(nome,l->ult->info) == 0) {
        printf ("Valor repetido. Inserção não efetuada. \n");
    }
    else if (strcmp(nome,l->ult->info) > 0) { // inserir após o último
        novo = criarNode(nome);
        l->ult->prox = novo;
        novo->ante = l->ult;
        l->ult = novo;
        l->qtd++;
    }
    else { // inserir no "meio" da lista
        atual = l->prim;
        while (atual != NULL) {
            if (strcmp(atual->info,nome) == 0) {
                printf ("Valor repetido. Inserção não efetuada. \n");
                return; // sai do procedimento de inserção
            }
            else if (strcmp(atual->info,nome) > 0) { // Achou o ponto de inserção: imediatamente antes do ATUAL
                anterior = atual->ante;
                novo = criarNode(nome);
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
            printf("%s ",aux->info);
            aux = aux->prox;
        }
    }
    printf("\n");
}

void leituraSegura(char nome[]){
    int TAM = strlen(nome);
    for(int i = 0; i < TAM;i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }
}

void removerNome(LDE *l,char nome[]){
    Node *aux, *next;
    int cont = 0;
    aux = l->prim;

    if(l->qtd == 0){
        printf("Lista vazia!!\n");
    }
    
    while(aux != NULL){
        next = aux->prox;
        if(l->qtd == 1 && strcmp(aux->info,nome) == 0){
            free(aux);
            l->prim = NULL;
            l->ult = NULL;
            l->qtd = 0;
            cont++;
        }
        else if(strcmp(aux->info,nome) == 0 && l->qtd > 1){
            cont++;
            if(strcmp(l->prim->info,nome) == 0){
                l->prim = l->prim->prox;
                free(aux);
                (l->qtd)--;
                l->prim->ante = NULL;
            }
            else if(strcmp(l->ult->info,nome) == 0){
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
        printf("Nome nao encontrado na lista!!\n");
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
    int op;
    char nome[100],nome1[100];
    do {
        exibeOpcoes();
        scanf ("%d",&op);
        getchar();
        switch (op) {
            case 1: printf ("Informe o nome: ");
                    fgets(nome,100,stdin);
                    leituraSegura(nome);
                    inserir (&lista,nome);
                    break;
            case 2: listar (&lista);
                    break;
            case 3: printf("Informe o nome que deseja remover: ");
                    fgets(nome1,100,stdin); 
                    leituraSegura(nome1);
                    removerNome(&lista,nome1);
                    break;
            case 4:
                esvaziar(&lista);
                break;
            case 0: printf ("FIM \n");
                    break;
            default: printf ("Opcao invalida \n");
        }
    } while (op != 0);
    return 0;
}