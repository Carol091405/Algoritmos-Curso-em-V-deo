#include <stdio.h>

int main() {
    float A, B, C, D, E, F, H;

    printf("Escreva a distância em metros:\n");
    scanf("%f", &A);

    B = A/1000;
    C = A/100;
    D = A/10;
    E = A*10;
    F = A*100;
    H = A*1000;

    printf("Em Km:%f\n", B);
    printf("Em Hm:%f\n", C);
    printf("Em dam:%f\n", D);
    printf("Em dm:%f\n", E);
    printf("Em cm:%f\n", F);
    printf("Em mm:%f",H);
    
}