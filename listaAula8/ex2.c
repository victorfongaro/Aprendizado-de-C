#include <stdio.h>
#include <string.h>

int main(){
    char texto[30], texto2[30];
    int tamanho1 = 0, tamanho2 = 0, i = 0;
    printf("Escreva algo: ");
    gets(texto);
    printf("Escreva algo: ");
    gets(texto2);
    while (texto[i] != '\0'){
        tamanho1++;
        i++;
    }
    i = 0;
    while (texto[i] != '\0'){
        tamanho2++;
        i++;
    }
    char textojunto[tamanho1+tamanho2];
    for (i = 0; i <= tamanho1; i++){
        textojunto[i] = texto[i];
    }
    for (i = 0; i <= tamanho2; i++){
        textojunto[tamanho1+i] = texto2[i];
    }
    printf("\n%s", textojunto);
    return 0;
}
