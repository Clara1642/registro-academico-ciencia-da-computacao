#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#define TRUE 1
#define FALSE 0

typedef struct stackint{

    int valores[TAM];
    int topo;

}Stackint;

void initialize(Stackint *p){
    int i;
    p ->topo = -1;
    for(i = 0; i < TAM;i++){
        p ->valores[i] = 0;
    }
  
}

void push(Stackint *p, int num){
    (p ->topo)++;
    p->valores[p->topo] = num;

}

int pop(Stackint *p){
    int v = p->valores[p->topo];
    (p->topo) --;
    return v;
}

int top(Stackint p){
    return p.valores[p.topo];
}

int isEmpty(Stackint p){
    if(p.topo == -1){
        return TRUE;

    }
    else{
        return FALSE;
    }

}
int isfull(Stackint p){
    if(p.topo == TAM - 1){
        return TRUE;
    }
    else{
        return FALSE;
    }


}

void exibiropcoes(){
    printf("1- Empilhar \n");
    printf("2- Desempilhar \n");
    printf("3- ver o que esta no topo \n");
    printf("4- Encerrar programa \n");
    printf("Informe o que deseja: ");

}


int main(){
    Stackint pilha;
    initialize(&pilha);
    int op,n1,n2;
    do{
        exibiropcoes();
        scanf("%d",&op);
        switch(op){
            case 1:
                if(isfull(pilha) == FALSE){
                    printf("informe o numero: \n");
                    scanf("%d",&n1);
                    push(&pilha,n1); 
                }
                break;
            case 2:
                if(isEmpty(pilha) == FALSE ){
                    pop(&pilha);
                }
                break;
            case 3:
                if(isEmpty(pilha) == FALSE){
                    n2 = top(pilha);
                    printf("\n o valor do topo eh: %d \n", n2);
                }
                else{
                    printf("\n Pilha vazia! \n");
                }
                break;
        }
    }while(op != 4);

    return 0;
}