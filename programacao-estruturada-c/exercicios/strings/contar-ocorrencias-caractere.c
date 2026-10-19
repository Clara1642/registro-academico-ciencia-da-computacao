#include <stdio.h>
#include <string.h>

int qntvezes(char vet[101],char caractere){
    int i,cont = 0;
    int tam = strlen(vet);
    for(i = 0; i < tam; i++){
        if(caractere == vet[i]){
            cont++;
        }

    }
return cont;
}

int main(){

    char frase[101],caractere;
    int qnttotal;
    printf("informe a frase: \n");
    fgets(frase,100,stdin);

    printf("informe um caractere: \n");
    scanf("%c",&caractere);

    qnttotal = qntvezes(frase,caractere);
    if(qnttotal == 0){
        printf("o caractere digitado nao foi encontrado na frase. \n");
    }
    else{
       printf("o caractere digitado foi encontrado %d vezes na frase informada. \n",qnttotal);
    }

return 0;
}
