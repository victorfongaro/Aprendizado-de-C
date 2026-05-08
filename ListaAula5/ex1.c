#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int chute, x = 1;
    do{
        chute = (rand()%50) + 1;
        printf(" %d", chute);
        x++;
    } while (x <=6);
    return 0;
}
