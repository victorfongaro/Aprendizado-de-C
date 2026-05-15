#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y){
    COORD c;
    c.X = x - 1;
    c.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


void limpaTela(char letrao, int lInicial, int lFinal, int cInicial, int cFinal) {
    int l, c;
    for (l=lInicial;l<lFinal;l++)
        for (c=cInicial;c<=cFinal;c++) {
            gotoxy(c,l);
            printf("%c", letrao);
    } // fecha o for
} // fecha o limpaTela

int main(){
    limpaTela('b', 1,24,1,20);
    getchar();
    limpaTela(' ', 2,6, 4,15);
    limpaTela('d', 7,17,21,26);
    limpaTela(' ', 20,24, 7,14);
} // fim do main
