#include <stdio.h>

int x, y, z;

int main(){

    printf("Digite o lado X do triangulo: ");
    scanf("%i" , &x);
    printf("Digite o lado Y do triangulo: ");
    scanf("%i" , &y);
    printf("Digite o lado Z do triangulo: ");
    scanf("%i" , &z);

    if (x == y && x == z){
        printf("Esse triangulo e equilatero !!!");
    }
    else if(x == y || x == z || y == z){
        printf("Esse triangulo e isosceles !!!");
    }
    else{
        printf("Esse triangulo e escaleno !!!");
    }
    
    return 0;
    
}