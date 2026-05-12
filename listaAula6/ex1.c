#include <stdio.h>

int main(){
    int i, j;
    printf("Número para tabuaada: ");
    scanf("%d", &i);
    for (j = 0; j <=10;j++){
        printf("\n%d x %d = %d",i,j,i*j);
    }
    return 0;
}
