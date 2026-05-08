#include <stdio.h>

int main(){
    int x = 85;
    while (x<= 723){
        if (x%7 == 0){
            printf("%d", x);
        }
        x++;
    }

    return 0;
}

