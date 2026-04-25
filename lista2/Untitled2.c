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
    z = (sqrt(a+b)/(c*c)) + (d*3/(a-b));
    printf("\nO valor de z é %f", z);
}

