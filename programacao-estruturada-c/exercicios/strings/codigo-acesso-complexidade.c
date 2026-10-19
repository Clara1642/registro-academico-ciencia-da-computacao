#include <stdio.h>
#include <ctype.h>
#include <string.h>

void leituraSegura(char nome[],int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }
}

int codigoAcesso(char codigo[]){
    int i, temMaius = 0, temMenus = 0, temDigitosnumericos = 0, temCaracteresperten = 0;

    if(strlen(codigo) != 9){
        return 2;
    }
    for(i = 0; i < 9; i++){
        if(islower((unsigned char)codigo[i])){
            temMenus = 1;
        }
        if(isupper((unsigned char)codigo[i])){
            temMaius = 1;
        }
        if(isdigit((unsigned char)codigo[i])){
            temDigitosnumericos = 1;
        }
        if(!islower((unsigned char)codigo[i]) && !isupper((unsigned char)codigo[i]) && !isdigit((unsigned char)codigo[i]) && !isspace((unsigned char)codigo[i])){
            temCaracteresperten = 1;
        }   
    }
        if(temMaius == 1 && temMenus == 1 && temDigitosnumericos == 1 && temCaracteresperten == 1){
            return 1;
        }
        else{
            return 3;
        }

}
int main(){
    char codigo[10];
    int acesso;

    printf("informe o codigo: ");
    fgets(codigo,10,stdin);
    leituraSegura(codigo,strlen(codigo));

    acesso = codigoAcesso(codigo);
    if(acesso == 1){
        printf("Ola, seja bem-vindo! \n");
    }
    else if(acesso == 2){
        printf("Codigo de acesso invalido: quantidade invalida de caracteres! \n");
    }
    else{
        printf("Codigo de acesso invalido: formato invalido! \n");
    }

    return 0;
}
