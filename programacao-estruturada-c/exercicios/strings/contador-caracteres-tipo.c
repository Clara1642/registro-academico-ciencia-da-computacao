#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contador(char vet[101]){
    int i,qntletras = 0,qntnumeros = 0,qntespacos= 0,qntsimbolos= 0;
    int tam = strlen(vet);
    for(i = 0; i < tam; i++){
        if(isalpha((unsigned char)vet[i])){
            qntletras++;
        }
        else if(isdigit((unsigned char)vet[i])){
            qntnumeros++;
        }
        else if(isspace((unsigned char)vet[i]) && vet[i] != '\n'){
            qntespacos++;
        }
        char c = vet[i];
        if (!isalpha((unsigned char)c) && !isdigit((unsigned char)c) && !isspace((unsigned char)c)) {
            qntsimbolos++;
        }

    }
    printf("a quantidade de letras eh %d \n",qntletras);
    printf("a quantidade de numeros eh %d \n",qntnumeros);
    printf("a quantidade de espacos eh %d \n",qntespacos);
    printf("a quantidade de simbolos eh %d \n",qntsimbolos);

}

int main(){
    char frase[101];

    printf("informe a frase: \n");
    fgets(frase,100,stdin);

    contador(frase);

    return 0;
}
