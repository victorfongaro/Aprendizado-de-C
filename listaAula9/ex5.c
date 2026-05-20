#include <stdio.h>
#include <math.h>

float media(float a, float b, float c){
    return sqrt(a+b+c);
}

int main(){
    float a,b,c;
    printf("Digita a primeira nota: ");
    scanf("%f", &a);
    printf("Digita a segunda nota: ");
    scanf("%f", &b);
    printf("Digita a terceira nota: ");
    scanf("%f", &c);
    printf("A média geométrica é %.2f", media(a,b,c));
}
