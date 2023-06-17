#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main(){
    int j1,j2,j3;
    printf("Bem vindo ao jogo jokenpo!\n");
    printf("Digite sua escolha pelo numero j1:pedra(1),papel(2),tesoura(3)\n");
    scanf("%d", &j1);
    system("cls");
    printf("Digite sua escolha pelo numero j2:pedra(1),papel(2),tesoura(3)\n");
    scanf("%d", &j2);
    system("cls");
    printf("Digite sua escolha pelo numero j3:pedra(1),papel(2),tesoura(3)\n");
    scanf("%d", &j3);
    system("cls");

    if ((j1==j2&&j2==j3)||(j1==1&&j2==2&&j3==3)||(j1==1&&j2==3&&j3==2)||(j1==2&&j2==3&&j3==1)||(j1==2&&j2==1&&j3==3)||(j1==3&&j2==1&&j3==2)||(j1==3&&j2==2&&j3==1))  
    {
        printf("EMPATE!");
    }
    if ((j1==1&&(j2==3&&j3==3))||(j1==2&&(j2==1&&j2==1))||(j1==3&&(j2==2&&j3==2))) {
        printf("Jogador 1 VENCEU!\n");
        printf("Jogador 2 PERDEU!\n");
        printf("Jogador 3 PERDEU!\n");
    }
    if ((j2==1&&(j1==3&&j3==3))||(j2==2&&(j1==1&&j3==1))||(j2==3&&(j1==2&&j3==2))) {
        printf("Jogador 1 PERDEU!\n");
        printf("Jogador 2 VENCEU!\n");
        printf("Jogador 3 PERDEU!\n");
    }
    if ((j3==1&&(j1==3&&j2==3))||(j3==2&&(j1==1&&j2==1))||(j3==3&&(j1==2&&j2==2))) {
        printf("Jogador 1 PERDEU!\n");
        printf("Jogador 2 PERDEU!\n");
        printf("Jogador 3 VENCEU!\n");
    }
    if ((j1==1&&(j2==2&&j3==2))||(j1==2&&(j2==3&&j3==3))||(j1==3&&(j2==1&&j3==1)))
    {
        printf("Somente o jogador 1 PERDEU!\n");
    }
    if ((j2==1&&(j1==2&&j3==2))||(j2==2&&(j1==3&&j3==3))||(j2==3&&(j1==1&&j3==1)))
    {
        printf("Somente o jogador 2 PERDEU!\n");
    }
    if ((j3==1&&(j2==2&&j1==2))||(j3==2&&(j2==3&&j1==3))||(j3==3&&(j2==1&&j1==1)))
    {
        printf("Somente o jogador 3 PERDEU!\n");
    }
    return 0;
}