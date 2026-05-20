#include <stdio.h>
#include <windows.h>

// Função auxiliar para pular o cursor para a posição exata (Coluna X, Linha Y)
void irParaXY(int x, int y) {
    COORD coord;
    coord.X = x - 1; // O Windows começa a contar do 0, então subtraímos 1
    coord.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void desenharBordas() {
    // 1. Descobrir o tamanho da tela
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);

    int colunas = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int linhas = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    int i,j;
    for (i = 0; i<=linhas;i++){
        irParaXY(i,linhas);
        printf("#");
    }
}

int main(){
    desenharBordas();
}
