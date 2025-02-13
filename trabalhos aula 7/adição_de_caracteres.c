#include <stdio.h>

int main() {
    char resp;
    FILE *arq;

    
    arq = fopen("..\\arquivo4.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    do {
        printf("Digite um caractere (digite '0' para sair): ");
        scanf(" %c", &resp); 

        if (resp != '0') {
            fputc(resp, arq); 
        }
    } while (resp != '0'); 

    fclose(arq); 
    printf("Os dados foram gravados no arquivo com sucesso.\n");

    return 0;
}
