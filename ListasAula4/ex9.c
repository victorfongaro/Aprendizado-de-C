#include <stdio.h>

int main(){
    int n, pow = 1, x = 1;
    float E = 0, fatorial = 1;
    printf("Insira um número: ");
    scanf("%d", &n);
    while (x<=n){
            fatorial *=x;
            pow *=n;
            E += pow/fatorial;
            x++;
    }
    printf("%f", E);
    return 0;
}
