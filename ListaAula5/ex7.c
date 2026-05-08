#include <stdio.h>

int main(){
    int n, cont = 1, divisores = 0;
    printf("Informe um número: ");
    scanf("%d", &n);
    do{
        if (n%cont == 0)
            divisores++;
        cont++;
    } while (cont<=n);
    if (divisores == 2)
        printf("\nO %d é primo.", n);
    else
        printf("\nO %d não é primo.", n);

    return 0;
}
