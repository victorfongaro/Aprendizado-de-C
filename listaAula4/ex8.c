#include <stdio.h>

int main(){
    int x, y;
    printf("Informe o valor da coordenada X: ");
    scanf("%d", &x);
    printf("Informe o valor da coordenada Y: ");
    scanf("%d", &y);
    if(x>0 && y>0){
        printf("Primeiro quadrante");
    }else if(x<0  && y>0){
            printf("Segundo quadrante");
    }else if(x<0 && y<0){
            printf("Terceiro quadrante");
    }else if(x>0 && y<0){
            printf("Quarto quadrante");
    }else
        printf("Nao esta em nenhum quadrante");
}
