#include <stdio.h>
#include <string.h>
#include <ctype.h>

int qntVogais(char vet[51]){
    int i,cont = 0;
    int tam = strlen(vet);
    for(i = 0; i < tam; i++){
        vet[i] = tolower(vet[i]);
        if(vet[i] == 'a' || vet[i] == 'e'|| vet[i] == 'i'|| vet[i] == 'o'|| vet[i] == 'u'){
            cont++;
        }
    }
return cont;
}

int main(){
    char frase[51];
    int qnttotalvogais;

    printf("infome uma frase. \n");
    fgets(frase,50,stdin);

    qnttotalvogais = qntVogais(frase);
    if(qnttotalvogais == 0){
        printf("nenhuma vogal foi encontrada na frase. \n");
    }
    else{
        printf("a qnt de vogais encontradas na frase: %d \n",qnttotalvogais);
    }
return 0;
}
