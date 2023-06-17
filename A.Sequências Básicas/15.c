#include <stdio.h>

int main() {
    int D, Z;

    printf("Digite a quantidade de dias que você trabalhou neste mês:\n");
    scanf("%d", &D);   

    Z = 8*25*D;

    printf("Você irá ganhar como salário:%d", Z);
    
}