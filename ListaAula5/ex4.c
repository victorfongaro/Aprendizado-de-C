#include <stdio.h>

int main(){
    int n, cont = 0, i;
    double termo;
    printf("Insira um numero: ");
    scanf("%d", &n);
    do{
        cont ++;
        termo = 1;
        for (i = 1; i <= (cont-1); i++){
            termo *= 2;
        };
        printf("\n%.0f", termo);
    } while (cont < n);
}
