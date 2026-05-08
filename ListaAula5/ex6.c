#include <stdio.h>

int main(){
    float soma = 0;
    int n = 200, cont = 0, i=0;
    do{
        cont +=2;
        i++;
        if (i == 2){
            soma -= 1.0/cont;
            i = 0;
        }else {
            soma += 1.0/cont;
        }
        printf("\n%d", cont);
    } while(cont<=n);
    printf("%.2f",soma);
}

