#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    float mediaGeometrica;
    printf("Digite a: ");
    scanf("%d", &a);
    printf("\nDigite b: ");
    scanf("%d", &b);
    printf("\nDigite c: ");
    scanf("%d", &c);
    printf("\nDigite d: ");
    scanf("%d", &d);
    mediaGeometrica = sqrt(sqrt(a*b*c*d));
    printf("\nA média geomética é %f", mediaGeometrica);
    return 0;
}
