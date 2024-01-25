#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <vector>
#include <fcntl.h>
#include <io.h>
#include <wchar.h>
#include <stdio.h>
#include "box.h"
using namespace std;

class BoardModel
{
private:
    vector<Box> boxVector;

protected:
public:
    BoardModel();
    Box *getBoard();
};

class BoardView
{
private:
protected:
public:
    void display(BoardModel &board);
};


class BoardController
{
private:
    BoardModel &board;
    BoardView &view;

protected:
public:
    BoardController(BoardModel &board, BoardView &view) : board(board), view(view){};
    void move(Box *source, Box *target);
    void display();
};


#endif /* BOARD_H */