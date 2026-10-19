#include <stdio.h>
#include <stdlib.h>
int main(){
    char key,choice;
    int num,count;
    long int date;
    float yield;
    double price;

    char *pkey = &key, *pchoice = &choice;
    int *pnum = &num, *pcount = &count;
    long int *pdate = &date;
    float *pyield = &yield;
    double *pprice = &price;

    printf("o endereco de key: %p \n",(void*)pkey);
    printf("o endereco de choice: %p \n",(void*)pchoice);
    printf("o endereco de num: %p \n",(void*)pnum);
    printf("o endereco de count: %p \n",(void*)pcount);
    printf("o endereco de date: %p \n",(void*)pdate);
    printf("o endereco de yield: %p \n",(void*)pyield);
    printf("o endereco de price: %p \n",(void*)pprice);

    return 0;
}
