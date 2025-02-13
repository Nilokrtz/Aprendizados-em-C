#include <stdio.h>

int main() {
    int num, i, primo = 1; 

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = 0;
                break; 
            }
        }
    }

    if (primo) {
        printf("O numero %d e primo.\n", num);
    } else {
        printf("O numero %d nao e primo.\n", num);
    }

    return 0;
}
