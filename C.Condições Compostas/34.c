#include <stdio.h>
#include <math.h>

int main(){
    float IMC,PESO,ALT;
    printf("Digite seu peso em kg:");
    scanf("%f", &PESO);
    printf("Digite sua altura em metros:");
    scanf("%f", &ALT);

    IMC=PESO/pow(ALT, 2);

    if (IMC<18.5)
    {
        printf("ABAIXO DO PESO");
    }
    if (IMC>=18.5 && IMC<25)
    {
        printf("PESO IDEAL");
    }
    if (IMC>=25 && IMC<30)
    {
        printf("SOBREPESO");
    }
    if (IMC>=30 && IMC<40)
    {
        printf("OBESIDADE");
    }
    if (IMC>=40)
    {
        printf("OBESIDADE MORBIDA");
    }
    
}