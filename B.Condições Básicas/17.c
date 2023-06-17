#include <stdio.h>

int main() {
    int v,m;

    printf("Diga a velocidade do carro:\n");
    scanf("%d", &v);

    if (v>80)
    {
        printf("Voce foi multado!\n");
        m=(v-80)*5;
        printf("Sua multa equivale a:%d\n", m);
    } else{
        printf("Voce nao sera multado");
    }
    }
    
