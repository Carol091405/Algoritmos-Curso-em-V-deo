#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    float n1, n2, m;
    printf("Escreva seu nome:\n");
    scanf("%s", nome);
    printf("Bem vindo, %s\n", nome);
    printf("Escreva suas respectivas notas:\n");
    scanf("%f\n", &n1);
    scanf("%f", &n2);

    m=(n1+n2)/2;
    printf("Sua media:%f\n", m);

    if (m>=7)
    {
        printf("Voce tem um bom aproveitamento, parabens!");
    }
    else{
        printf("Que pena, voce precisa estudar mais!");
    }
}