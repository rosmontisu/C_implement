#include <iostream>
#include <windows.h>

void gotoxy(int x, int y) {
    //x, y 좌표 설정
    COORD pos = { x,y };
    //커서 이동
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void main() {
    gotoxy(10, 3);
    std::cout << "☆";
    gotoxy(3, 10);
    std::cout << "★";
}
