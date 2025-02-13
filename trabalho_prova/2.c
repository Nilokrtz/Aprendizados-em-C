#include <stdio.h>

int numero;
char str[100], *result;

int main() {
    FILE *arq;

    arq = fopen("..\\numeros.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        fprintf(arq, "%d\n", numero); 
    }

    fclose(arq); 

    
    arq = fopen("..\\numeros.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    
    printf("\nConteúdo do arquivo:\n");
    while ((result = fgets(str, sizeof(str), arq)) != NULL) {
        printf("%s", str); 
    }

    fclose(arq); 

    return 0;
}
