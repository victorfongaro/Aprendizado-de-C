#include <stdio.h>

int main(){
    int qtdLin1, qtdLin2, qtdCol1,qtdCol2;
    printf("Informe a quantia de linhas do v1: ");
    scanf("%d", &qtdLin1);
    printf("Informe a quantia de colunas do v1: ");
    scanf("%d", &qtdCol1);
    printf("Informe a quantia de linhas do v2: ");
    scanf("%d", &qtdLin2);
    printf("Informe a quantia de colunas do v2: ");
    scanf("%d", &qtdCol2);
    int i,j,z, v1[qtdLin1][qtdCol1],v2[qtdLin2][qtdCol2], vSoma[qtdLin1][qtdCol2];
    for (i = 0; i < qtdLin1; i++){
        for (j = 0; j < qtdCol1; j++){
            printf("\nInforme o número i[%d]j[%d] da matriz 01: ", i+1,j+1);
            scanf("%d", &v1[i][j]);
        }
    }
    for (i = 0; i < qtdLin2; i++){
        for (j = 0; j < qtdCol2; j++){
            printf("\nInforme o número i[%d]j[%d] da matriz 02: ", i+1,j+1);
            scanf("%d", &v2[i][j]);
        }
    }

    for (i = 0; i < qtdLin1; i++){
        for (j = 0; j <qtdCol2; j++){
            vSoma[i][j] = 0;
            for (z = 0; z < qtdCol1;z++){
               vSoma[i][j] += v1[i][z]*v2[z][j];

            }
        }
    }

    printf("\n\n");
    for (i = 0; i< qtdLin1; i++){
        for (j = 0; j< qtdCol2; j++){
            printf("%d ", vSoma[i][j]);
        }
        printf("\n");
    }
    return 0;
}

