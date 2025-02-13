#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int i, j, eh_palindromo = 1;

    
    printf("Digite uma frase: ");
    gets(frase);

    for (i = 0, j = strlen(frase) - 1; i < j; i++, j--) {
        if (frase[i] != frase[j]) {
            eh_palindromo = 0;
            break;
        }
    }
    
    if (eh_palindromo) {
        printf("%s e um palindromo.\n", frase);
    } else {
        printf("%s nao e um palindromo.\n", frase);
    }

    return 0;
}
