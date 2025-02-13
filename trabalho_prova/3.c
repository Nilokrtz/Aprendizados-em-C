#include <stdio.h>
#include <string.h>


struct Carro {
    char marca[16]; 
    int ano;
    float preco;
};

int main() {
    struct Carro carros[5];
    float p;

    
    for (int i = 0; i < 5; i++) {
        printf("Digite a marca do carro %d (até 15 letras): ", i + 1);
        scanf(" %[^\n]", carros[i].marca);
        printf("Digite o ano do carro %d: ", i + 1);
        scanf("%d", &carros[i].ano);
        printf("Digite o preço do carro %d: ", i + 1);
        scanf("%f", &carros[i].preco);
    }

    
    do {
        printf("\nDigite um valor para p (0 para sair): ");
        scanf("%f", &p);

        if (p > 0) {
            printf("\nCarros com preço menor que %.2f:\n", p);
            int encontrou = 0;

            for (int i = 0; i < 5; i++) {
                if (carros[i].preco < p) {
                    printf("Marca: %s | Ano: %d | Preço: %.2f\n", 
                            carros[i].marca, carros[i].ano, carros[i].preco);
                    encontrou = 1;
                }
            }

            if (!encontrou) {
                printf("Nenhum carro encontrado com preço menor que %.2f.\n", p);
            }
        }

    } while (p != 0);

    printf("Programa encerrado.\n");
    return 0;
}
