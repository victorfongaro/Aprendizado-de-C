#include <stdio.h>

int main(){
    float total, taxa = 50;
    int dias, continuar;
    do{
        printf("\nQuantos dias hospedado: ");
        scanf("%d", &dias);
        if (dias< 15){
            total = dias * (taxa + 4);
        } else {
            if (dias > 15){
                total = dias * (taxa + 3);
            } else {
                total = dias * (taxa + 3.6);
            }
        }
        printf("\nTotal a ser pago: %f", total);
        printf("\nDeseja continuar? 0 ou 1: ");
        scanf("%d", &continuar);
    } while (continuar == 1);
    return 0;
}
