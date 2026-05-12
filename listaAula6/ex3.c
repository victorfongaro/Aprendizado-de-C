#include <stdio.h>

int main(){
    float chico, ze;
    int anos;
    for (chico = 1.50,ze = 1.10,anos = 0; ze<=chico; chico += 0.02,ze +=0.03,anos++);
    printf("Demora %d anos", anos);
    return 0;
}
