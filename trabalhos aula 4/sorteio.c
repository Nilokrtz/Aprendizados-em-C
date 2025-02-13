#include <stdio.h>
#include <stdlib.h>

int numeroSorteado, numeroDoUsuario = 0, tentativas;

int main(){
    numeroSorteado = rand() % 500;

    for(tentativas = 0;numeroDoUsuario != numeroSorteado;tentativas++){
        printf("Qual o numero magico: ");
        scanf("%d", &numeroDoUsuario);
        if(numeroDoUsuario>numeroSorteado){
            printf("O numero digitado e maior do que o sorteado!\n");
        }
        else if(numeroDoUsuario<numeroSorteado){
            printf("O numero digitado e menor do que o sorteado!\n");
        }
    }

    if(tentativas<=3){
        printf("Parabens, usuario voce e muito sortudo!");
    }
    else if(tentativas>=4 && tentativas<=6){
    printf("Parabens, usuario voce e sortudo!");        
    }
    else if(tentativas>=7 && tentativas<=10){
        printf("Parabens, usuario voce e normal!");
    }
    else if(tentativas>10){
        printf("Que pena voce e bem do azaro!");
    }
    else{
        printf("Erro!!!\nO programa sera encerrado!");
    }

    return 0;
}