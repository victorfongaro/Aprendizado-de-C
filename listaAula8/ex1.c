#include <stdio.h>

int main(){
    char texto[30];
    int tamanho = 0;
    printf("Escreva algo: ");
    gets(texto);
    while (texto[tamanho] != '\0'){
        tamanho++;
    }
    printf("\n%d", tamanho);
    return 0;
}
