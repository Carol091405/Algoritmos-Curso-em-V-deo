#include <stdio.h>

int main() {
    int anos;
    float casa, sal, pres;

    printf("Digite o valor da casa:");
    scanf("%f", &casa);
    printf("Digite seu salario:");
    scanf("%f", &sal);
    printf("Digite a qauntia em anos de pagamento do emprestimo:");
    scanf("%d", &anos);

    pres=casa/(anos*12);

    if (pres>(0.3*sal))
    {
        printf("EMPRESTIMO NEGADO");
    }
    else{
        printf("EMPRESTIMO APROVADO");
    }
}