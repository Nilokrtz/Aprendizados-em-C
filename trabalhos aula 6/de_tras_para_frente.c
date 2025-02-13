#include <stdio.h>
#include <string.h>

char nome[100];

int main(){

    printf("Digite um nome: ");
    gets(nome);

    for(int i = strlen(nome);i>=0;i--){
        printf("%c",nome[i]);
    }

    return 0;
}