#include <stdio.h>
#include <string.h>
#include <ctype.h>

int qntvogais(char frase[51]){
    int i, cont = 0,tam = strlen(frase);
    for(i = 0; i < tam; i++){
        frase[i] = tolower(frase[i]);
        if(isalpha((unsigned char)frase[i])){
            if(frase[i] == 'a'){
                cont++;
            }
            else if(frase[i] == 'e'){
                cont++;
            }
            else if(frase[i] == 'i'){
                cont++;
            }
            else if(frase[i] == 'o'){
                cont++;
            }
             else if(frase[i] == 'u'){
                cont++;
            }
        }
    }
    return cont;
}
void leituracorreta(char frase[51]){
    int i,tam = strlen(frase);
    for(i = 0; i < tam; i++){
        if(frase[i] == '\n'){
            frase[i] = '\0';
        }
    }
}
int main(){
    char frase [51];
    int qnttotalvogais;
    printf("informe a frase: \n");
    fgets(frase,51,stdin);
    leituracorreta(frase);
    qnttotalvogais = qntvogais(frase);
    printf("a quantidade de vogais encontrada na frase eh: %d \n",qnttotalvogais);

    return 0;
}
