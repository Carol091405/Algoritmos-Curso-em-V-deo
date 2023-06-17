#include <stdio.h>

int main(){
    float h,x,y;
    printf("Digite quantas horas de atividade fisica voce fez neste mês:");
    scanf("%f", &h);

    if (h<=10)
    {
        x=(h*2);
        y=x*0.05;
        printf("Voce tem %f pontos\n", x);
        printf("Com isso, voce pode retirar %f reais", y);
    }
    if (h>10&&h<=20)
    {
        x=(h*5);
        y=x*0.05;
        printf("Voce tem %f pontos\n", x);
        printf("Com isso, voce pode retirar %f reais", y);
    }
    if (h>20)
    {
        x=(h*10);
        y=x*0.05;
        printf("Voce tem %f pontos\n", x);
        printf("Com isso, voce pode retirar %f reais", y);
    }
   return 0; 
}