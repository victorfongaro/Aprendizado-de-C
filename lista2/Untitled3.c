#include <stdio.h>

int main()
{
    float salMin, valorVendas, salario;
    int qtdCarros;
    printf("Digite o salário mínimo: ");
    scanf("%f", &salMin);
    printf("\nDigite o valor total de vendas: ");
    scanf("%f", &valorVendas);
    printf("\nDigite a quantidade de carros vendido: ");
    scanf("%d", &qtdCarros);
    salario = 2 * salMin +  100 * qtdCarros + valorVendas*5/100;
    printf("O salário do funcionário é de R$%f reais.",salario);
}
