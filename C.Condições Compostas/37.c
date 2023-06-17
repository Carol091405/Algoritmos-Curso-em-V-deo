#include <stdio.h>

int main(){
    char g[1],F[1],M[1],NOME[100];
    int ANO;
    float SAL,x;
    printf("Digite seu salario:");
    scanf("%f", &SAL);
    printf("Escreva seu genero(F OU M):");
    scanf("%c", &g);
    if (g==F)
    {
        if (ANO<=15)
        {
           x=SAL*1.05;
           printf("Este e o novo salario com reajuste:%f", x);
        }
        if (ANO>15&&ANO<=20)
        {
           x=SAL*1.12;
           printf("Este e o novo salario com reajuste:%f", x);
        }
        if (ANO>20)
        {
           x=SAL*1.23;
           printf("Este e o novo salario com reajuste:%f", x);
        }
    }
    if (g==M)
    {
        if (ANO<=20)
        {
           x=SAL*1.03;
           printf("Este e o novo salario com reajuste:%f", x);
        }
        if (ANO>20&&ANO<=30)
        {
           x=SAL*1.13;
           printf("Este e o novo salario com reajuste:%f", x);
        }
        if (ANO>30)
        {
           x=SAL*1.25;
           printf("Este e o novo salario com reajuste:%f", x);
        }
    }
}