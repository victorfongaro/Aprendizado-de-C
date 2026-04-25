
#include <stdio.h>

int main()
{
    int qtdtotal, qtdpaga;
    float valorPrestacao, valorTotal, valorPago, valorDevedor;
    printf("Digite a quantidade total de parcelas: ");
    scanf("%d", &qtdtotal);
    printf("\nDigite a quantidade paga de parcelas: ");
    scanf("%d", &qtdpaga);
    printf("\nDigite o valor de cada parcela: ");
    scanf("%f", &valorPrestacao);
    valorTotal = qtdtotal * valorPrestacao;
    valorPago = qtdpaga * valorPrestacao;
    valorDevedor = valorTotal - valorPago;
    printf("Valor Total: %f\nValor Pago: %f\nSaldo Devedor: %f",valorTotal,valorPago,valorDevedor);
}
