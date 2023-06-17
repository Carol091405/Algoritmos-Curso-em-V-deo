#include <stdio.h>

int main(){
    int c,d;
    printf("Digite os valores inteiros que deseja:\n");
    scanf("%d", &c);
    scanf("%d", &d);

    if (c>d)
    {
        printf("O primeiro valor e maior.");
    }
    if(d>c)
    {
        printf("O segundo valor e maior.");
    }
    if(c == d){
        printf("Nao existe valor maior, os dois sao iguais.");
    }
    return 0;
}