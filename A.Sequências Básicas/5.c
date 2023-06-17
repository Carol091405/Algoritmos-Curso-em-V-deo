#include <stdio.h>

int main(){
    float a,b,c;

    printf("Escreva a nota 1:\n");
    scanf("%f", &a);
    printf("Escreva a nota 2:\n");
    scanf("%f", &b);

    c = (a+b) / 2;

    printf("A média entre essas notas é: %f", c);

}