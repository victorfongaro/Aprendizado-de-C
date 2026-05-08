#include <stdio.h>

int main(){
    int qtd, cont = 1;
    float A, x = 1;
    printf("informe o número ai: ");
    scanf("%f", &A);
    printf("\nQuantas iterações? ");
    scanf("%d", &qtd);
    do{
        printf("\n%.4f", x);
        x = 0.5 * (x + (A/x));
        cont++;

    } while (cont <= qtd);

    return 0;
}
