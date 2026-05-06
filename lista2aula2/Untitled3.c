/* Leia o no. de horas trabalhadas de um operário e calcule o salário sabendo-se que ele ganha R$ 10,00 por hora.
Quando as horas excederem a 50 calcule o excesso de pagamento. A hora excedente de trabalho vale R$ 20,00.
No final do processamento imprimir o salário total e o salário excedente. */

#include <stdio.h>

int main(){
    float horas, sal, salplus;
    salplus = 0;
    printf("Insira as Horas trabalhadas: ");
    scanf("%f", & horas);
    sal = horas * 10;
    if (horas > 50){
        salplus = (horas - 50)*20;
    }
    printf("\nSalário total: %f\nSalário referente as horas excedentes: %f", sal, salplus);
    return 0;
}
