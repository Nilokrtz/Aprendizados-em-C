#include <stdio.h>
#include <string.h>

int main() {

    char palavra[50],nova_palavra[50]; 
    int i;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra); 

    
    for (i = 0; palavra[i] != '\0'; i++) {
        nova_palavra[i] = palavra[i] + 1; 
    }

    nova_palavra[i] = '\0';
    
    printf("Palavra resultante: %s\n", nova_palavra);

    return 0;
}
