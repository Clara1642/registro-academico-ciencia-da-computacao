#include <stdio.h>

void insercaovalores(float vet[10],int *cont,float n){
    int i;

    for(i = 0; i < 10;i++){
        if(vet[0] == 0){
            printf("vetor vazio. \n");
        }
        if(vet[9] > 0 || vet[9] < 0){
            printf("vetor cheio. \n");
            break;
        }
        printf("informe os valores: \n");
        scanf("%f",&vet[i]);
        (*cont)++;
         
        if(vet[i] < 0 && n == 1 ){
            printf("informe os valores positivos: \n");
            scanf("%f",&vet[i]);  
        }

        if(vet[i] >= 1 && n == 3){
            printf("informe os valores negativos: \n");
            scanf("%f",&vet[i]);

        }
    
            for(int j = 0;j < i;j++){
                if(vet[i] == vet[j]){
                    printf("invalido. \n");
                    printf("informe os valores diferentes: \n");
                    scanf("%f",&vet[i]);
                    break;
                }
         
            }
     

        
    }   
}  
    
void exibir(float vet[10],int *cont){
    int i;
    for( i = 0; i < *cont;i++){
        printf("%.2f ",vet[i]);
    }


}

int busca(float vet[10],int *cont,float n){
    int i,encontrou = 0;
    for(i = 0; i < *cont;i++){
        if(vet[i] == n){
            encontrou = 1;
            break;

        }   
    }
    return encontrou;
}
void exibirOpcoes(){

    printf("\n1- depositar valores no vetor de positivos.\n");
    printf("2- exibir valores do vetor positivos.\n");
    printf("3- depositar valores no vetor negativo.\n");
    printf("4- exibir valores do vetor negativo.\n");
    printf("5- buscar valor no vetor positivo.\n");
    printf("6- buscar valor no vetor negativo.\n");
    printf("7- programa encerrado.\n");
}

int main(){
     float positivo[10] = {0};
     float negativo[10] = {0};
     int contp = 0,contn = 0;
     int op = 0;
     float valorb;
     float x1,x2;


    while(op != 7){
    exibirOpcoes();
    printf("escolha opcao: \n");
    scanf("%d",&op);

    
        switch(op){

        case 1:
            insercaovalores(positivo,&contp,op);
            break;

        case 2:
            exibir(positivo,&contp);
            break;
        
        case 3:
            insercaovalores(negativo,&contn,op);
             break;

        case 4: 
            exibir(negativo,&contn);
            break;

            
        case 5: 
            printf("digite o valor que deseja buscar: \n");
            scanf("%f",&valorb);
            x1 = busca(positivo,&contp,valorb);
            if(x1 == 1){
                printf("o valor foi encontrado no vetor. \n");
            }
            if(x1 == 0){
                printf("o valor nao foi encontrado. \n");
            }
        break;

        case 6:
            printf("digite o valor que deseja buscar: \n");
            scanf("%f",&valorb);
             x2 = busca(negativo,&contn,valorb);
            if(x2 == 1){
                printf("o valor foi encontrado no vetor. \n");
            }
            if(x2 == 0){
                printf("o valor nao foi encontrado. \n");
            }
            break;

        case 7: 
            printf("fim. \n");
            break;

        default:
            break;

        }

    }
    return 0;
}

