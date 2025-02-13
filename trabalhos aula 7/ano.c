#include <stdio.h>

int main() {
    char str[100], *result;
    int ano;
    FILE *arq;

    // Abre o arquivo para leitura
    arq = fopen("..\\arq.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Solicita o ano ao usuário
    printf("Digite o ano em que estamos: ");
    scanf("%d", &ano); // Corrigido para usar %d e passar o endereço de 'ano'

    printf("\nConteúdo do arquivo:\n");

    // Lê linha por linha do arquivo
    while ((result = fgets(str, sizeof(str), arq)) != NULL) {
        printf("%s", str); // Imprime a linha lida
    }

    // Fecha o arquivo
    fclose(arq);

    printf("\n\nAno digitado: %d\n", ano); // Mostra o ano digitado
    return 0;
}
