#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[100];
    int matricula;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[10];
    struct Aluno aprovados[10];
    struct Aluno reprovados[10];

    int qtdAprovados = 0;
    int qtdReprovados = 0;

    
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Digite o nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; 

        printf("Digite a matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Digite a média final: ");
        scanf("%f", &alunos[i].mediaFinal);
        getchar(); 

        printf("\n");

        
        if (alunos[i].mediaFinal >= 5) {
            aprovados[qtdAprovados++] = alunos[i];
        } else {
            reprovados[qtdReprovados++] = alunos[i];
        }
    }

    
    printf("Alunos Aprovados:\n");
    for (int i = 0; i < qtdAprovados; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matrícula: %d\n", aprovados[i].matricula);
        printf("Média Final: %.2f\n\n", aprovados[i].mediaFinal);
    }

    
    printf("Alunos Reprovados:\n");
    for (int i = 0; i < qtdReprovados; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matrícula: %d\n", reprovados[i].matricula);
        printf("Média Final: %.2f\n\n", reprovados[i].mediaFinal);
    }

    return 0;
}
