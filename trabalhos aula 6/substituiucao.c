#include <stdio.h>
#include <string.h>

char nome[100],letra;
int contador = 0;

int main(){

    printf("Digite um nome: ");
    gets(nome);
    printf("Digite a letra que voce deseja substituir as vogais dessa palavra: ");
    scanf("%c", &letra);

    for(int i = 0;i < strlen(nome);i++){
        if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u' ||
            nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U') {
            contador++;
            nome[i] = letra;
        }
        printf("%c",nome[i]);
    }
        printf("\nNumero de vogais modificadas foi: %d", contador);

    return 0;
}