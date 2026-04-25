#include <stdio.h>

int main()

{
    float n1,n2,n3,n4,media;
    printf("Digite a nota 01: ");
    scanf("%f",&n1);
    printf("\nDigite a nota 02: ");
    scanf("%f",&n2);
    printf("\nDigite a nota 03: ");
    scanf("%f",&n3);
    printf("\nDigite a nota 04: ");
    scanf("%f",&n4);
    media = (n1+n2+n3+n4)/4;
    printf("\nA média das quatro notas é %f", media);
}
