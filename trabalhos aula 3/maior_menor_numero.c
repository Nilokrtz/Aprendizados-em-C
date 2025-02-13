#include <stdio.h>

int maior, menor, intermediario, valor,primeiro, segundo, terceiro;

int main() {

    printf("Digite o primeiro valor: ");
    scanf("%i", &primeiro);

    printf("Digite o segundo valor: ");
    scanf("%i", &segundo);

    printf("Digite o terceiro valor: ");
    scanf("%i", &terceiro);

    if (primeiro > segundo && primeiro > terceiro) {
        maior = primeiro;
    } else if (segundo > terceiro) {
        maior = segundo;
    } else {
        maior = terceiro;
    }

    if (primeiro < segundo && primeiro < terceiro) {
        menor = primeiro;
    } else if (segundo < terceiro) {
        menor = segundo;
    } else {
        menor = terceiro;
    }

    if ((primeiro != maior && primeiro != menor)) {
        intermediario = primeiro;
    } else if ((segundo != maior && segundo != menor)) {
        intermediario = segundo;
    } else {
        intermediario = terceiro;
    }

    printf("O menor valor e: %i\n", menor);
    printf("O valor intermediario e: %i\n", intermediario);
    printf("O maior valor e: %i\n", maior);

    return 0;
}
