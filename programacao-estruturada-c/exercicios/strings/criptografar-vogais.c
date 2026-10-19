#include <stdio.h>
#include <string.h>
#include <ctype.h>

void criptrografa(char vet[81]){
    int i;

    int tam = strlen(vet);
    for( i = 0; i < tam; i++){
        vet[i] = tolower(vet[i]);
        if(vet[i] == 'a'){
            vet[i] = '@';
        }
        if(vet[i] == 'e'){
            vet[i] = '$';
        }
        if(vet[i] == 'i'){
            vet[i] = '&';
        }
        if(vet[i] == 'o'){
            vet[i] = '#';
        }
        if(vet[i] == 'u'){
            vet[i] = '%';
        }
    }

}
int main(){
    char frase[81];

    printf("informe a frase: \n");
    fgets(frase,80,stdin);

    criptrografa(frase);
    printf("a nova frase eh: %s \n",frase);

    return 0;

}
