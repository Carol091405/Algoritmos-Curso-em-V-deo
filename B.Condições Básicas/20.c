#include <stdio.h>

int main() {
    int x, y;
    printf("Escreva um valor inteiro:");
    scanf("%d", &x);

    y=x-2*(x/2);

    if (y==0)
    {
        printf("Numero par");
    }
    else{
        printf("Numero impar");
    }
}