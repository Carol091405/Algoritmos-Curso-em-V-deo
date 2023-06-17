#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a,b;
    printf("Adivinhe o numero que o pc escolheu:");
    scanf("%d", &a);

    srand(time(NULL));
    
    b=1+(rand()%5);

    if (a==b)
    {
        printf("Voce acertou, parabens!");
    }
    else{
        printf("Que pena, voce errou!. Tente novamente.");
    }

}