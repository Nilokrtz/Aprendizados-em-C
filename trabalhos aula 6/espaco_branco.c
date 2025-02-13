#include <stdio.h>
#include <string.h>

char nome[100];

int main(){

    printf("Digite um nome: ");
    gets(nome);

    for(int i = 0;i < strlen(nome);i++){
        if(nome[i] == ' '){
            i++;
        }
            printf("%c",nome[i]);
    }

    return 0;
}