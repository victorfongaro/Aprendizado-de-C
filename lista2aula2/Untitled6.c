/*  prefeitura abriu uma linha de crédito para os funcionários.
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto.
Leia o salário bruto e o valor da prestação, e informar se o empréstimo pode ou não ser concedid */
#include <stdio.h>

int main(){
    float salBruto, valorPres;
    printf("Escreva o salário bruto: ");
    scanf("%f", & salBruto);
    printf("\nInsira o valor da prestação: ");
    scanf("%f", &valorPres);
    if  (valorPres <= (0.3*salBruto))
         printf("\nEmprestimo pode ser concedido.");
    else
        printf("\nEmprestimo não pode ser concedido.");
    return 0;
}
