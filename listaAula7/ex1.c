#include <stdio.h>

int main(){
    int qtd = 4;
    int i,j, v1[qtd][qtd],v2[qtd][qtd], vSoma[qtd][qtd];
    for (i = 0; i < qtd; i++){
        for (j = 0; j < qtd; j++){
            printf("\nInforme o número i[%d]j[%d] da matriz 01: ", i+1,j+1);
            scanf("%d", &v1[i][j]);
        }
    }
    for (i = 0; i < qtd; i++){
        for (j = 0; j < qtd; j++){
            printf("\nInforme o número i[%d]j[%d] da matriz 02: ", i+1,j+1);
            scanf("%d", &v2[i][j]);
        }
    }

    for (i = 0; i < qtd; i++){
        for (j = 0; j <qtd; j++){
            vSoma[i][j] = v1[i][j] + v2[i][j];
        }
    }


    printf("\n\n");
    for (i = 0; i< qtd; i++){
        printf("\n%d %d %d %d",v1[i][0],v1[i][1],v1[i][2],v1[i][3]);

    }
    printf("\n\n");
    for (i = 0; i< qtd; i++){
        printf("\n%d %d %d %d",v2[i][0],v2[i][1],v2[i][2],v2[i][3]);

    }
    printf("\n\n");
    for (i = 0; i< qtd; i++){
        printf("\n%d %d %d %d",vSoma[i][0],vSoma[i][1],vSoma[i][2],vSoma[i][3]);

    }
    return 0;
}
