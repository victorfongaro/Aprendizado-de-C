#include <stdio.h>

int main(){
    int limite, n1, n2, i, prox;
    n1 = 1;
    n2 = 1;
    printf("Insira o limite de geração: ");
    scanf("%d", &limite);;
    for (i = 1; i <= limite; i++){
        prox = n1+n2;
        printf("\n%d", n1);
        n1 = n2;
        n2 = prox;
    }
    return 0;
}
