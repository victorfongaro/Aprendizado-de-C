#include <stdio.h>

int main(){
    float altura, peso;
    int sexo;
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Digite 1 para homem e 2 para mulher: ");
    scanf("%d", &sexo);
    if(sexo==1){
        peso = (72.7*altura)-58;
        printf("O seu peso ideal e: %.2f", peso);
    }else if(sexo==2){
        peso = (62.1*altura)-44.7;
        printf("Seu peso ideal e: %.2f", peso);
    }else
        printf("Opcao invalida");

}
