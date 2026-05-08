#include <stdio.h>

int main(){
    int n;
    float soma = 0, cont = 1;
    printf("Insira um número: ");
    scanf("%d", &n);

    while (cont <= n){
        soma = soma + (1/cont);
        cont++;
    };
    printf("%f", soma);
    return 0;
}
