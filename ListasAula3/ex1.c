#include <stdio.h>


int main(){
    int i=1, n, contNegativo = 0;
    while (i<=5){
        printf("Insira o num %d: ",i);
        scanf("%d", &n);
        if (n <0){
            printf("\n%d é negativo.");
            contNegativo++;
        }
        i++;
    }
    printf("\n%d numeros são negativos.", contNegativo);
    return 0;
}
