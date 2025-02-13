#include <stdio.h>
#include <string.h>

char nome[100], nome2[100];

int main(){

    printf("Digite um nome: ");
    gets(nome);
    printf("Digite outro nome: ");
    gets(nome2);

    if (strlen(nome) == strlen(nome2)){
        for (int i = 0; i < strlen(nome); i++)
        {
            if(nome2[i] != nome[i]){
               printf("Os nomes sao diferentes o programa sera encerrado!!!");
               break;
            }
            else{
               printf("Os nomes são iguais!!!");
            }   
        }       
    }
    else{
        printf("Os nomes nao possuem o mesmo tamanho!!");
    }

    return 0;
}