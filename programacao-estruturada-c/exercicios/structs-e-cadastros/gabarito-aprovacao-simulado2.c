#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 10
#define tam 3

void leituraSegura(char nome[],int tam1){
    int i;
    for(i = 0; i < tam1; i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }
}

void preencherGabarito(char gabarito[TAM]){
    int i;
    for(i = 0; i < TAM; i++){
        printf("Informe a resposta %d \n",i + 1);
        scanf("%c",&gabarito[i]);
        getchar();
        gabarito[i] = tolower(gabarito[i]);
        if(gabarito[i] != 'a' && gabarito[i] != 'b' && gabarito[i] != 'c' && gabarito[i] != 'd' && gabarito[i] != 'e'){
            printf("Invalido! informe novamente. \n");
            scanf("%c",&gabarito[i]);
            getchar();
        }
    }
}

void preencherMatriz(char resposta[tam][TAM],char nomes[tam][81]){
    int i,j;
    for(i = 0; i < tam; i++){
        printf("informe o nome do aluno %d ",i + 1);
        fgets(nomes[i],81,stdin);
        leituraSegura(nomes[i],strlen(nomes[i]));

        for(j = 0; j < TAM; j++){
            printf("informe a resposta de %s para a questao %d: ",nomes[i],j + 1);
            scanf("%c",&resposta[i][j]);
            getchar();
            resposta[i][j] = tolower(resposta[i][j]);

            if(resposta[i][j] != 'a' && resposta[i][j] != 'b' && resposta[i][j] != 'c' && resposta[i][j] != 'd' && resposta[i][j] != 'e'){
                printf("Invalido! informe novamente. \n");
                scanf("%c",&resposta[i][j]);
                getchar();
            }
        }    
    }
}

void calculo(char resposta[tam][TAM], char gabarito[TAM],int acertos[]){
    int i,j;
    for(i = 0; i < tam; i++){
        for(j = 0; j < TAM; j++){
            if(resposta[i][j] == gabarito[j]){
                acertos[i]++;
            }
        }
    }
}
void exibir(char nomes[tam][81],int acertos[]){
    int i;
    for(i = 0; i < tam; i++){
        if(acertos[i] >= 7){
            printf("O aluno %s obteve nota %d e esta aprovado. \n",nomes[i],acertos[i]);
        }
        else{
            printf("O aluno %s obteve nota %d e esta reprovado. \n",nomes[i],acertos[i]);
        }
    }
}

int main(){
    char gabarito[TAM];
    char resposta[tam][TAM];
    char nomes[tam][81];
    int acertos[tam] = {0};

    preencherGabarito(gabarito);
    printf("o vetor gabarito foi preenchido com sucesso! \n");

    preencherMatriz(resposta,nomes);
    printf("A matriz resposta foi preenchida com sucesso! \n");

    calculo(resposta,gabarito,acertos);
    exibir(nomes,acertos);

    return 0;
}
