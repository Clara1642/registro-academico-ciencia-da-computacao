#include <stdio.h>
#include <string.h>
#include <ctype.h>

void leituraSegura(char nome[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }
}

int codigoAcesso(char codigo[]){
    int i;
        if(strlen(codigo) != 11){
            return 0;
        }
        if(codigo[0] != 'A' && codigo[0] != 'F' && codigo[0] != 'P'){
            return 0;
        }
        for(i = 0; i < 5; i++){
            if(!isalpha((unsigned char)codigo[i])){
                return 0;
            }
        }
        for( i = 5; i < 11; i++){
            if(!isdigit((unsigned char)codigo[i])){
                return 0;
            }
        }
    return 1;    
}  

int main(){
    char codigo[20],funcao[51],nome[51];
    int validacao;
    printf("informe seu nome: ");
    fgets(nome,15,stdin);
    leituraSegura(nome,strlen(nome));

    printf("informe sua funcao: ");
    fgets(funcao,51,stdin);
    leituraSegura(funcao,strlen(funcao));

    printf("informe o codigo de acesso: ");
    fgets(codigo,20,stdin);
    leituraSegura(codigo,strlen(codigo));

    validacao = codigoAcesso(codigo);
    if(validacao == 1){
        printf("Ola, %s %s, entrada liberada.Seja bem-vindo!\n",funcao,nome);
    }
    else{
        printf("codigo de acesso invalido,acesso nao liberado. \n");
    }

    return 0;
}
