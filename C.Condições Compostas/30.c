#include <stdio.h>

int main(){
    float a,b,c;
    printf("Escreva os 3 valores do possível triangulo:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a<=b+c && b<=a+c && c<=a+b)
    {
      printf("Um triangulo pode ser formado com estes valores.\n");
      if (a==b||a==c||b==c)
      {
        if (a==b && b==c){
        printf("TRIANGULO EQUILATERO");
        }
        else
      {
        printf("TRIANGULO ISOSCELES");
      }
      }
      else
      {
        printf("TRIANGULO ESCALENO");
      }
      
    }
    else{
        printf("Um triangulo não pode ser formado com esses valores");
    }
    return 0;
}