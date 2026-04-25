#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    float z;
    printf("Valor de a: ");
    scanf("%d", &a);
    printf("\nValor de b: ");
    scanf("%d", &b);
    printf("\nValor de c: ");
    scanf("%d", &c);
    printf("\nValor de d: ");
    scanf("%d", &d);
    z = (-b - (b*b*b) - 4*a*c + 2* (a*a))/(2*a/((b+1)*(b+1)));
    printf("\nO valor de z é %f", z);
}

