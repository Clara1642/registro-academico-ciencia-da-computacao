#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 5

void leituraSegura(char vet[][101]){
    int i,j,tam;
    for(i = 0; i < TAM; i++){
        tam = strlen(vet[i]);
        for(j = 0; j < tam; j++){
            if(vet[i][j] == '\n'){
                vet[i][j] = '\0';
            }
        }
    }
}

int nomeValido(char nome[101]){
    int i,espaco = 1,tam = strlen(nome);
    for(i = 0; i < tam; i++){
        if(!isalpha((unsigned char)nome[i]) && !isspace((unsigned char)nome[i])){
            espaco = 0;
        }
    }
    return espaco;
}
void preencher(char vet[][101]) {
    int i;

    for(i = 0; i < TAM; i++) {
        printf("Informe o nome: \n");
        fgets(vet[i], 101, stdin);
        leituraSegura(vet);

        // if(!nomeValido(vet[i])){
        //     printf("Nome invalido! informe novamente. \n");
        //     fgets(vet[i], 101, stdin);
        //     leituraSegura(vet);
        // }
        //     for(j = 0; j < i; j++){
        //         if(strcmp(vet[i], vet[j]) == 0) {
        //             printf("Nome ja existe! Digite novamente:\n");
        //             fgets(vet[i], 101, stdin);
        //             leituraSegura(vet);
        //             break;
        //         }
        //     }

    }
}
void ordenarVetor(char vet[][101]){
    int i, fim, pos = 0;
	char chave[101];
    int troca;
    fim = TAM - 2;
    do {
        troca = 0;
        for (i = 0; i <= fim; i++)  {
            if (strcmp (vet[i], vet[i+1]) > 0)  {
                strcpy(chave, vet[i]);
                strcpy(vet[i], vet[i+1]);
                strcpy(vet[i+1], chave);
                pos = i;
                troca = 1;
            }
        }
        fim = pos - 1;
    } while (troca == 1);
}

void exibir(char vet[][101]){
    int i;
    for(i = 0; i < TAM; i++){
        printf("%s\n",vet[i]);
    }
}

int buscarString(char vet[][101], char nome[101]){
    int i,j,tam = strlen(nome),achou = - 1;
    for(j = 0; j < tam; j++){
        if(nome[j] == '\n'){
            nome[j] = '\0';
        }
    }
        for(i = 0; i < TAM; i++){
            if(strcmp(vet[i],nome) == 0){
                achou = 1;
                break;
            }
        }
            if(achou == 1){
                return i;
            }
            else{
                 return - 1;
            }
}
int main(){
    char vet[TAM][101],nome[101];
    int pos;
    preencher(vet);
    printf("vetor preenchido. \n");
    ordenarVetor(vet);
    exibir(vet);
    printf("informe o nome que deseja buscar: \n");
    fgets(nome,101,stdin);
    pos = buscarString(vet,nome);
    if(pos >= 0){
        printf("O nome foi encontrado no vetor. A posicao eh: %d \n",pos);

    }
    else{
        printf("Nao foi encontrado no vetor. \n");
    }

    return 0;
}
