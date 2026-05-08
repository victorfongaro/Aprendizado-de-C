#include <stdio.h>

int main(){
    int n,e, x;
    printf("Insira um n: ");
    scanf("%d", & n);
    printf("\nInsira seu expoente: ");
    scanf("%d", & e);
    x=n;
    while (e >1){
            x*=n;
            e--;
    }
    printf("%d", x);
    return 0;
}
