#include <stdio.h>
#include <string.h>
#include <ctype.h>

void leituraSegura(char nome[],int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }
}

int codigoAcesso(char codigo[]){
    int i,cont = 0;
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    (void)cont;
    for(i = 0; i < 9; i++){

        if(strlen(codigo) != 9){
        return 2;
    }
        if(isupper((unsigned char)codigo[i])){
            cont1 = 1;
            
        }
        if(islower((unsigned char)codigo[i])){
            cont2 = 1;
            
        }
        if(isdigit((unsigned char)codigo[i])){
            cont3 = 1;
            
        }
        if(!isalpha((unsigned char)codigo[i]) && !isdigit((unsigned char)codigo[i]) && !isspace((unsigned char)codigo[i])){
            cont4 = 1;
            
        }
    }
    
    if(cont1 == 1 && cont2 == 1 && cont3 == 1 && cont4 == 1){
        return 1;
   }
   else{
    return 3;
   }

}
int main(){
    char codigo[12];
    int acesso;
    printf("informe o codigo de acesso: ");
    fgets(codigo,12,stdin);
    leituraSegura(codigo,strlen(codigo));
    acesso = codigoAcesso(codigo);
    if(acesso == 1){
        printf("Ola, seja bem vindo! \n");
    }
    if(acesso == 2){
        printf("Codigo de acesso invalido: quantidade invalida de caracteres. \n");
    }
    if(acesso == 3){
        printf("Codigo de acesso invalido: formato invalido. \n");
    }
    return 0;
}
