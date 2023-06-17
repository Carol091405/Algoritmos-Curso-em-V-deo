#include <stdio.h>

int main(){
    float LARG, COMP, A;
    printf("Digite a largura e o comprimmento do terreno em metros:\n");
    scanf("%f", &LARG);
    scanf("%f", &COMP);

    A=LARG*COMP;
    printf("AREA:%f\n", A);

    if (A<100)
    {
        printf("TERRENO POPULAR");
    }
    if (A>=100 && A<=500)
    {
        printf("TERRENO MASTER");
    }
    if (A>500)
    {
        printf("TERRENO VIP");
    }
    return 0;
}