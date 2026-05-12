#include <stdio.h>
#include <locale.h>
int main(){
    int v1, v2;
    printf("Informe um valor: ");
    scanf("%d", &v1);
    printf("Informe outro numero: ");
    scanf("%d", &v2);
    setlocale(LC_ALL, "");
    if(v1>v2)
        printf("Esses numeros não são multiplos");
    else
        if(v2%v1==0)
            printf("Esses numeros sâo multiplos");
        else
            printf("Esses numeros não são multiplos");

}
