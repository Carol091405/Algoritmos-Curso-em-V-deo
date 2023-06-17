#include <stdio.h>

int main(){
    char nome[100];
    float ANOS,SAL, NS;

    printf("Digite o seu nome:");
    scanf("%s", nome);
    printf("Digite a quantia de anos em que trabalha na empresa:");
    scanf("%f", &ANOS);
    printf("Digite o seu salario:");
    scanf("%f", &SAL);

    if (ANOS<=3)
    {
        NS=SAL*1.03;
        printf("Ola, %s. Aqui esta seu novo salario:%f", nome, NS);
    }
    if (ANOS>3 && ANOS<10)
    {
        NS=SAL*1.125;
        printf("Ola, %s. Aqui esta seu novo salario:%f", nome, NS);
    }
    if (ANOS>=10)
    {
        NS=SAL*1.20;
        printf("Ola, %s. Aqui esta seu novo salario:%f", nome, NS);
    }
    return 0;
}