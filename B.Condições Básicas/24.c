#include <stdio.h>

int main() {
    float x,n,m;

    printf("Escreva a distancia em km:\n");
    scanf("%f", &x);

    if (x>200)
    {
        n=x*0.45;
        printf("O preco da sua passagem equivale a:%f", n);
    }
    else{
        m=x*0.5;
        printf("O preco da sua passagem equivale a:%f", m);
    }

    
}