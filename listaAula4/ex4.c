#include <stdio.h>

int main(){
    int qtd, cod;
    float pedido;
    printf("Informe 100 para cachorro quente");
    printf("\nInforme 101 para Bauru Simples");
    printf("\nInforme 102 para Bauru com  ovo");
    printf("\nInforme 103 para Hamburguer");
    printf("\nInforme 104 para X-Salada");
    printf("\nInforme 105 para Refrigerante\n");
    scanf("%d", &cod);
    printf("\nInforme a quantidade: ");
    scanf("%d", &qtd);
    switch(cod){
        case 100:
           pedido = qtd*1.30;
           printf("O valor total do pedido e %.2f", pedido);break;
        case 101:
            pedido = qtd*1.50;
            printf("O valor total do pedido e %.2f", pedido);break;
        case 102:
            pedido = qtd*1.80;
            printf("O valor total do pedido e %.2f", pedido);break;
        case 103:
            pedido = qtd*2;
            printf("O valor total do pedido e %.2f", pedido);break;
        case 104:
            pedido = qtd*3;
            printf("O valor total do pedido e %.2f", pedido);break;
        case 105:
            pedido = qtd*1.75;
            printf("O valor total do pedido e %.2f", pedido);break;


    }
}
