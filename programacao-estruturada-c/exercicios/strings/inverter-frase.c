#include <stdio.h>
#include <string.h>
#include <ctype.h>

void leiturasegura(char frase[101]){
    int i,tam = strlen(frase);
    for(i = 0; i < tam; i++){
        if(frase[i] == '\n'){
            frase[i] = '\0';
        }
    }
}
void inverter(char frase[101]){
    int tam = strlen(frase), k = tam - 1;
    int i;
    char contrario[101];
    for(i = 0; i < tam; i++){
        contrario[i] = frase[k];
        k--;
    }
    for(i = 0; i < tam; i++){
        frase[i] = contrario[i];
    }
}

int main(){
    char frase[101];
    printf("informe a frase: \n");
    fgets(frase,101,stdin);
    leiturasegura(frase);
    inverter(frase);
    printf("a frase invertida eh: %s \n",frase);

    return 0;
}
