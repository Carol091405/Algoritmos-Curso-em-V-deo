#include <stdio.h>

int main() {
    int a,c,x;

    printf("Quantos cigarros você fuma diariamente?\n");
    scanf("%d", &c);
    printf("Por quantos anos você já fumou?\n");
    scanf("%d", &a);

    x=(c*365*a)*10/1440;

    printf("Sua vida em dias diminuiu em:%d\n", x);
}