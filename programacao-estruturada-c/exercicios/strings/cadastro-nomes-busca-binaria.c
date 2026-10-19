#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 5

void leiturasegura(char nome[]){
    int tam = strlen(nome);
        if(nome[tam - 1] == '\n'){
        nome[tam - 1] = '\0';

    }
}
void preencher(char nomes[][101]){

    int i, j, k, l;
    int contL = 0;
    int contE = 0;

    for (i = 0; i < TAM; i++) {
        contE = 0;
        contL = 0;
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(nomes[i], 101, stdin);
        leiturasegura(nomes[i]);

            for (l = 0; l < (int)strlen(nomes[i]); l++) {
                if (isspace((unsigned char)nomes[i][l])) {
                    contE++;
                }
            }

            for (k = 0; k < (int)strlen(nomes[i]); k++) {
                if (isalpha((unsigned char)nomes[i][k])) {
                    contL++;
                }
            }

            for (j = 0; j < i; j++) {
                if (strcmp(nomes[i], nomes[j]) == 0) {
                    printf("Nome repetido! Digite um nome diferente: ");
                    fgets(nomes[i], 101, stdin);
                    leiturasegura(nomes[i]);
                }

            }

        if (contE + contL != (int)strlen(nomes[i]) || contE == 0) {
            printf("Nome invalido! Digite um nome valido: ");
            fgets(nomes[i], 101, stdin);
            leiturasegura(nomes[i]);

        }
    }
}
void ordernarVetor(char nomes[][101], int n){
    int i,pos = 0,fim;
    int troca;
    char chave[101];
    fim = TAM - 2;
    do{
        troca = 0;
        for(i = 0; i <= fim; i++){
            if(strcmp(nomes[i],nomes[i + 1]) < 0){
                strcpy(chave,nomes[i]);
                strcpy(nomes[i],nomes[i + 1]);
                strcpy(nomes[i + 1],chave);
                pos = i;
                troca = 1;
            }
        }
        fim = pos - 1;
    } while(troca == 1);
    (void)n;
}
int buscaBinaria(char nomes[][101],int n,char nome[101]){
    int inicio = 0,meio,fim = n - 1,achou = 0;
    do{
        meio =(inicio + fim) / 2;
        if(strcmp(nome,nomes[meio]) == 0){
            achou = 1;
            break;
        }
        if(strcmp(nomes[meio],nome) < 0){
            fim = meio - 1;
        }
        else{
            inicio = meio + 1;
        }
    }while(inicio <= fim);
    if(achou == 1){
        return meio;
    }
    else{
        return - 1;
    }
}
void exibir(char nomes[][101]){
    int i;
    printf("Lista de nomes: \n");
    for(i = 0; i < TAM; i++){
        printf("%s \n",nomes[i]);
    }
}
int main(){
    char vet[TAM][101],nome[101];
    int retorno;
    preencher(vet);
    exibir(vet);
    ordernarVetor(vet,TAM);
    exibir(vet);
    printf("informe o nome que deseja encontrar: ");
    fgets(nome,101,stdin);
    leiturasegura(nome);
    retorno = buscaBinaria(vet,TAM,nome);
    if(retorno != - 1){
        printf("nome %s, esta no vetor e sua posicao eh: %d \n",nome,retorno);
    }
    else{
        printf("o nome nao foi encontrado. \n");
    }

return 0;
}
