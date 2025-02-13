#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[100];
    char endereco[200];
    char telefone[15];
};

void ordenarPorNome(struct Pessoa pessoas[], int n) {
    struct Pessoa temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }
}

int main() {
    struct Pessoa pessoas[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1);

        printf("Digite o nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; 

        printf("Digite o endereço: ");
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        pessoas[i].endereco[strcspn(pessoas[i].endereco, "\n")] = '\0'; 

        printf("Digite o telefone: ");
        fgets(pessoas[i].telefone, sizeof(pessoas[i].telefone), stdin);
        pessoas[i].telefone[strcspn(pessoas[i].telefone, "\n")] = '\0'; 

        printf("\n");
    }

    
    ordenarPorNome(pessoas, 5);

    
    printf("Dados das pessoas em ordem alfabética:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
    }

    return 0;
}
