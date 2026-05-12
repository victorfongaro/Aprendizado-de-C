#include <stdio.h>

int main(){
    float sal, n_sal, dif;
    char cargo;
    printf("Informe o seu salario: ");
    scanf("%f", &sal);
    printf("\nInforme o seu cargo: ");
    scanf(" %c", &cargo);
    if(cargo=='A'){
        n_sal = sal*1.10;
        dif = n_sal-sal;
        printf("Seu salario antigo e %f", sal);
        printf("\nSeu novo salario e %f", n_sal);
        printf("\nA diferenca entre eles e de %f", dif);
    }else if(cargo=='T'){
            n_sal = sal*1.3;
            dif = n_sal-sal;
            printf("Seu salrio antigo era %f", sal);
            printf("\nSeu novo salario e %f", n_sal);
            printf("\nA diferenca entre eles e de %f", dif);
    }else if(cargo=='E'){
            n_sal = sal*1.20;
            dif = n_sal-sal;
            printf("Seu novo salario e %f", n_sal);
            printf("\nSeu novo salario e %f", n_sal);
            printf("\nA diferenca entre eles e de %f", dif);
    }else{
        n_sal = sal*1.4;
        dif = n_sal-sal;
        printf("Seu novo salario e %f", n_sal);
        printf("\nSeu novo salario e %f", n_sal);
        printf("\nA diferenca entre eles e de %f", dif);
    }
}
