#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verificar(char codigo[11]){
    int i, tam = strlen(codigo),contL = 0, contN = 0;
    if(tam != 9){
        return 1;
    }

    else if(codigo[0] != 'a' && codigo[0] != 'A'){
        return 2;
    }

    for(i = 0; i < tam; i++){
        if(isalpha((unsigned char)codigo[i])){
            contL++;
        }
        else if(isdigit((unsigned char)codigo[i])){
            contN++;
        }
    }
    if(contL != 4){
        return 2;
    }
    else if(contN != 5){
        return 2;
    }

return 3;
}

void leituracorreta(char codigo[11]){
    int tam = strlen(codigo),i;
    for(i = 0; i < tam; i++){
        if(codigo[i] == '\n'){
            codigo[i] = '\0';
        }
    }
}

int main(){
    char codigo[11];
    int resultcodigo;
    printf("informe o codigo: \n");
    fgets(codigo,11,stdin);
    leituracorreta(codigo);

    resultcodigo = verificar(codigo);

    if(resultcodigo == 1){
        printf("o codigo nao e valido. motivo: %s quantidade invalida de caracteres. \n",codigo);
    }
    else if(resultcodigo == 2){
        printf("o codigo %s nao e valido. motivo: formato incorreto. \n",codigo);
    }
    else if(resultcodigo == 3){
        printf("o codigo %s e valido. \n",codigo);
    }

    return 0;
}
