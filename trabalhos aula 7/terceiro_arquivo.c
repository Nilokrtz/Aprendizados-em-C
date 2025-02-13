#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *file3;
    char filename1[100], filename2[100], filename3[100];
    char ch;

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", filename1);

    file1 = fopen(filename1, "r");
    if (file1 == NULL) {
        printf("Erro ao abrir o primeiro arquivo.\n");
        exit(1);
    }

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", filename2);

    file2 = fopen(filename2, "r");
    if (file2 == NULL) {
        printf("Erro ao abrir o segundo arquivo.\n");
        fclose(file1);
        exit(1);
    }

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", filename3);

    file3 = fopen(filename3, "w");
    if (file3 == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(file1);
        fclose(file2);
        exit(1);
    }

    // Copiar o conteúdo do primeiro arquivo para o arquivo de saída
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }

    // Copiar o conteúdo do segundo arquivo para o arquivo de saída
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);

    printf("Conteúdo combinado com sucesso no arquivo \"%s\".\n", filename3);

    return 0;
}
