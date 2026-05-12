#include <stdio.h>

int main(){
    int contdiv,i,j;
    for (i = 92; i<=1478; i++){
        contdiv = 0;
        for (j = 1; j <= i; j++){
            if (i%j == 0){
                contdiv ++;
            }
        }
        if (contdiv == 2){
            printf("\n%d", i);
        }
    }

    return 0;
}
