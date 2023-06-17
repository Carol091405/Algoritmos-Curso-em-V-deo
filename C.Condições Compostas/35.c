#include <stdio.h>

int main(){
    float aluguel;
    int dias, km;
    char carro[10], popular[7], luxo[4];

    printf("Qual tipo de carro voce utilizou?\n");
    scanf("%s", &carro);
    printf("Por quantos dias voce usou o carro?\n");
    scanf("%d", &dias);
    printf("Quantos km foram percorridos?\n");
    scanf("%d", &km);

    if(carro==popular){
        if (km<=100)
        {
            aluguel=(90*dias)+(0.2*km);
            printf("Voce precisa pagar %f pelo aluguel", aluguel);
        }
        else{
            aluguel=(90*dias)+(0.1*km);
            printf("Voce precisa pagar %f pelo aluguel", aluguel);
        }
    }
    if (carro==luxo)
    {
        if (km<=200)
        {
            aluguel=(150*dias)+(0.3*km);
            printf("Voce precisa pagar %f pelo aluguel", aluguel);
        }
        else{
            aluguel=(150*dias)+(0.25*km);
            printf("Voce precisa pagar %f pelo aluguel", aluguel);
        }
    }
    


}