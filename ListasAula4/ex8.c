#include <stdio.h>

int main(){
    int n, ntemp, x = 1;
    float E = 0, fatorial = 1;
    printf("Insira um número: ");
    scanf("%d", &n);
    while (x<=n){
        fatorial *= x;
        E += 1/fatorial;
        x++;
        fatorial = 1;
    }
    printf("%f", E);
    return 0;
}
