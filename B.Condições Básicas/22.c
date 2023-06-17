#include <stdio.h>

int main(){
    int idade,a;
    printf("Digite sua idade:");
    scanf("%d", &idade);

    if (idade<18)
    {
        a=18-idade;
        printf("Falta(m) %d ano(s) para a idade de alistamento", a);
    }
    else{
        a=idade-18;
        printf("Voce ja passou %d ano(s) da idade de alistamento", a);
    }
}