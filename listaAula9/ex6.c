#include <stdio.h>

float media(float a, float b, float c){
    return ((1*a)+(2*b)+(3*c))/6;
}

int main(){
    float a,b,c;
    printf("Digita a primeira nota: ");
    scanf("%f", &a);
    printf("Digita a segunda nota: ");
    scanf("%f", &b);
    printf("Digita a terceira nota: ");
    scanf("%f", &c);
    printf("A média ponderada é %.2f", media(a,b,c));
}

