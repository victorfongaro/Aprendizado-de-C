#include <stdio.h>

int main(){
    int contIntervalo, n;
    for (n=1; n!=0;){
        printf("Escreva um número: ");
        scanf("%d", &n);
        if (n<=200 && n>=100){
            contIntervalo++;
        }
    }
    printf("%d", contIntervalo);
    return 0;
}
