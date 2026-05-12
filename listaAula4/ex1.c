#include <stdio.h>

int main(){
    int idade, anos, meses, dias;

    printf("Informe a sua idade em dias: ");
    scanf("%d", &idade);

    anos = idade / 365;
    meses = (idade%365)/30;
    dias = (idade%365)%30;

    printf("Voce tem %d anos, %d meses, %d dias", anos, meses, dias);
}
