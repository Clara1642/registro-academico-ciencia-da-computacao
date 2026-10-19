#include <stdio.h>
#include <string.h>
#include <ctype.h>

void alterafrase(char vet[51], char letra){
    int i;
    int  tam = strlen(vet);
    for(i = 0; i < tam; i++){
        vet[i] = tolower(vet[i]);
        if(vet[i] == letra){
            vet[i] = toupper(vet[i]);
        }
    }
}
int main(){
    char frase[51],letra;

    printf("informe a frase: \n");
    fgets(frase,50,stdin);

    printf("informe a letra: \n");
    scanf("%c",&letra);
    getchar();

    while(isalpha(letra) == 0){
        printf("informe a letra: \n");
        scanf("%c",&letra);
        getchar();
    }

    alterafrase(frase,letra);
    printf("a nova frase eh: %s \n",frase);

    return 0;

}
