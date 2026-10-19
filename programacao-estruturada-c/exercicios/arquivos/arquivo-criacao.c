#include <stdio.h>
#include <string.h>

void leituraSegura(char nome[],int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }
}

int main(){
    FILE *arquivo;
    int status;
    char nomearq[51];
    char escolha[4];

    printf("informe o nome do arquivo: ");
    fgets(nomearq,51,stdin);
    leituraSegura(nomearq,strlen(nomearq));

    arquivo = fopen(nomearq,"rb");
    if(arquivo != NULL){
        printf("O arquivo ja existe! Se criar o atual arquivo as informacoes anteriores serao predidas.\n");
        printf("deseja cria-lo? ");
        fgets(escolha,4,stdin);
        leituraSegura(escolha,strlen(escolha));

        if(strcmp(escolha,"nao") == 0){
            printf("O arquivo nao foi criado. \n");
            fclose(arquivo);
            return 0;
        }
        fclose(arquivo);
    }
    arquivo = fopen(nomearq,"w+b");
    if(arquivo == NULL){
        printf("Erro ao criar o arquivo! \n");
    }
    else{
        printf("Arquivo %s criado com sucesso. \n",nomearq);
    }

    status = fclose(arquivo);
    if(status == 0){
        printf("Arquivo %s fechado com sucesso. \n",nomearq);
    }
    else{
        printf("Erro ao tentar fechar arquivo %s. \n",nomearq);
    }
    return 0;
}
