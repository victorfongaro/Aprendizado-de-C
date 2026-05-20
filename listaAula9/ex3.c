#include <stdio.h>

float media(float a, float b, float c){
    return (a+b+c)/3;
}

int main(){
    float a,b,c;
    printf("Digita a primeira nota: ");
    scanf("%f", &a);
    printf("Digita a segunda nota: ");
    scanf("%f", &b);
    printf("Digita a terceira nota: ");
    scanf("%f", &c);
    printf("A média é %.2f", media(a,b,c));
}
