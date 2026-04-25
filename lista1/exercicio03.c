#include <stdio.h>

int main()

{
    float c,f;
    printf("Digite os graus em Ceusius: ");
    scanf("%f", &c);
    f = ((9*c)+32)/5;
    printf("\n%f é igual a %f em Fahrenheint.", c, f);


}
