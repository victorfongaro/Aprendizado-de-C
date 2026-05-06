#include <stdio.h>

int main()
{
    int x;
    printf("insira um número: ");
    scanf("%f", &x);
    if (x > 0)
        printf("positivo");
    else{
        if (x < 0){
            printf("negativo");
        }else
        printf("nulo");
    }
}
