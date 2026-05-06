#include <stdio.h>

int main(){
    int maior = 0, menor, n, i=1;
    while (i <=5){
        printf("\nInsira um numero: ");
        scanf("%d", &n);
        if (maior < n)
            maior = n;
        if (menor > n)
            menor = n;
        i++;
    }
    printf("\nMaaior: %d\nMenor: %d",maior, menor);
    return 0;
}
