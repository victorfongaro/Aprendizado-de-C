#include <stdio.h>

int main(){
    int n, fatorial = 1;
    printf("Insira um n: ");
    scanf("%d", &n);
    for (n; n >= 1; n--){
        fatorial *= n;
    }
    printf("%d", fatorial);
    return 0;
}
