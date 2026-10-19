#include <stdio.h>
#include <string.h>
#include <ctype.h>

void descriptografa(char vet[81]){
    int i;
    int tam = strlen(vet);
    for(i = 0; i < tam; i++){
        vet[i] = tolower(vet[i]);

        if(vet[i] == '@'){
            vet[i] = 'a';
        }
        if(vet[i] == '$'){
            vet[i] = 'e';
        }
        if(vet[i] == '&'){
            vet[i] = 'i';
        }
        if(vet[i] == '#'){
            vet[i] = 'o';
        }
        if(vet[i] == '%'){
            vet[i] = 'u';
        }
    }
}
int main(){
    char frase[81];

    printf("informe a frase: \n");
    fgets(frase,80,stdin);

    descriptografa(frase);
    printf("a nova frase eh: %s ",frase);

    return 0;
}
