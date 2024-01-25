#include <iostream>
#include "board.h"
using namespace std;

int main()
{
    BoardModel m;
    BoardView v;
    BoardController c(m, v);
    c.display();
    c.move((m.getBoard() + 3), (m.getBoard() + 19));
    c.display();
    c.move((m.getBoard() + 19), (m.getBoard() + 51));
    c.display();
    return 0;
}

// #include <fcntl.h>
// #include <io.h>
// #include <wchar.h>
// #include <stdio.h>

// int main()
// {
//     _setmode(_fileno(stdout), _O_U16TEXT);
//     wchar_t piece = 0x2654;

//     wprintf(L"HELLO (%lc )", piece);
//     wprintf(L"HELLO (%lc )", piece + 6);
//     return 0;
// }
