#include <stdio.h>

struct Aluno {
    char nome[100];
    int matricula;
    char curso[50];
};

int main() {
    struct Aluno alunos[5]; 
    
    for(int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Digite o nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Digite o numero de matricula: ");
        scanf("%d", &alunos[i].matricula);

        getchar(); 

        printf("Digite o curso: ");
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
        printf("\n");

    }
    
    printf("Dados dos Alunos:\n");
    for(int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso);
        printf("\n"); 
    }

    return 0;
}