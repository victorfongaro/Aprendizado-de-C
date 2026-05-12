#include <stdio.h>
#include <math.h>

int main(){
    int cod;
    float n1, n2, n3, n4, resul;
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    printf("Informe a quarta nota: ");
    scanf("%f", &n4);
    printf("Informe 1 para calcular a media aritimetica");
    printf("\nInforme 2 para calcular a media harmonica");
    printf("\nInforme 3 para calcular a media geometrica");
    printf("\nInforme 4 para calcular a media quadratica\n");
    scanf("%d", &cod);
    switch(cod){
        case 1:resul = (n1+n2+n3+n4)/4;
        printf("O resultado e %.2f", resul);break;

        case 2:resul = 4/(1/n1+1/n2+1/n3+1/n4);
        printf("O resultado e %.2f", resul);break;

        case 3:resul = sqrt(sqrt(n1*n2*n3*n4));
        printf("O resultado e %.2f", resul);break;

        case 4:resul = sqrt(((n1*n1)+(n2*n2)+(n3*n3)+(n4*n4)/4));
        printf("O resultado e %.2f", resul);break;
    }

}
