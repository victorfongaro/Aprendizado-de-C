#include <stdio.h>

float media(float a, float b, float c){
    return 3/((1/a)+(1/b)+(1/c));
}

int main(){
    float a,b,c;
    printf("Digita a primeira nota: ");
    scanf("%f", &a);
    printf("Digita a segunda nota: ");
    scanf("%f", &b);
    printf("Digita a terceira nota: ");
    scanf("%f", &c);
    printf("A média harmônica é %.2f", media(a,b,c));
}

