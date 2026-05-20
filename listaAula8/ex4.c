#include <stdio.h>
#include <string.h>
int main(){
    char texto[30], textocopia[30];
    int i;
    printf("Escreva ai: ");
    gets(texto);
    for (i = 0; i <= strlen(texto); i++){
        textocopia[i] = texto[i];
    }
    printf("%s", textocopia);
}
