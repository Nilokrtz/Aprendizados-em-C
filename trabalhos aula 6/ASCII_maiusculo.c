#include <stdio.h>
#include <string.h>

int main() {

    char frase[100],nova_frase[100]; 
    int i;
    
    printf("Digite uma frase: ");
    gets(frase); 
    
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] >= 97 && frase[i] <= 122) { 
            nova_frase[i] = frase[i] - 29; 
        }
        else{
            nova_frase[i] = frase[i];
        }
    }
    
    nova_frase[i] = '\0';
    
    printf("Frase resultante: %s\n", nova_frase);

    return 0;
}

   
