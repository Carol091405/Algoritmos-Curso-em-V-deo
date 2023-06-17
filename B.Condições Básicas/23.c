#include <stdio.h>

int main() {
    float a,b;
    char nome[100],sexo[2], F, M;

    printf("Diga seu nome:\n");
    scanf("%s", &nome);
    printf("Diga seu sexo:\n");
    scanf("%c", &sexo);
    printf("Insira o valor das suas compras:\n");
    scanf("%f", &a);

    if (sexo == 'F')
    {
        b=a*0.87;
        printf("Ola, %s. Aqui esta o valor das suas compras com desconto:%f. Aproveite seu dia!", nome, b);
    }
    else(sexo == 'M');
    {
        b=a*0.95;
        printf("Ola, %s. Aqui esta o valor das suas compras com desconto:%f.", nome, b);
    }
    return 0;
    }
