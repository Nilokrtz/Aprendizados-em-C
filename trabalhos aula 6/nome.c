#include <stdio.h>
#include <string.h>

char nome[100];

int main(){

    printf("Digite o seu nome: ");
    gets(nome);

    if (strlen(nome) < 4){
        printf("Seu nome possui menos de 4 letras!");
    }
    else{
        for(int i = 0; i < 4 ;i++){
            printf("Letra %d: %c \n" ,i+1,nome[i]);
        }
    }

    return 0;
}