#include <stdio.h>

int main()
{
    int num, c, d, u, sum;
    printf("Digite um número menor que mil (1000): ");
    scanf("%d", &num);
    c = num/100;
    d = (num/10)%10;
    u = num%10;
    sum = c + d + u;
    printf("\nA soma dos algarismos é %d.", sum);
}
