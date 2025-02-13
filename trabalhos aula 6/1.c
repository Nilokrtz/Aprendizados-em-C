#include <stdio.h>
#include <string.h>

char numero[100];
int contador = 0;

int main(){

    printf("Digite seu numero: ");
    gets(numero);

    for(int i = 0; i < strlen(numero); i++){
        if(numero[i] == '1'){
            contador++;
        }
    }

    printf("O numero digitado possui: %d numeros 1", contador);

    return 0;
}