#include <windows.h>
#include <conio.h>
#include <stdio.h>
#define outputHandle GetStdHandle(STD_OUTPUT_HANDLE)

#define BLACK 0
#define DARK_BLUE 1
#define DARK_GREEN 2
#define DARK_CYAN 3
#define DARK_RED 4
#define DARK_PURPLE 5
#define DARK_YELLOW 6
#define DARK_WHITE 7

#define GRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PURPLE 13
#define YELLOW 14
#define WHITE 15

int tekscolor = FOREGROUND_INTENSITY;
int background_color = 0;

void kursor(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void teks(int color)
{
    SetConsoleTextAttribute(outputHandle, color | (background_color << 4));
    tekscolor = color;
}

void bgcolor(int color)
{
    SetConsoleTextAttribute(outputHandle, tekscolor | (color << 4));
    background_color = color;
}
void color(int text, int background){
    SetConsoleTextAttribute(outputHandle,background *16 + text);
}
void pause(){
    system("pause>nul");
}


