#include <stdio.h>

int main(){
    float soma = 0;
    int n, cont = 0;
    printf("Insira o numero:  ");
    scanf("%d", & n);
    do{
        cont ++;
        if (cont%2 == 0){
            soma -= 1.0/cont;
        }else {
            soma += 1.0/cont;
        }
    } while(cont<n);
    printf("%.7f",soma);
}
