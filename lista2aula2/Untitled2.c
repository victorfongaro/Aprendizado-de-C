#include <stdio.h>

int main()
{
    float nota;
    printf("insira uma nota: ");
    scanf("%f", &nota);
    if (nota <=10 && nota >= 0)
    {
        printf("a nota %f é válida",nota);
    }
    else
    {
        printf("a nota %f é inválida",nota);
    }

}
