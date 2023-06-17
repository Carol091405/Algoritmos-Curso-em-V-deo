#include <stdio.h>

int main() {
    int ano, v;

    printf("Escreva o ano em que você nasceu:\n");
    scanf("%d", &ano);

    v=2023-ano;

    if (v>=16)
    {
        printf("Voce ja tem idade para exercer seu direito de voto");
    }
    else{
        printf("Voce ainda nao tem idade para votar");
    }
}