#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define TAM 10


typedef struct queueInt{

    int valores[TAM];
    int inicio,fim;

}QueueInt;


void Initialize(QueueInt *f){
    int i;
    f->inicio = 0;
    f->fim = -1;
    
    for(i = 0; i < TAM; i++){
        f->valores[i] = 0;
    }
}

int Isempty(QueueInt f){
    if(f.inicio > f.fim){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int Isfull(QueueInt f){
    if(f.fim == TAM - 1){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int Head(QueueInt f){
    return f.valores[f.inicio];
}

void Enqueue(QueueInt *f,int v){
    (f->fim)++;
    f->valores[f->fim] = v;
}

int Dequeue(QueueInt *f){
    int i, valor;
    valor = f->valores[f->inicio];

    for(i = 0; i < f->fim; i++){
        f->valores[i] = f->valores[i + 1];
    }

    f->valores[f->fim] = 0;
    (f->fim)--;
    
    return valor;
}

void exibiropcoes(){
    printf("1- Enfileirar.\n");
    printf("2- Desenfileirar.\n");
    printf("3- Ver o inicio. \n");
    printf("0- Encerrar programa.\n");
    printf(" \nDigite o que deseja: ");
}
int main(){
    QueueInt minhaFila;

    int op,val,n,n1;

    Initialize(&minhaFila);

    do{
        exibiropcoes();
        scanf("%d",&op);

        switch(op){
            case 1:
            if(Isfull(minhaFila) == FALSE){
                
                printf("Digite o valor: ");
                scanf("%d",&val);
                Enqueue(&minhaFila,val);
            } 

            else{
                printf("Fila cheia! ");
            }
            break;
        
            case 2:

            if(Isempty(minhaFila) == TRUE ){
                printf("Fila vazia! ");
            }
            else{
               n = Dequeue(&minhaFila);
               printf("Valor desenfileirado: %d \n",n);
            }
            break;

            case 3:
            if(Isempty(minhaFila) == TRUE){
                printf("Fila vazia! ");
            }
            else{
                n1 = Head(minhaFila);
                printf("\nValor do inicio: %d \n",n1);
            }
            break;

            default:
                break;
        }
    }while(op != 0);

    return 0;
}