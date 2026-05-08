#include <stdio.h>

int main(){
    int x = 1000;
    while (x<=1999){
        if (x%11 == 5){
            printf("\n%d", x);
        }
        x++;
    }
    return 0;
}
