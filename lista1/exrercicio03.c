#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int b,h;
    float a;
    printf("Digite a base:");
    scanf("%d", &b);
    printf("\nDigite a altura: ");
    scanf("%d", &h);
    a = b*h/2;
    printf("\nA area é %f", a);
}
