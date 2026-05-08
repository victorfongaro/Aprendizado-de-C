#include <stdio.h>

int main(){
    int n, num, c,d,u, numInv, i=0;
    printf("Informe um quantos números você quer inverter: ");
    scanf("%d", & n);
    do{
        printf("\nInforme um número centenário: ");
        scanf("%d", & num);
        c = num/100;
        d = (num%100)/10;
        u = (num%100)%10;
        numInv = u*100+d*10+c;
        printf("\n%d", numInv);
    } while (i<=n);
}
