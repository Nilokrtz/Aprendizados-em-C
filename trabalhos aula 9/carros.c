#include <stdio.h>
#include <string.h>

struct Carro {
    char marca[16];
    int ano;
    float preco;
};

void exibirCarrosMenorQueP(struct Carro carros[], int n, float p) {
    int encontrou = 0;

    printf("\nCarros com preço menor que %.2f:\n", p);
    for (int i = 0; i < n; i++) {
        if (carros[i].preco < p) {
            printf("Marca: %s\n", carros[i].marca);
            printf("Ano: %d\n", carros[i].ano);
            printf("Preço: %.2f\n\n", carros[i].preco);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum carro encontrado com preço menor que %.2f\n", p);
    }
}

int main() {
    struct Carro carros[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Carro %d:\n", i + 1);

        printf("Digite a marca (máximo 15 letras): ");
        fgets(carros[i].marca, sizeof(carros[i].marca), stdin);
        carros[i].marca[strcspn(carros[i].marca, "\n")] = '\0'; 

        printf("Digite o ano: ");
        scanf("%d", &carros[i].ano);

        printf("Digite o preço: ");
        scanf("%f", &carros[i].preco);
        getchar(); 

        printf("\n");
    }

    float p;
    do {
        printf("Digite um valor para p (0 para sair): ");
        scanf("%f", &p);

        if (p > 0) {
            exibirCarrosMenorQueP(carros, 5, p);
        }
    } while (p != 0);

    printf("Programa encerrado.\n");
    return 0;
}
