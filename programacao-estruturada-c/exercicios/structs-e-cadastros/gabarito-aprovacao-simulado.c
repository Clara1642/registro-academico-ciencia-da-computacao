#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define Tam 3
#define Tam1 10

void leituraSegura(char nome[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }
}

void preencherGabarito( char gabarito[]){
    int i;
    for(i = 0; i < Tam1; i++){
        printf("informe as resposta %d: ",i + 1);
        scanf("%c",&gabarito[i]);
        getchar();
        gabarito[i] = tolower(gabarito[i]);

        if(gabarito[i] != 'a'&& gabarito[i] != 'b' && gabarito[i] != 'c' && gabarito[i] != 'd' && gabarito[i] != 'e'){
            printf("resposta invalida! \n");
            scanf("%c",&gabarito[i]);
            getchar();
        
        }
    }
}

void preencherResposta(char resposta[][Tam1],char nomes[][81]){
    int i,j;
    for(i = 0; i < Tam; i++){
        printf("infome o nome da pessoa %d: ", i + 1);
        fgets(nomes[i],81,stdin);
        leituraSegura(nomes[i],strlen(nomes[i]));
    
        for(j = 0; j < Tam1; j++){
            printf("informe a resposta de %s para a questao %d: ",nomes[i], j + 1);
            scanf("%c",&resposta[i][j]);
            getchar();

            resposta[i][j] = tolower(resposta[i][j]);
            if(resposta[i][j] != 'a' && resposta[i][j] != 'b' && resposta[i][j] != 'c' && resposta[i][j] != 'd' && resposta[i][j] != 'e'){
            printf("resposta invalida! \n");
            scanf("%c",&resposta[i][j]);
            getchar();
            }
        }    
    }
}

void calculo( char resposta[][Tam1], char gabarito[],int acertos[]){
    int i,j;
    for(i = 0; i < Tam; i++){
        acertos[i] = 0;
        for(j = 0; j < Tam1; j++){
            if(resposta[i][j] == gabarito[j]){
                acertos[i]++;
            }
        }
    }
}

void exibir(char nomes[][81], int acertos[]){
    int i;
    for(i = 0; i < Tam; i++){
        if(acertos[i] >= 7){
            printf("O aluno %s obteve nota %d e esta aprovado! \n",nomes[i],acertos[i]);
        }
        else{
            printf("O aluno %s obteve nota %d e foi reprovado! \n",nomes[i],acertos[i]);
        }
    }
}
int main(){
    char gabarito[Tam1];
    char resposta[50][Tam1];
    char nomes[Tam][81];
    int acertos[Tam];

    printf("preencha o gabarito. \n");
    preencherGabarito(gabarito);

    printf("preencha as respostas. \n");
    preencherResposta(resposta,nomes);

    calculo(resposta,gabarito,acertos);

    exibir(nomes,acertos);
    
    return 0;
}
