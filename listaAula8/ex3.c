#include <stdio.h>
#include <string.h>

int main(){
    char texto1[30], texto2[30];
    int resultado, i, total;
    printf("Insira algo: ");
    gets(texto1);
    printf("Insira algo: ");
    gets(texto1);

    if (strlen(texto1) != strlen(texto2)){
        if (strlen(texto1)<strlen(texto2)){
            resultado = -1;
        } else {
            resultado = 1;
        }
    } else{
        for (i = 0, total = 0;i<strlen(texto1);i++){
           if (texto1[i] == texto2[i]){
                total++;
           }
        }
        if (total == strlen(texto1)){
            resultado = 0;
        }
    }
    printf("O resultado da comparação é: %d", resultado);
    return 0;
}

