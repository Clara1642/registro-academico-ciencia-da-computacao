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
}Lde;

void initialize(Lde *l){
    l->prim = NULL;
    l->ult = NULL;
    l->qtd = 0;
}

void inserirInicio(Lde *l,int valor){
    Node *novo;
    novo = (Node*)malloc(sizeof(Node));
    novo->ante = NULL;
    novo->info = valor;

    if(l->qtd == 0){
        l->prim = novo;
        l->ult = novo;
        (l->qtd)++;
        novo->prox = NULL;
    }
    else{
        novo->prox = l->prim;
        l->prim->ante = novo;
        l->prim = novo;
        (l->qtd)++;

    }
}

void inserirFinal(Lde *l,int valor){
    Node *novo;
    novo = (Node*)malloc(sizeof(Node));
    novo->info = valor;
    novo->prox = NULL;

    if(l->qtd == 0){
        l->prim = novo;
        l->ult = novo;
        novo->ante = NULL;
        (l->qtd)++;
    }

    else{
        novo->ante = l->ult;
        l->ult->prox = novo;
        l->ult = novo;
        (l->qtd)++;
    }
}

void exibirInicioaoFim(Lde l){
    Node *aux;
    aux = l.prim;

    if(l.qtd == 0){
        printf("Lista vazia!!!");
    }
    else{
        while(aux != NULL){
            printf("%d ",aux->info);
            aux = aux->prox;
        }
    }
}

void exibirListaContrario(Lde l){
    Node *aux;
    aux = l.ult;
    if(l.qtd == 0){
        printf("Lista vazia!!");
    }
    else{
        while(aux != NULL){
        printf("%d ",aux->info);
        aux = aux->ante;
        }
    }
}

void removerPrimeiro(Lde *l){
    Node* aux;
    aux = l->prim;

    if(l->qtd == 0){
        printf("Lista vazia!!!");
        return;
    }

    if(l->qtd == 1){
        free(aux);
        l->prim = NULL;
        l->ult = NULL;
        l->qtd = 0;
        printf("Valor removido!!!");
        return;
    }

    l->prim = l->prim->prox;
    free(aux);
    l->prim->ante = NULL;
    (l->qtd)--;
}

void removerUltimo(Lde *l){
    Node *aux, *aux1;
    aux = l->ult;

    if(l->qtd == 0){
        printf("Lista vazia!!");
        return;
    }

    if(l->qtd == 1){
        free(aux);
        l->prim = NULL;
        l->ult = NULL;
        l->qtd = 0;
        printf("Valor removido!!!");
        return;
    }

    aux1 = aux;
    aux1 = aux->ante;
    aux1->prox = NULL;
    free(aux);
    l->ult = aux1;
    (l->qtd)--;
}

int qtdvalor(Lde l,int valor){
    Node *aux;
    int cont = 0;
    aux = l.prim;
   
    while(aux != NULL){
        if(aux->info == valor){
            cont++;
        }
        aux = aux->prox;
    }
    return cont;
}

void removerValor(Lde *l, int valor) {
    Node *aux, *aux1;

    if (qtdvalor(*l, valor) == 0) {
        printf("Valor nao encontrado na lista! \n");
    }
    else if (qtdvalor(*l, valor) > 0) {
        aux = l->prim;
        while (aux != NULL) {
            if (aux->info == valor) {
                if (l->qtd == 1) {
                    aux1 = aux;
                    free(aux1);
                    l->prim = NULL;
                    l->ult = NULL;
                    l->qtd = 0;
                    aux = NULL;
                }
                else if (aux == l->prim && l->qtd > 1) {
                    l->prim = l->prim->prox;
                    aux1 = aux;
                    aux = l->prim;
                    free(aux1);
                    l->prim->ante = NULL;
                    (l->qtd)--;
                }   
                else if (aux == l->ult && l->qtd > 1) {
                    l->ult = l->ult->ante;
                    aux1 = aux;
                    aux = l->ult;
                    free(aux1);
                    l->ult->prox = NULL;
                    (l->qtd)--;
                }
                else {
                    aux->ante->prox = aux->prox;
                    aux->prox->ante = aux->ante;
                    aux1 = aux;
                    aux = aux->ante;
                    free(aux1);
                    (l->qtd)--;
                }
            }
            else {
                aux = aux->prox;
            }
        }
        printf("Valor removido! \n");
    }
}
          
void exibirOpcao(){
    printf("\n1-inserir valor no inicio\n");
    printf("2- Inserir valor no final\n");
    printf("3- Exibir do inicio ao fim\n");
    printf("4- Exibir do fim ao inicio\n");
    printf("5- Remover primeiro\n");
    printf("6- Remover ultimo\n");
    printf("7- Remover valor\n");
    printf("8- qtd. de vezes de um valor\n");
    printf("0- Sair do programa");
    printf("\n\nInfome a opcao:");
}


int main(){
    Lde lista;
    initialize(&lista);
    int op,num1,num2,num3,num4,retorno;
    do{
        exibirOpcao();
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("informe o valor: ");
                scanf("%d",&num1);
                inserirInicio(&lista,num1);
                break;

            case 2:
                printf("Informe o valor: ");
                scanf("%d",&num2);
                inserirFinal(&lista,num2);
                break;

            case 3:
                exibirInicioaoFim(lista);
                break;
            
            case 4:
                exibirListaContrario(lista);
                break;
            
            case 5:
                removerPrimeiro(&lista);
                break;

            case 6:
                removerUltimo(&lista);
                break;

            case 7:
                printf("Informe o valor que deseja remover: ");
                scanf("%d",&num3);
                removerValor(&lista,num3);
                break;

            case 8:
                printf("Digite o valor: ");
                scanf("%d",&num4);
                retorno = qtdvalor(lista,num4);
                printf("Qtd. de vezes: %d",retorno);
                break;

            case 0:
            printf("Bye bye!!!");
            break;
        }

    }while(op != 0);
    return 0;
}