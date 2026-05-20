#include <stdio.h>

float calculoTriangulo(float b, float h){
    return (b*h)/2;
}



int main(){
    float b,h;
    printf("Digita a base ai: ");
    scanf("%f", &b);
    printf("Digita a altura: ");
    scanf("%f", &h);
    printf("%f",calculoTriangulo(b,h));
}

