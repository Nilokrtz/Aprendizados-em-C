#include <stdio.h>
#include <string.h>

int main() {
    char cadeia[100]; 
    int i;

    printf("Digite uma cadeia de caracteres: ");
    gets(cadeia);
    
    for (i = 0; cadeia[i] != '\0'; i++) {
        if (cadeia[i] >= 97 && cadeia[i] <= 122) { 
            cadeia[i] -= 32; 
        }
    }

    printf("Cadeia convertida para maiuscula: %s\n", cadeia);

    return 0;
}
