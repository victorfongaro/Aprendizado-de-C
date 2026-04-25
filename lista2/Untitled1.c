#include <stdio.h>

int main()
{
    int a,b,c,d;
    float x;
    printf("Escreva a: ");
    scanf("%d", &a);
    printf("\nEscreva b:");
    scanf("%d", &b);
    printf("\nEscreva c: ");
    scanf("%d", &c);
    printf("\nEscreva d: ");
    scanf("%d", &d);
    x = ((b/(a+c)+ 4*a))/(d-2*a/(3+c));
    printf("\nO resultado de x é %f",x);
}
