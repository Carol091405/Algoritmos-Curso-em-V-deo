#include <stdio.h>

int main(){
    float L, A, R, X;

    printf("Digite a largura:\n");
    scanf("%f", &L);
    printf("Digite a altura:\n");
    scanf("%f", &A);

    R = L*A;
    X = R/2;

    printf("Área da parede:%f\n", R);
    printf("Tinta necessária para pintura:%f", X);
}