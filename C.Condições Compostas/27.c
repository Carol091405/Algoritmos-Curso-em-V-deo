#include <stdio.h>

int main(){
    float a,b,c;
    printf("Digite suas notas:\n");
    scanf("%f", &a);
    scanf("%f", &b);

    c=(a+b)/2;

    if(c<5)
    {
        printf("Reprovado");
    }
    if (c>=5 && c<=6.9)
    {
        printf("Recuperacao");
    }
    if (c>=7)
    {
        printf("Aprovado");
    }
    return 0;
}