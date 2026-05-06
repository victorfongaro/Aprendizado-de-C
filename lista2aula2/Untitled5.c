#include <stdio.h>
#include <math.h>

int main(){
    float n, numOperacao;
    printf("Escreva um número: ");
    scanf("%f", & n);
    if (n >= 0)
        numOperacao = sqrt(n);
    else
        numOperacao = n * n;
    printf("\nO resultado é: %.2f", numOperacao);
    return 0;
}
