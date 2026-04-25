#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int x,y,soma,mul,sub;
    float div;
    printf("Apresente o primeiro valor: ");
    scanf("%d", &x);
    printf("Apresente o segundo valor: ");
    scanf("%d", &y);
    soma = x + y;
    mul = x * y;
    sub = x - y;
    div = x / y;
    printf("soma: %d  \nsubtração: %d \nmultiplicação: %d \ndivisão: %f", soma, sub, mul, div);
}
