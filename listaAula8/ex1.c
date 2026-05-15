#include <stdio.h>

int main(){
    char texto[30];
    int tamanho = 0, i = 0;
    printf("Escreva algo: ");
    gets(texto);
    while (texto[i] != '\0'){
        tamanho++;
        i++;
    }
    printf("\n%d", tamanho);
    return 0;
}
