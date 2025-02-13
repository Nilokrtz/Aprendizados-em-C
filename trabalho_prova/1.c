#include <stdio.h>

struct Produto{
    char nome[100];
    int codigo;
    float preco;
    int estoque;
};

float valorEmEstoque(float preco,int estoque){
    return estoque * preco;
}


int main(){

    struct Produto prod[5];

    for(int i=0; i<5; i++){
        printf("Digite o nome do produto: ");
        fgets(prod[i].nome, sizeof(prod[i].nome), stdin);
        prod[i].nome[strcspn(prod[i].nome, "\n")] = '\0'; 
        printf("Digite o codigo do produto: ");
        scanf("%i", &prod[i].codigo);
        printf("Digite o preco do produto: ");
        scanf("%f", &prod[i].preco);
        printf("Quanto há no estoque desse produto: ");
        scanf("%i", &prod[i].estoque);
        getchar();
    }

    for(int i=0; i<5; i++){
        printf("\nProduto: %s\nCodigo: %i\nPreco: %.2f\nEstoque %i\nValor Total: %.2f\n", prod[i].nome,prod[i].codigo,prod[i].preco,prod[i].estoque,valorEmEstoque(prod[i].preco,prod[i].estoque));
    }

  return 0;  
}