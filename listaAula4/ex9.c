#include <stdio.h>

int main(){

    float largura, altura, area, litros, latas;

    printf("Informe a largura da parede: ");
    scanf("%f", &largura);

    printf("Informe a altura da parede: ");
    scanf("%f", &altura);

    area = largura * altura;

    litros = area * 3;

    latas = litros / 2;

    printf("Area da parede: %.2f m2\n", area);
    printf("Quantidade de tinta necessaria: %.2f litros\n", litros);
    printf("Quantidade de latas necessarias: %.2f\n", latas);

}
