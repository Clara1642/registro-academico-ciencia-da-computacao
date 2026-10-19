#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compararFrase(char frase1[51], char frase2[51]){
    int i, tam1 = strlen(frase1), tam2 = strlen(frase2);

        if(tam1 != tam2){
            return 0;
        }

        for(i = 0; i < tam1; i++){
            if(tolower(frase1[i]) != tolower(frase2[i])){
            return 0;
        }
    }

    return 1;
}
void leiturasegura(char frase1[51]){
    int i, tam1 = strlen(frase1);
    for(i = 0; i < tam1; i++){
        if(frase1[i] == '\n'){
            frase1[i] = '\0';
        }
    }
}
int main(){
    char frase1[51], frase2[51];
    int resultado;
    printf("informe a primeira frase: \n");
    fgets(frase1,51,stdin);
    leiturasegura(frase1);

    printf("infome a segunda frase: \n");
    fgets(frase2,51,stdin);
    leiturasegura(frase2);

    resultado = compararFrase(frase1,frase2);
    if(resultado == 1){
        printf("as frases sao iguais. \n");
    }
    else{
        printf("as frases sao diferentes. \n");
    }

    return 0;
}
